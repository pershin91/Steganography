#pragma once

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

	private: System::Windows::Forms::Button^  button6;
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
	private: System::ComponentModel::Container ^components;

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
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"", L"", L"", L"", L"", L"" });
			this->listBox1->Location = System::Drawing::Point(187, 134);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(246, 100);
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
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
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
			listBox1->Items[0] = "format		WAVE";
			listBox1->Items[1] = "sampleRate	" + Convert::ToUInt16(buffer1[12]) + "hz";
			listBox1->Items[2] = "numChannels	" + Convert::ToUInt16(buffer1[11]);
			listBox1->Items[3] = "bitsPerSample	" + Convert::ToUInt16(buffer1[17]) + "bit";
			listBox1->Items[4] = "Size1		" + size1 + "byte";

			for (int i = 0; i < size1; i++)
			{
				buffer1[i] = fs1->ReadByte();
			}	
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int i1 = 0;
		int bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit_buf0, bit_buf1, bit_buf2, bit_buf3, bit_buf4, bit_buf5, bit_buf6, bit_buf7;
		for (int i = 124; i < 124 + size2*4; i++)
		{	
			// читаем по битам сообщение
			int Byte_buf = Convert::ToUInt16(buffer2[i1]);
			if (Byte_buf & 0x01) { bit0 = 1; } else { bit0 = 0; }
			if (Byte_buf & 0x02) { bit1 = 1; } else { bit1 = 0; }
			if (Byte_buf & 0x04) { bit2 = 1; } else { bit2 = 0; }
			if (Byte_buf & 0x08) { bit3 = 1; } else { bit3 = 0; }
			if (Byte_buf & 0x10) { bit4 = 1; } else { bit4 = 0; }
			if (Byte_buf & 0x20) { bit5 = 1; } else { bit5 = 0; }
			if (Byte_buf & 0x40) { bit6 = 1; } else { bit6 = 0; }
			if (Byte_buf & 0x80) { bit7 = 1; } else { bit7 = 0; }
			i1++;
			// читаем по битам байт 1
			int Byte_buf1 = Convert::ToUInt16(buffer1[i]);
			if (Byte_buf1 & 0x01) { bit_buf0 = 1; } else { bit_buf0 = 0; }
			if (Byte_buf1 & 0x02) { bit_buf1 = 1; } else { bit_buf1 = 0; }
			if (Byte_buf1 & 0x04) { bit_buf2 = 1; } else { bit_buf2 = 0; }
			if (Byte_buf1 & 0x08) { bit_buf3 = 1; } else { bit_buf3 = 0; }

			if ((bit0 == 1) & (bit_buf0 == 1)) {}
			else if ((bit0 == 0) & (bit_buf0 == 0)) {}
			else if ((bit0 == 1) & (bit_buf0 == 0)) Byte_buf1 = Byte_buf1 + 0x01;
			else if ((bit0 == 0) & (bit_buf0 == 1)) Byte_buf1 = Byte_buf1 - 0x01;

			if ((bit1 == 1) & (bit_buf1 == 1)) {}
			else if ((bit1 == 0) & (bit_buf1 == 0)) {}
			else if ((bit1 == 1) & (bit_buf1 == 0)) Byte_buf1 = Byte_buf1 + 0x02;
			else if ((bit1 == 0) & (bit_buf1 == 1)) Byte_buf1 = Byte_buf1 - 0x02;

			if ((bit2 == 1) & (bit_buf2 == 1)) {}
			else if ((bit2 == 0) & (bit_buf2 == 0)) {}
			else if ((bit2 == 1) & (bit_buf2 == 0)) Byte_buf1 = Byte_buf1 + 0x04;
			else if ((bit2 == 0) & (bit_buf2 == 1)) Byte_buf1 = Byte_buf1 - 0x04;

			if ((bit3 == 1) & (bit_buf3 == 1)) {}
			else if ((bit3 == 0) & (bit_buf3 == 0)) {}
			else if ((bit3 == 1) & (bit_buf3 == 0)) Byte_buf1 = Byte_buf1 + 0x08;
			else if ((bit3 == 0) & (bit_buf3 == 1)) Byte_buf1 = Byte_buf1 - 0x08;

			buffer1[i] = Convert::ToChar(Byte_buf1);
			i++;
			i++;

			//читаем по битам байт 2
			int Byte_buf2 = Convert::ToUInt16(buffer1[i]);
			if (Byte_buf2 & 0x01) { bit_buf4 = 1; } else { bit_buf4 = 0; }
			if (Byte_buf2 & 0x02) { bit_buf5 = 1; } else { bit_buf5 = 0; }
			if (Byte_buf2 & 0x04) { bit_buf6 = 1; } else { bit_buf6 = 0; }
			if (Byte_buf2 & 0x08) { bit_buf7 = 1; } else { bit_buf7 = 0; }

			if ((bit4 == 1) & (bit_buf4 == 1)) {}
			else if ((bit4 == 0) & (bit_buf4 == 0)) {}
			else if ((bit4 == 1) & (bit_buf4 == 0)) Byte_buf2 = Byte_buf2 + 0x01;
			else if ((bit4 == 0) & (bit_buf4 == 1)) Byte_buf2 = Byte_buf2 - 0x01;

			if ((bit5 == 1) & (bit_buf5 == 1)) {}
			else if ((bit5 == 0) & (bit_buf5 == 0)) {}
			else if ((bit5 == 1) & (bit_buf5 == 0)) Byte_buf2 = Byte_buf2 + 0x02;
			else if ((bit5 == 0) & (bit_buf5 == 1)) Byte_buf2 = Byte_buf2 - 0x02;

			if ((bit6 == 1) & (bit_buf6 == 1)) {}
			else if ((bit6 == 0) & (bit_buf6 == 0)) {}
			else if ((bit6 == 1) & (bit_buf6 == 0)) Byte_buf2 = Byte_buf2 + 0x04;
			else if ((bit6 == 0) & (bit_buf6 == 1)) Byte_buf2 = Byte_buf2 - 0x04;

			if ((bit7 == 1) & (bit_buf7 == 1)) {}
			else if ((bit7 == 0) & (bit_buf7 == 0)) {}
			else if ((bit7 == 1) & (bit_buf7 == 0)) Byte_buf2 = Byte_buf2 + 0x08;
			else if ((bit7 == 0) & (bit_buf7 == 1)) Byte_buf2 = Byte_buf2 - 0x08;

			buffer1[i] = Convert::ToChar(Byte_buf2);
			i++;
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
		int i1 = 0;
		int bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit_buf0, bit_buf1, bit_buf2, bit_buf3, bit_buf4, bit_buf5, bit_buf6, bit_buf7;

		for (int i = 124; i < size1; i++)
		{
			int Byte_buf1 = Convert::ToUInt16(buffer1[i]);
			if (Byte_buf1 & 0x01) { bit_buf4 = 1; } else { bit_buf4 = 0; }
			if (Byte_buf1 & 0x02) { bit_buf5 = 1; } else { bit_buf5 = 0; }
			if (Byte_buf1 & 0x04) { bit_buf6 = 1; } else { bit_buf6 = 0; }
			if (Byte_buf1 & 0x08) { bit_buf7 = 1; } else { bit_buf7 = 0; }
			i++;
			i++;
			int Byte_buf2 = Convert::ToUInt16(buffer1[i]);
			if (Byte_buf2 & 0x01) { bit_buf0 = 1; } else { bit_buf0 = 0; }
			if (Byte_buf2 & 0x02) { bit_buf1 = 1; } else { bit_buf1 = 0; }
			if (Byte_buf2 & 0x04) { bit_buf2 = 1; } else { bit_buf2 = 0; }
			if (Byte_buf2 & 0x08) { bit_buf3 = 1; } else { bit_buf3 = 0; }
			i++;

			int Byte_buf = Convert::ToUInt16(buffer2[i1]);
			Byte_buf = 0;
			if (bit_buf4 == 1) Byte_buf = Byte_buf + 0x01;
			if (bit_buf5 == 1) Byte_buf = Byte_buf + 0x02;
			if (bit_buf6 == 1) Byte_buf = Byte_buf + 0x04;
			if (bit_buf7 == 1) Byte_buf = Byte_buf + 0x08;
			if (bit_buf0 == 1) Byte_buf = Byte_buf + 0x10;
			if (bit_buf1 == 1) Byte_buf = Byte_buf + 0x20;
			if (bit_buf2 == 1) Byte_buf = Byte_buf + 0x40;
			if (bit_buf3 == 1) Byte_buf = Byte_buf + 0x80;
			buffer1[i1] = Convert::ToChar(Byte_buf);
			i1++;
		}

		SaveFileDialog ^ saveFile = gcnew SaveFileDialog();
		saveFile->Filter = "Text Files|*.txt";
		saveFile->InitialDirectory = "f:\\Музыка:\\";
		saveFile->Title = "Сохранить файл";

		if (saveFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileStream^ fs1 = gcnew FileStream(saveFile->FileName, FileMode::OpenOrCreate);
			textBox2->Text = saveFile->FileName->ToString();

			for (int i = 0; i < size1; i++)
			{
				fs1->WriteByte(buffer1[i]);
			}
			fs1->Close();
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
			listBox1->Items[5] = "Size2		" + size2 + "byte";
			if (size1 > size2 * 4 + 124)
			for (int i = 0; i < size2; i++)
			{
				buffer2[i] = fs2->ReadByte();
			}
			else MessageBox::Show("Недостаточно места в файле !");
		}
	}
};
}
