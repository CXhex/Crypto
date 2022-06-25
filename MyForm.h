#pragma once

namespace Crypto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::NumericUpDown^ privateKey;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioButton_Cesar;

	private: System::Windows::Forms::RadioButton^ radioButton_RSA;
	private: System::Windows::Forms::RadioButton^ radioButton_XOR;






	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::NumericUpDown^ privateKey2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;



	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->privateKey = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton_Cesar = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_RSA = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_XOR = (gcnew System::Windows::Forms::RadioButton());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->privateKey2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->privateKey))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->privateKey2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// privateKey
			// 
			this->privateKey->Location = System::Drawing::Point(376, 38);
			this->privateKey->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->privateKey->Name = L"privateKey";
			this->privateKey->Size = System::Drawing::Size(73, 20);
			this->privateKey->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Unispace", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(393, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Key";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(28, 128);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(367, 153);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(28, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 41);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Crypt";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(433, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 41);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Decrypt";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// radioButton_Cesar
			// 
			this->radioButton_Cesar->AutoSize = true;
			this->radioButton_Cesar->Location = System::Drawing::Point(28, 15);
			this->radioButton_Cesar->Name = L"radioButton_Cesar";
			this->radioButton_Cesar->Size = System::Drawing::Size(52, 17);
			this->radioButton_Cesar->TabIndex = 8;
			this->radioButton_Cesar->TabStop = true;
			this->radioButton_Cesar->Text = L"Cesar";
			this->radioButton_Cesar->UseVisualStyleBackColor = true;
			this->radioButton_Cesar->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_Cesar_CheckedChanged);
			// 
			// radioButton_RSA
			// 
			this->radioButton_RSA->AutoSize = true;
			this->radioButton_RSA->Location = System::Drawing::Point(28, 61);
			this->radioButton_RSA->Name = L"radioButton_RSA";
			this->radioButton_RSA->Size = System::Drawing::Size(47, 17);
			this->radioButton_RSA->TabIndex = 9;
			this->radioButton_RSA->TabStop = true;
			this->radioButton_RSA->Text = L"RSA";
			this->radioButton_RSA->UseVisualStyleBackColor = true;
			this->radioButton_RSA->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_RSA_CheckedChanged);
			// 
			// radioButton_XOR
			// 
			this->radioButton_XOR->AutoSize = true;
			this->radioButton_XOR->Location = System::Drawing::Point(28, 38);
			this->radioButton_XOR->Name = L"radioButton_XOR";
			this->radioButton_XOR->Size = System::Drawing::Size(48, 17);
			this->radioButton_XOR->TabIndex = 10;
			this->radioButton_XOR->TabStop = true;
			this->radioButton_XOR->Text = L"XOR";
			this->radioButton_XOR->UseVisualStyleBackColor = true;
			this->radioButton_XOR->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_XOR_CheckedChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::White;
			this->richTextBox2->Location = System::Drawing::Point(433, 128);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(367, 153);
			this->richTextBox2->TabIndex = 11;
			this->richTextBox2->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(262, 304);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 41);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(667, 304);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 41);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(28, 97);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 25);
			this->button5->TabIndex = 13;
			this->button5->Text = L"import";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(296, 97);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 25);
			this->button6->TabIndex = 13;
			this->button6->Text = L"export";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(433, 97);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 25);
			this->button7->TabIndex = 13;
			this->button7->Text = L"import";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(701, 97);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(99, 25);
			this->button8->TabIndex = 13;
			this->button8->Text = L"export";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// privateKey2
			// 
			this->privateKey2->Location = System::Drawing::Point(377, 64);
			this->privateKey2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->privateKey2->Name = L"privateKey2";
			this->privateKey2->Size = System::Drawing::Size(72, 20);
			this->privateKey2->TabIndex = 14;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(834, 381);
			this->Controls->Add(this->privateKey2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->radioButton_XOR);
			this->Controls->Add(this->radioButton_RSA);
			this->Controls->Add(this->radioButton_Cesar);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->privateKey);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(850, 420);
			this->MinimumSize = System::Drawing::Size(850, 420);
			this->Name = L"MyForm";
			this->Text = L"Encryption by Antiproger";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->privateKey))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->privateKey2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButton_Cesar_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButton_RSA_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButton_XOR_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
};
}
