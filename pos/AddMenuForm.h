#pragma once
#include "PosMenuItem.h"
#include <msclr\marshal_cppstd.h>
#include <string>

namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AddMenuForm�� ���� ����Դϴ�.
	/// </summary>
	public ref class AddMenuForm : public System::Windows::Forms::Form
	{
	public:
		AddMenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~AddMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label4;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;

	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->Location = System::Drawing::Point(115, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 42);
			this->label4->TabIndex = 18;
			this->label4->Text = L"�޴� �߰�";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(269, 400);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 36);
			this->button2->TabIndex = 17;
			this->button2->Text = L"���";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddMenuForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(194, 400);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 36);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Ȯ��";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddMenuForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(49, 329);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(305, 23);
			this->comboBox1->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 299);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 15);
			this->label3->TabIndex = 14;
			this->label3->Text = L"ī�װ�";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(49, 248);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(305, 25);
			this->textBox2->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 218);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 12;
			this->label2->Text = L"����";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(49, 172);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(305, 25);
			this->textBox1->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 10;
			this->label1->Text = L"�޴�";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(157, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 15);
			this->label5->TabIndex = 19;
			this->label5->Text = L"label5";
			// 
			// AddMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 489);
			this->ControlBox = false;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"AddMenuForm";
			this->Text = L"AddMenuForm";
			this->Load += gcnew System::EventHandler(this, &AddMenuForm::AddMenuForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddMenuForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private:void MarshalString(String ^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		// ������ ��� �Է����� �ʾ��� ���
		if (textBox1->Text == "" || textBox2->Text == "" || comboBox1->Text == "")
			MessageBox::Show("�޴� ������ ��� �Է��ϼ���");
		// �޴� �̸� �̹� �����ϴ� ��� ó�� �߰�

		// �Է¹��� ������ ó��
		String^ menuName = textBox1->Text;
		String^ menuPrice = textBox2->Text;
		String^ menuCategory = comboBox1->Text;

		std::string name = msclr::interop::marshal_as<std::string>(menuName);
		std::string price = msclr::interop::marshal_as<std::string>(menuPrice);
		std::string category = msclr::interop::marshal_as<std::string>(menuCategory);

		int Iprice = std::stoi(price);
		int ICategory = std::stoi(category);

		// PosMenuItem ��ü ����
		PosMenuItem item(name, Iprice, ICategory);		

	}

	// �޴� �߰� ��� > ���� ȭ���� �޴� ���� ȭ������ �̵�
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Owner->Visible = true;
		this->Close();
	}

};
}
