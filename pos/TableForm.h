#pragma once
#include "DetailForm.h"
namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Table table[30];
	/// <summary>
	/// TableForm에 대한 요약입니다.
	/// </summary>
	public ref class TableForm : public System::Windows::Forms::Form
	{
	public:
		TableForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~TableForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog2;
	private: System::Windows::Forms::ColorDialog^  colorDialog3;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ListView^  listView4;
	private: System::Windows::Forms::ListView^  listView5;
	private: System::Windows::Forms::ListView^  listView6;
	private: System::Windows::Forms::ListView^  listView7;
	private: System::Windows::Forms::ListView^  listView8;
	private: System::Windows::Forms::ListView^  listView9;
	private: System::Windows::Forms::ListView^  listView10;
	private: System::Windows::Forms::ListView^  listView11;
	private: System::Windows::Forms::ListView^  listView12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;


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
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog3 = (gcnew System::Windows::Forms::ColorDialog());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->listView5 = (gcnew System::Windows::Forms::ListView());
			this->listView6 = (gcnew System::Windows::Forms::ListView());
			this->listView7 = (gcnew System::Windows::Forms::ListView());
			this->listView8 = (gcnew System::Windows::Forms::ListView());
			this->listView9 = (gcnew System::Windows::Forms::ListView());
			this->listView10 = (gcnew System::Windows::Forms::ListView());
			this->listView11 = (gcnew System::Windows::Forms::ListView());
			this->listView12 = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader1 });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(45, 28);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(121, 97);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &TableForm::listView1_MouseDown);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"1번 테이블";
			// 
			// listView2
			// 
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(205, 28);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(121, 97);
			this->listView2->TabIndex = 2;
			this->listView2->UseCompatibleStateImageBehavior = false;
			// 
			// listView3
			// 
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(363, 28);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(121, 97);
			this->listView3->TabIndex = 3;
			this->listView3->UseCompatibleStateImageBehavior = false;
			// 
			// listView4
			// 
			this->listView4->HideSelection = false;
			this->listView4->Location = System::Drawing::Point(517, 28);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(121, 97);
			this->listView4->TabIndex = 4;
			this->listView4->UseCompatibleStateImageBehavior = false;
			// 
			// listView5
			// 
			this->listView5->HideSelection = false;
			this->listView5->Location = System::Drawing::Point(517, 153);
			this->listView5->Name = L"listView5";
			this->listView5->Size = System::Drawing::Size(121, 97);
			this->listView5->TabIndex = 8;
			this->listView5->UseCompatibleStateImageBehavior = false;
			// 
			// listView6
			// 
			this->listView6->HideSelection = false;
			this->listView6->Location = System::Drawing::Point(363, 153);
			this->listView6->Name = L"listView6";
			this->listView6->Size = System::Drawing::Size(121, 97);
			this->listView6->TabIndex = 7;
			this->listView6->UseCompatibleStateImageBehavior = false;
			// 
			// listView7
			// 
			this->listView7->HideSelection = false;
			this->listView7->Location = System::Drawing::Point(205, 153);
			this->listView7->Name = L"listView7";
			this->listView7->Size = System::Drawing::Size(121, 97);
			this->listView7->TabIndex = 6;
			this->listView7->UseCompatibleStateImageBehavior = false;
			// 
			// listView8
			// 
			this->listView8->HideSelection = false;
			this->listView8->Location = System::Drawing::Point(45, 153);
			this->listView8->Name = L"listView8";
			this->listView8->Size = System::Drawing::Size(121, 97);
			this->listView8->TabIndex = 5;
			this->listView8->UseCompatibleStateImageBehavior = false;
			// 
			// listView9
			// 
			this->listView9->HideSelection = false;
			this->listView9->Location = System::Drawing::Point(517, 275);
			this->listView9->Name = L"listView9";
			this->listView9->Size = System::Drawing::Size(121, 97);
			this->listView9->TabIndex = 12;
			this->listView9->UseCompatibleStateImageBehavior = false;
			// 
			// listView10
			// 
			this->listView10->HideSelection = false;
			this->listView10->Location = System::Drawing::Point(363, 275);
			this->listView10->Name = L"listView10";
			this->listView10->Size = System::Drawing::Size(121, 97);
			this->listView10->TabIndex = 11;
			this->listView10->UseCompatibleStateImageBehavior = false;
			// 
			// listView11
			// 
			this->listView11->HideSelection = false;
			this->listView11->Location = System::Drawing::Point(205, 275);
			this->listView11->Name = L"listView11";
			this->listView11->Size = System::Drawing::Size(121, 97);
			this->listView11->TabIndex = 10;
			this->listView11->UseCompatibleStateImageBehavior = false;
			// 
			// listView12
			// 
			this->listView12->HideSelection = false;
			this->listView12->Location = System::Drawing::Point(45, 275);
			this->listView12->Name = L"listView12";
			this->listView12->Size = System::Drawing::Size(121, 97);
			this->listView12->TabIndex = 9;
			this->listView12->UseCompatibleStateImageBehavior = false;
			// 
			// TableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 435);
			this->Controls->Add(this->listView9);
			this->Controls->Add(this->listView10);
			this->Controls->Add(this->listView11);
			this->Controls->Add(this->listView12);
			this->Controls->Add(this->listView5);
			this->Controls->Add(this->listView6);
			this->Controls->Add(this->listView7);
			this->Controls->Add(this->listView8);
			this->Controls->Add(this->listView4);
			this->Controls->Add(this->listView3);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->listView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"TableForm";
			this->Text = L"TableForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void redirectDetail(System::Object^ sender, System::EventArgs^ e) {
			DetailForm^ f2 = gcnew DetailForm();
			f2->ShowDialog();
		}

			 
private: System::Void listView1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	DetailForm^ f2 = gcnew DetailForm();
	f2->ShowDialog();
}
};
}
