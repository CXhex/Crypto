#include "Cryptography.h"

Cryptography::Cryptography()
{
	privateKey = 43;
}

Cryptography::~Cryptography()
{
}

void Cryptography::CreateKey()
{
	int p = Helper::nearPrime(privateKey);
	int q = Helper::nearPrime(privateKey+2);
	n = p * q; //public
	int phi = (p - 1)*(q - 1);
	publicKey = Helper::Coprime(n, phi); //public
	privateKey = CalculateDecryptionKey(publicKey, phi);
}

// x*a=1 mod(b)
int Cryptography::CalculateDecryptionKey(int publicKey, int phi)
{
	int x, y;
	Helper::__xgcd(publicKey, phi, x, y);
	if (x >= 0)
		return x;
	else
		return phi + x;
}

string Cryptography::Cesar(string message)
{
	for (auto& a : message) {
		if(a!= 0x09)a = a + privateKey % 26;
	}
	return message;
}

string Cryptography::_Cesar(string message)
{
	for (auto& a : message) {
		if (a != 0x09)a = a - privateKey%26;
	}
	return message;
}


string Cryptography::RSA(string message)
{
	CreateKey();
	for (auto& a : message) {
		if(a!=0x20)a = Helper::cdn(a - 97, publicKey, n);
	}
	return message;
}

string Cryptography::_RSA(string message)
{
	for (auto& a : message) {
		if (a != 0x20)a = 97 + Helper::cdn(a, privateKey, n);
	}
	return message;
}

string Cryptography::XOR(string message)
{
	for (auto& a : message) {
		a = a ^ privateKey;
	}
	return message;
}

int Cryptography::setKey(int key) {
	this->privateKey = key;
	return 0;
}

int Cryptography::setKey_2(int key) {
	this->privateKey_2 = key;
	return 0;
}


int Cryptography::getKey() {
	return this->privateKey;
}