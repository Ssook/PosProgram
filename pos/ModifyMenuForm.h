#pragma once
#include "StartForm.h"

namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ModifyMenuForm에 대한 요약입니다.
	/// </summary>
	public ref class ModifyMenuForm : public System::Windows::Forms::Form
	{
	public:
		ModifyMenuForm(int i)
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
		~ModifyMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ColumnHeader^  Category;
	private: System::Windows::Forms::ColumnHeader^  Menu;
	private: System::Windows::Forms::ColumnHeader^  Price;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;


	protected:

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
			this->Category = (gcnew System::Windows::Forms::ColumnHeader());
			this->Menu = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Category
			// 
			this->Category->Text = L"카테고리";
			this->Category->Width = 84;
			// 
			// Menu
			// 
			this->Menu->Text = L"메뉴";
			this->Menu->Width = 157;
			// 
			// Price
			// 
			this->Price->Text = L"가격";
			this->Price->Width = 71;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->Category, this->Menu,
					this->Price
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 21);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(323, 413);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(348, 106);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(254, 327);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"메뉴 수정";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(64, 268);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 29);
			this->button3->TabIndex = 2;
			this->button3->Text = L"삭제";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ModifyMenuForm::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(127, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 29);
			this->button1->TabIndex = 15;
			this->button1->Text = L"확인";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModifyMenuForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(32, 210);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(179, 20);
			this->comboBox1->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 186);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 13;
			this->label3->Text = L"카테고리";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(32, 141);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(179, 21);
			this->textBox2->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 11;
			this->label2->Text = L"가격";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 21);
			this->textBox1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 9;
			this->label1->Text = L"메뉴";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(451, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 40);
			this->button4->TabIndex = 2;
			this->button4->Text = L"뒤로가기";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ModifyMenuForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(524, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(78, 40);
			this->button5->TabIndex = 3;
			this->button5->Text = L"메인메뉴로";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ModifyMenuForm::button5_Click);
			// 
			// ModifyMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 445);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listView1);
			this->Name = L"ModifyMenuForm";
			this->Text = L"ModifyMenuForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		// 뒤로가기(메뉴관리 메뉴로)
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	}

			 // 메인메뉴로
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	}
			 //삭제이벤트
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}

			 // 수정 이벤트
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}


	};
}
