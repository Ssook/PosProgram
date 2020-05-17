#pragma once
namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm2에 대한 요약입니다.
	/// </summary>
	public ref class DetailForm : public System::Windows::Forms::Form
	{
	public:
		int i = 0;

		DetailForm(void)
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
		~DetailForm()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Button^  button5;



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
			System::Windows::Forms::ColumnHeader^  columnHeader1;
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button5 = (gcnew System::Windows::Forms::Button());
			columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// columnHeader1
			// 
			columnHeader1->Text = L"메뉴";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(348, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 59);
			this->button1->TabIndex = 0;
			this->button1->Text = L"안주류";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DetailForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(467, 49);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 59);
			this->button2->TabIndex = 1;
			this->button2->Text = L"주류";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DetailForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(585, 49);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 59);
			this->button3->TabIndex = 2;
			this->button3->Text = L"기타";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DetailForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(348, 114);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 59);
			this->button4->TabIndex = 3;
			this->button4->Tag = L"";
			this->button4->Text = L"안주류";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DetailForm::button4_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { columnHeader1, this->columnHeader2 });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(23, 49);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(272, 302);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->Click += gcnew System::EventHandler(this, &DetailForm::listView1_Click);
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"수량";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(0, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 0;
			this->button5->Text = L"뒤로";
			this->button5->Click += gcnew System::EventHandler(this, &DetailForm::redirecMain);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 503);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listView1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->listView1->View == Windows::Forms::View::Tile) {
			this->listView1->View = Windows::Forms::View::Details;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		listViewItem = gcnew Windows::Forms::ListViewItem(this->button4->Text);
		listViewItem->SubItems->Add(i.ToString());
		i++;
		this->listView1->Items->Add(this->listViewItem);
	}//이게 메뉴하나 눌렀을떄
private: System::Void redirecMain(System::Object^  sender, System::EventArgs^  e) {
	this->Owner->Visible = true;
	this->Close();

}
};
}
