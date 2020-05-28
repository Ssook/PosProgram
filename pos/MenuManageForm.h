#pragma once
#include "AddMenuForm.h"
#include "ModifyMenuForm.h"

namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MenuManageForm�� ���� ����Դϴ�.
	/// </summary>
	public ref class MenuManageForm : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	public:
		MenuManageForm()
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
		~MenuManageForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1, 0);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�ڷΰ���";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuManageForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(107, 176);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(270, 61);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1. �޴� �߰�";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuManageForm::button2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(161, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 42);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�޴� ����";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(107, 261);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(270, 61);
			this->button3->TabIndex = 3;
			this->button3->Text = L"2. �޴� ����/����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuManageForm::button3_Click);
			// 
			// MenuManageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 402);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MenuManageForm";
			this->Text = L"MenuManageForm";
			this->Load += gcnew System::EventHandler(this, &MenuManageForm::MenuManageForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

		// ���� �޴��� �̵�
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Owner->Visible = true;
		this->Close();
	}

			 // �޴� �߰� ȭ������ �̵�
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		pos::AddMenuForm AddMenuForm;
		AddMenuForm.Owner = this;
		AddMenuForm.ShowDialog();
	}

			 // �޴� ����/���� ȭ������ �̵�
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		pos::ModifyMenuForm ModifyMenuForm;
		ModifyMenuForm.Owner = this;
		ModifyMenuForm.ShowDialog();
	}

	private: System::Void MenuManageForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}