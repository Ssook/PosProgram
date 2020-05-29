#pragma once
#include "DetailForm.h"
#include "Table.h"

namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// TableForm에 대한 요약입니다.
	/// </summary>
	public ref class TableForm : public System::Windows::Forms::Form
	{

	private:
		Table *table1;
		Table *table2;
		Table *table3;
		Table *table4;
		Table *table5;
		Table *table6;
	private: System::Windows::Forms::ListView^  listView1;
	public:
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ListView^  listView4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::ListView^  listView5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::ListView^  listView6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;


	public:
		TableForm(Table *table1, Table *table2, Table *table3, Table *table4, Table *table5, Table *table6)
		{
			InitializeComponent();
			this->table1 = table1;
			this->table2 = table2;
			this->table3 = table3;
			this->table4 = table4;
			this->table5 = table5;
			this->table6 = table6;

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
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->listView5 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->listView6 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(49, 44);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(150, 138);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->Click += gcnew System::EventHandler(this, &TableForm::listView1_Click);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"메뉴";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"수량";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(97, 185);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"합계 :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"1번 테이블";
			this->label3->Click += gcnew System::EventHandler(this, &TableForm::listView1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(373, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(322, 185);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 15);
			this->label5->TabIndex = 6;
			this->label5->Text = L"합계 :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(322, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 15);
			this->label6->TabIndex = 5;
			this->label6->Text = L"2번 테이블";
			this->label6->Click += gcnew System::EventHandler(this, &TableForm::listView2_Click);
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader3, this->columnHeader4 });
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(325, 44);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(150, 138);
			this->listView2->TabIndex = 4;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->Click += gcnew System::EventHandler(this, &TableForm::listView2_Click);
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"메뉴";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"수량";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(658, 185);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 15);
			this->label7->TabIndex = 11;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(607, 185);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 15);
			this->label8->TabIndex = 10;
			this->label8->Text = L"합계 :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(607, 26);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 15);
			this->label9->TabIndex = 9;
			this->label9->Text = L"3번 테이블";
			this->label9->Click += gcnew System::EventHandler(this, &TableForm::listView3_Click);
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader5, this->columnHeader6 });
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(610, 44);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(150, 138);
			this->listView3->TabIndex = 8;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"메뉴";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"수량";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(97, 472);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 15);
			this->label10->TabIndex = 15;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(46, 472);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 15);
			this->label11->TabIndex = 14;
			this->label11->Text = L"합계 :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(46, 313);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 15);
			this->label12->TabIndex = 13;
			this->label12->Text = L"4번 테이블";
			this->label12->Click += gcnew System::EventHandler(this, &TableForm::listView4_Click);
			// 
			// listView4
			// 
			this->listView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader7, this->columnHeader8 });
			this->listView4->HideSelection = false;
			this->listView4->Location = System::Drawing::Point(49, 331);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(150, 138);
			this->listView4->TabIndex = 12;
			this->listView4->UseCompatibleStateImageBehavior = false;
			this->listView4->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"메뉴";
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"수량";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(364, 472);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 15);
			this->label13->TabIndex = 19;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(313, 472);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 15);
			this->label14->TabIndex = 18;
			this->label14->Text = L"합계 :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(322, 313);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(80, 15);
			this->label15->TabIndex = 17;
			this->label15->Text = L"5번 테이블";
			this->label15->Click += gcnew System::EventHandler(this, &TableForm::listView5_Click);
			// 
			// listView5
			// 
			this->listView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader9, this->columnHeader10 });
			this->listView5->HideSelection = false;
			this->listView5->Location = System::Drawing::Point(325, 331);
			this->listView5->Name = L"listView5";
			this->listView5->Size = System::Drawing::Size(150, 138);
			this->listView5->TabIndex = 16;
			this->listView5->UseCompatibleStateImageBehavior = false;
			this->listView5->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"메뉴";
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"수량";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(658, 472);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 15);
			this->label16->TabIndex = 23;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(607, 472);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(47, 15);
			this->label17->TabIndex = 22;
			this->label17->Text = L"합계 :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(607, 313);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(80, 15);
			this->label18->TabIndex = 21;
			this->label18->Text = L"6번 테이블";
			this->label18->Click += gcnew System::EventHandler(this, &TableForm::listView6_Click);
			// 
			// listView6
			// 
			this->listView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader11, this->columnHeader12 });
			this->listView6->HideSelection = false;
			this->listView6->Location = System::Drawing::Point(610, 331);
			this->listView6->Name = L"listView6";
			this->listView6->Size = System::Drawing::Size(150, 138);
			this->listView6->TabIndex = 20;
			this->listView6->UseCompatibleStateImageBehavior = false;
			this->listView6->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"메뉴";
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"수량";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(-2, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 54);
			this->button1->TabIndex = 24;
			this->button1->Text = L"뒤로";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TableForm::button1_Click);
			// 
			// TableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(793, 544);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->listView6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->listView5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->listView4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->listView3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"TableForm";
			this->Text = L"TableForm";
			this->Load += gcnew System::EventHandler(this, &TableForm::TableForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TableForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "" + table1->getTotalPrice();
		this->label4->Text = "" + table2->getTotalPrice();
		this->label7->Text = "" + table3->getTotalPrice();
		this->label10->Text = "" + table4->getTotalPrice();
		this->label13->Text = "" + table5->getTotalPrice();
		this->label16->Text = "" + table6->getTotalPrice();

		//
		for (int i = 0; i < table1->getSize(); i++) {
			String^ newSystemString = gcnew String(table1->getOrder(i).getMenuName().c_str());
			System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
			listViewItem->SubItems->Add("" + table1->getOrder(i).getQuantity());
			this->listView1->Items->Add(listViewItem);
		}
		for (int i = 0; i < table2->getSize(); i++) {
			String^ newSystemString = gcnew String(table2->getOrder(i).getMenuName().c_str());
			System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
			listViewItem->SubItems->Add("" + table2->getOrder(i).getQuantity());
			this->listView2->Items->Add(listViewItem);
		}
		for (int i = 0; i < table3->getSize(); i++) {
			String^ newSystemString = gcnew String(table3->getOrder(i).getMenuName().c_str());
			System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
			listViewItem->SubItems->Add("" + table3->getOrder(i).getQuantity());
			this->listView3->Items->Add(listViewItem);
		}
		for (int i = 0; i < table4->getSize(); i++) {
			String^ newSystemString = gcnew String(table4->getOrder(i).getMenuName().c_str());
			System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
			listViewItem->SubItems->Add("" + table4->getOrder(i).getQuantity());
			this->listView4->Items->Add(listViewItem);
		}
		for (int i = 0; i < table5->getSize(); i++) {
			String^ newSystemString = gcnew String(table5->getOrder(i).getMenuName().c_str());
			System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
			listViewItem->SubItems->Add("" + table5->getOrder(i).getQuantity());
			this->listView5->Items->Add(listViewItem);
		}
		for (int i = 0; i < table6->getSize(); i++) {
			String^ newSystemString = gcnew String(table6->getOrder(i).getMenuName().c_str());
			System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
			listViewItem->SubItems->Add("" + table6->getOrder(i).getQuantity());
			this->listView6->Items->Add(listViewItem);
		}

	}

	private:
		System::Void listView1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Visible = false;
			pos::DetailForm detailform(table1);
			detailform.Owner = this;
			detailform.ShowDialog();
			this->listView1->Items->Clear();

			for (int i = 0; i < table1->getSize(); i++) {
				String^ newSystemString = gcnew String(table1->getOrder(i).getMenuName().c_str());
				System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
				listViewItem->SubItems->Add("" + table1->getOrder(i).getQuantity());
				this->listView1->Items->Add(listViewItem);
			}
			this->label1->Text = "" + table1->calcTotalPrice();

		}
		System::Void listView2_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Visible = false;
			pos::DetailForm detailform(table2);
			detailform.Owner = this;
			detailform.ShowDialog();
			this->listView2->Items->Clear();

			for (int i = 0; i < table2->getSize(); i++) {
				String^ newSystemString = gcnew String(table2->getOrder(i).getMenuName().c_str());
				System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
				listViewItem->SubItems->Add("" + table2->getOrder(i).getQuantity());
				this->listView2->Items->Add(listViewItem);
			}
			this->label4->Text = "" + table2->calcTotalPrice();
		}
		System::Void listView3_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Visible = false;
			pos::DetailForm detailform(table3);
			detailform.Owner = this;
			detailform.ShowDialog();
			this->listView3->Items->Clear();

			for (int i = 0; i < table3->getSize(); i++) {
				String^ newSystemString = gcnew String(table3->getOrder(i).getMenuName().c_str());
				System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
				listViewItem->SubItems->Add("" + table3->getOrder(i).getQuantity());
				this->listView3->Items->Add(listViewItem);
			}
			this->label7->Text = "" + table3->calcTotalPrice();

		}
		System::Void listView4_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Visible = false;
			pos::DetailForm detailform(table4);
			detailform.Owner = this;
			detailform.ShowDialog();
			this->listView4->Items->Clear();

			for (int i = 0; i < table4->getSize(); i++) {
				String^ newSystemString = gcnew String(table4->getOrder(i).getMenuName().c_str());
				System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
				listViewItem->SubItems->Add("" + table4->getOrder(i).getQuantity());
				this->listView4->Items->Add(listViewItem);
			}
			this->label10->Text = "" + table4->calcTotalPrice();
		}
		System::Void listView5_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Visible = false;
			pos::DetailForm detailform(table5);
			detailform.Owner = this;
			detailform.ShowDialog();
			this->listView5->Items->Clear();

			for (int i = 0; i < table5->getSize(); i++) {
				String^ newSystemString = gcnew String(table5->getOrder(i).getMenuName().c_str());
				System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
				listViewItem->SubItems->Add("" + table5->getOrder(i).getQuantity());
				this->listView5->Items->Add(listViewItem);
			}
			this->label13->Text = "" + table5->calcTotalPrice();

		}
		System::Void listView6_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Visible = false;
			pos::DetailForm detailform(table6);
			detailform.Owner = this;
			detailform.ShowDialog();
			this->listView6->Items->Clear();

			for (int i = 0; i < table6->getSize(); i++) {
				String^ newSystemString = gcnew String(table6->getOrder(i).getMenuName().c_str());
				System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
				listViewItem->SubItems->Add("" + table6->getOrder(i).getQuantity());
				this->listView6->Items->Add(listViewItem);
			}
			this->label16->Text = "" + table6->calcTotalPrice();
		}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Owner->Visible = true;
		this->Close();

	}
};
}
