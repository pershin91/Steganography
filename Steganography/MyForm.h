#pragma once
#include <cstring>

namespace winForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::Text;
	using namespace System::IO;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}\

	public:
		int size1 = 31000000;
		int size2 = 31000000;
		
	private: System::Windows::Forms::Button^  button6;
	public:
		array<Char>^ buffer1 = gcnew array<Char>(size1);
		array<Char>^ buffer2 = gcnew array<Char>(size2);
		
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label2;

	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Открыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(161, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(272, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 257);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(161, 261);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(272, 22);
			this->textBox2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 34);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Спрятать сообщение";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(226, 325);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 34);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Раскрыть сообщение";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(329, 74);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Воспроизвести";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(347, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 74);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Стоп";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 255);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(143, 34);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Сообщение";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// listBox1
			// 
			this->listBox1->Enabled = false;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"", L"", L"", L"", L"" });
			this->listBox1->Location = System::Drawing::Point(187, 134);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(246, 84);
			this->listBox1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 17);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Информация о файле";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 369);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Стеганография в аудио файлах";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Audio Files|*.wav";
		openFileDialog1->InitialDirectory = "f:\\Музыка:\\";
		openFileDialog1->Title = "Выбери аудио файл";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			textBox1->Text = openFileDialog1->FileName->ToString();

			FileStream^ fs1 = gcnew FileStream(openFileDialog1->FileName, FileMode::Open, FileAccess::Read);
			BinaryReader ^reader = gcnew BinaryReader(fs1);
			size1 = fs1->Length;

			for (int i = 0; i < 22; i++)
			{
				buffer1[i] = reader->ReadUInt16();
			}
			reader->BaseStream->Position = 0;
			listBox1->Items[0] = "format WAVE";
			listBox1->Items[1] = "sampleRate " + Convert::ToUInt16(buffer1[12]) + "hz";
			listBox1->Items[2] = "numChannels " + Convert::ToUInt16(buffer1[11]);
			listBox1->Items[3] = "bitsPerSample " + Convert::ToUInt16(buffer1[17]) + "bit";
			listBox1->Items[4] = "Size" + size1 + "byte";

			for (int i = 0; i < size1; i++)
			{
				buffer1[i] = fs1->ReadByte();
			}	
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Console::Beep();
		for (int i = 124; i < 124 + size2; i++)
		{
			buffer1[i] = buffer2[i- 124];
		}

		SaveFileDialog ^ saveFile = gcnew SaveFileDialog();
		saveFile->Filter = "Audio Files|*.wav";
		saveFile->InitialDirectory = "f:\\Музыка:\\";
		saveFile->Title = "Сохранить файл";

		if (saveFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileStream^ fs1 = gcnew FileStream(saveFile->FileName, FileMode::OpenOrCreate);
			textBox1->Text = saveFile->FileName->ToString();

			for (int i = 0; i < size1; i++)
			{
				fs1->WriteByte(buffer1[i]);
			}
			fs1->Close();
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Console::Beep();
		Console::Beep();
		
		int a = Convert::ToUInt16(buffer1[25]);
		a = a ^ 1;
		listBox1->Items[5] = a;

		for (int i = 124; i < 124 + size2; i++)
		{
			//richTextBox1->AppendText(buffer1[i].ToString());
		}
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		SoundPlayer^ player = gcnew SoundPlayer();
		if (textBox1->Text != "")
		{
			player->SoundLocation = textBox1->Text;
			player->Load();
			player->Play();
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		SoundPlayer^ player = gcnew SoundPlayer();
		if (textBox1->Text != "")
			player->Stop();
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Text Files|*.txt";
		openFileDialog1->InitialDirectory = "f:\\Музыка:\\";
		openFileDialog1->Title = "Выбери файл для сокрытия";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			textBox2->Text = openFileDialog1->FileName->ToString();

			FileStream^ fs2 = gcnew FileStream(openFileDialog1->FileName, FileMode::Open, FileAccess::Read);

			size2 = fs2->Length;

			for (int i = 0; i < size2; i++)
			{
				buffer2[i] = fs2->ReadByte();
			}
		}
	}

};
}
