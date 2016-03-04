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


	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}\

			int size = 31000000;

	public:
		array<Char>^ buffer = gcnew array<Char>(size);
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
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

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(161, 118);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(272, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"������� ���������";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, 157);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(272, 22);
			this->textBox2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 34);
			this->button2->TabIndex = 4;
			this->button2->Text = L"�������� ���������";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(226, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 34);
			this->button3->TabIndex = 5;
			this->button3->Text = L"�������� ���������";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(329, 74);
			this->button4->TabIndex = 7;
			this->button4->Text = L"�������������";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(347, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 74);
			this->button5->TabIndex = 8;
			this->button5->Text = L"����";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 241);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"������������� � ����� ������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


	};
}
