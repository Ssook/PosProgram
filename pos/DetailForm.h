#pragma once
#include "Table.h"
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
		DetailForm(Table test)
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
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;



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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// columnHeader1
			// 
			columnHeader1->Text = L"메뉴";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(314, 498);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"안주류";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DetailForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(419, 498);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"주류";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DetailForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(522, 498);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 47);
			this->button3->TabIndex = 2;
			this->button3->Text = L"기타";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DetailForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(314, 550);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 47);
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
			this->listView1->Location = System::Drawing::Point(20, 39);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(243, 557);
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
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(66, 18);
			this->button5->TabIndex = 0;
			this->button5->Text = L"뒤로";
			this->button5->Click += gcnew System::EventHandler(this, &DetailForm::redirecMain);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(283, 44);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 46);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(412, 44);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(123, 46);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(541, 44);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(123, 46);
			this->button8->TabIndex = 7;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(928, 44);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(123, 46);
			this->button9->TabIndex = 10;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(799, 44);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(123, 46);
			this->button10->TabIndex = 9;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(670, 44);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(123, 46);
			this->button11->TabIndex = 8;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(928, 96);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(123, 46);
			this->button12->TabIndex = 16;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(799, 96);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(123, 46);
			this->button13->TabIndex = 15;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(670, 96);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(123, 46);
			this->button14->TabIndex = 14;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(541, 96);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(123, 46);
			this->button15->TabIndex = 13;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(412, 96);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(123, 46);
			this->button16->TabIndex = 12;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(283, 96);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(123, 46);
			this->button17->TabIndex = 11;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(928, 236);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(123, 46);
			this->button18->TabIndex = 28;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(799, 236);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(123, 46);
			this->button19->TabIndex = 27;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(670, 236);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(123, 46);
			this->button20->TabIndex = 26;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(541, 236);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(123, 46);
			this->button21->TabIndex = 25;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(412, 236);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(123, 46);
			this->button22->TabIndex = 24;
			this->button22->Text = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(283, 236);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(123, 46);
			this->button23->TabIndex = 23;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(928, 184);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(123, 46);
			this->button24->TabIndex = 22;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(799, 184);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(123, 46);
			this->button25->TabIndex = 21;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(670, 184);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(123, 46);
			this->button26->TabIndex = 20;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(541, 184);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(123, 46);
			this->button27->TabIndex = 19;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(412, 184);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(123, 46);
			this->button28->TabIndex = 18;
			this->button28->Text = L"button28";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(283, 184);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(123, 46);
			this->button29->TabIndex = 17;
			this->button29->Text = L"button29";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(928, 374);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(123, 46);
			this->button30->TabIndex = 40;
			this->button30->Text = L"button30";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(799, 374);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(123, 46);
			this->button31->TabIndex = 39;
			this->button31->Text = L"button31";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(670, 374);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(123, 46);
			this->button32->TabIndex = 38;
			this->button32->Text = L"button32";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(541, 374);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(123, 46);
			this->button33->TabIndex = 37;
			this->button33->Text = L"button33";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(412, 374);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(123, 46);
			this->button34->TabIndex = 36;
			this->button34->Text = L"button34";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(283, 374);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(123, 46);
			this->button35->TabIndex = 35;
			this->button35->Text = L"button35";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(928, 322);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(123, 46);
			this->button36->TabIndex = 34;
			this->button36->Text = L"button36";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(799, 322);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(123, 46);
			this->button37->TabIndex = 33;
			this->button37->Text = L"button37";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(670, 322);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(123, 46);
			this->button38->TabIndex = 32;
			this->button38->Text = L"button38";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(541, 322);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(123, 46);
			this->button39->TabIndex = 31;
			this->button39->Text = L"button39";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(412, 322);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(123, 46);
			this->button40->TabIndex = 30;
			this->button40->Text = L"button40";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(283, 322);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(123, 46);
			this->button41->TabIndex = 29;
			this->button41->Text = L"button41";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// DetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1077, 624);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DetailForm";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		listViewItem = gcnew Windows::Forms::ListViewItem(this->button3->Text);
		listViewItem->SubItems->Add(i.ToString());
		i++;
		this->listView1->Items->Clear();
		this->listView1->Items->Add(this->listViewItem);
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
		this->listView1->Items->Clear();
		this->listView1->Items->Add(this->listViewItem);
	}//이게 메뉴하나 눌렀을떄
private: System::Void redirecMain(System::Object^  sender, System::EventArgs^  e) {
	this->Owner->Visible = true;
	this->Close();

}
};
}
