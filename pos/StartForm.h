#pragma once
#include "TableForm.h"

namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{

	private:
		Table *table1;
		Table *table2;
		Table *table3;
		Table *table4;
		Table *table5;
		Table *table6;

	public:
		StartForm(void)
		{
			InitializeComponent();
			table1 = new Table();
			table2 = new Table();
			table3 = new Table();
			table4 = new Table();
			table5 = new Table();
			table6 = new Table();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}
			

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(286, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 79);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1. 영업시작";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StartForm::button1_OnClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(635, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"종료하기";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StartForm::button2_Click);
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 503);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"StartForm";
			this->Text = L"Start";
			this->Load += gcnew System::EventHandler(this, &StartForm::Start_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_OnClick(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		pos::TableForm TableForm(table1, table2, table3, table4, table5, table6);
		TableForm.Owner = this;
		TableForm.ShowDialog();
	
	}
	private: System::Void Start_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}


	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};



}
