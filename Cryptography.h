#pragma once
#include "Helper.h"

#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Cryptography
{
public:
	Cryptography();
	~Cryptography();

	int setKey(int key);
	int setKey_2(int key);
	int getKey();
	void CreateKey();
	int CalculateDecryptionKey(int publicKey, int phi);

	// Cesar
	string Cesar(string message);

	string _Cesar(string message);

	// RSA
	string RSA(string message);

	string _RSA(string message);

	// XOR
	string XOR(string message);

	int publicKey;
	int n;

private:
	int privateKey;
	int privateKey_2;
};