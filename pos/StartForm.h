#pragma once
#include "TableForm.h"
#include "Table.h"

namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm�� ���� ����Դϴ�.
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
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
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
			 TableForm tableform;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(286, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 79);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1. ��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StartForm::button1_OnClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 503);
			this->Controls->Add(this->button1);
			this->Name = L"Start";
			this->Text = L"Start";
			this->Load += gcnew System::EventHandler(this, &StartForm::Start_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_OnClick(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		pos::TableForm TableForm;
		TableForm.Owner = this;
		TableForm.ShowDialog();
	
	}
	private: System::Void Start_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}


	};



}
