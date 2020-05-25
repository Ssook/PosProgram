#pragma once

namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MenuManageForm에 대한 요약입니다.
	/// </summary>
	public ref class MenuManageForm : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	public:
		MenuManageForm(int i)
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"뒤로가기";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuManageForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(94, 141);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(236, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1. 메뉴 추가";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuManageForm::button2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"굴림", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(141, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 34);
			this->label1->TabIndex = 2;
			this->label1->Text = L"메뉴 관리";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(94, 209);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(236, 49);
			this->button3->TabIndex = 3;
			this->button3->Text = L"2. 메뉴 수정/삭제";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuManageForm::button3_Click);
			// 
			// MenuManageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 322);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MenuManageForm";
			this->Text = L"MenuManageForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	// 메인 메뉴로 이동
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	// 메뉴 추가 화면으로 이동
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	// 메뉴 수정/삭제 화면으로 이동
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	};
}