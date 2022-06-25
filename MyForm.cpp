#include "MyForm.h"
#include "Cryptography.h"
#include <msclr\marshal_cppstd.h>

using namespace System::IO;
using namespace System;

using namespace System::Windows::Forms;

[STAThreadAttribute]

void main()

{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Crypto::MyForm form;

	Application::Run(% form);

}

Cryptography DATA;
int n=0;

System::Void Crypto::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (privateKey->Value == NULL) {
		errorProvider1->SetError(privateKey, "Key is empty");
	}
	else if (richTextBox1->Text->Length<5) {
		errorProvider1->Clear();
		errorProvider1->SetError(richTextBox1, "Text length less than 5 characters");
	}else {
		errorProvider1->Clear();
		switch (n)
		{
		case 1:
			DATA.setKey(Convert::ToInt64(privateKey->Value));
			richTextBox2->Text = msclr::interop::marshal_as<System::String^>(DATA.Cesar(msclr::interop::marshal_as<std::string>(richTextBox1->Text)));
			privateKey->Value = DATA.getKey();
			break;
		case 2:
			DATA.setKey(Convert::ToInt64(privateKey->Value));
			//DATA.setKey_2(Convert::ToInt64(privateKey2->Value));
			richTextBox2->Text = msclr::interop::marshal_as<System::String^>(DATA.RSA(msclr::interop::marshal_as<std::string>(richTextBox1->Text)));
			privateKey->Value = DATA.getKey();
			break;
		case 3:
			DATA.setKey(Convert::ToInt64(privateKey->Value));
			richTextBox2->Text = msclr::interop::marshal_as<System::String^>(DATA.XOR(msclr::interop::marshal_as<std::string>(richTextBox1->Text)));
			privateKey->Value = DATA.getKey();
			break;
		default:
			break;
		}

	}
	
	return System::Void();
}

System::Void Crypto::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (privateKey->Value == NULL) {
		errorProvider1->SetError(privateKey, "Key is empty");
	}
	else if (richTextBox2->Text->Length < 5) {
		errorProvider1->Clear();
		errorProvider1->SetError(richTextBox2, "Text length less than 5 characters");
	}
	else {
		errorProvider1->Clear();
		switch (n)
		{
		case 1:
			DATA.setKey(Convert::ToInt64(privateKey->Value));
			richTextBox1->Text = msclr::interop::marshal_as<System::String^>(DATA._Cesar(msclr::interop::marshal_as<std::string>(richTextBox2->Text)));
			privateKey->Value = DATA.getKey();
			break;
		case 2:
			DATA.setKey(Convert::ToInt64(privateKey->Value));
			richTextBox1->Text = msclr::interop::marshal_as<System::String^>(DATA._RSA(msclr::interop::marshal_as<std::string>(richTextBox2->Text)));
			privateKey->Value = DATA.getKey();
			break;
		case 3:
			DATA.setKey(Convert::ToInt64(privateKey->Value));
			richTextBox1->Text = msclr::interop::marshal_as<System::String^>(DATA.XOR(msclr::interop::marshal_as<std::string>(richTextBox2->Text)));
			privateKey->Value = DATA.getKey();
			break;
		default:
			break;
		}
	}
}

System::Void Crypto::MyForm::openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{

			String^ fileName = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ readFile = File::ReadAllText(fileName);

			// Write complete file path to file path text box
			richTextBox1->Text = readFile;

			myStream->Close();
		}
	}
	return System::Void();
}

System::Void Crypto::MyForm::saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	StreamWriter^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;

	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->RestoreDirectory = true;

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ fileName = saveFileDialog1->InitialDirectory + saveFileDialog1->FileName;
		File::WriteAllText(fileName, richTextBox2->Text);

	}

	return System::Void();
}

System::Void Crypto::MyForm::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	exit(0);
	return System::Void();
}

System::Void Crypto::MyForm::radioButton_Cesar_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	privateKey->Maximum = 25;
	n = 1;
	privateKey2->Visible = false;
	return System::Void();
}

System::Void Crypto::MyForm::radioButton_RSA_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	privateKey->Maximum = 9999;
	n = 2;
	privateKey2->Visible = true;
	return System::Void();
}

System::Void Crypto::MyForm::radioButton_XOR_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	n = 3;
	privateKey2->Visible = false;
	return System::Void();
}

System::Void Crypto::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	richTextBox1->Text = "";
	return System::Void();
}

System::Void Crypto::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	richTextBox2->Text = "";
	return System::Void();
}

// import to crypt
System::Void Crypto::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{

			String^ fileName = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ readFile = File::ReadAllText(fileName);

			// Write complete file path to file path text box
			richTextBox1->Text = readFile;

			myStream->Close();
		}
	}
	return System::Void();
}

System::Void Crypto::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	StreamWriter^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;

	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->RestoreDirectory = true;

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ fileName = saveFileDialog1->InitialDirectory + saveFileDialog1->FileName;
		File::WriteAllText(fileName, richTextBox1->Text);

	}
	return System::Void();
}

// import to decrypt
System::Void Crypto::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{

			String^ fileName = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ readFile = File::ReadAllText(fileName);

			// Write complete file path to file path text box
			richTextBox2->Text = readFile;

			myStream->Close();
		}
	}
	return System::Void();
}

System::Void Crypto::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	StreamWriter^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;

	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->RestoreDirectory = true;

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ fileName = saveFileDialog1->InitialDirectory + saveFileDialog1->FileName;
		File::WriteAllText(fileName, richTextBox2->Text);

	}
	return System::Void();
}
