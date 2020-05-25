#pragma once
#include "Table.h"
#include "PaymentForm.h"
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
	private: Table* order_table;
	public:

		DetailForm(Table *order_table)
		{
			InitializeComponent();
			this->order_table = order_table;
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

	protected:



	private: System::Windows::Forms::ListView^  listView1;

	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;



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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// columnHeader1
			// 
			columnHeader1->Text = L"메뉴";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { columnHeader1, this->columnHeader2 });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(23, 98);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(277, 610);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"수량";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(440, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 87);
			this->button1->TabIndex = 6;
			this->button1->Text = L"삼겹살";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DetailForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(626, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 87);
			this->button2->TabIndex = 7;
			this->button2->Text = L"소주";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DetailForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(815, 37);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(177, 87);
			this->button3->TabIndex = 8;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(-2, -1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 56);
			this->button4->TabIndex = 9;
			this->button4->Text = L"뒤로가기";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DetailForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(181, 720);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 45);
			this->button5->TabIndex = 12;
			this->button5->Text = L"결제하기";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &DetailForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 720);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 15);
			this->label1->TabIndex = 10;
			this->label1->Text = L"합계 :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(114, 720);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 15);
			this->label2->TabIndex = 11;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(114, 750);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 15);
			this->label3->TabIndex = 14;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 750);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 15);
			this->label4->TabIndex = 13;
			this->label4->Text = L"결제 잔액 :";
			// 
			// DetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1231, 780);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DetailForm";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &DetailForm::DetailForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private:
		void redrawListView() {
			this->listView1->Items->Clear();
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		PosMenuItem item("삼겹살", 4500, 1);
		Order order(item, 1);
		/*
		for (int i = 0; i < order_table->getSize(); i++) {
			if (order_table->getOrder(i).getMenuName() == "삼겹살") {
				order_table->getOrder(i).setQuantity(order_table->getOrder(i).getQuantity + 1);
			}
		}
		*/
		redrawListView();
		order_table->setOrder(order);
		for (int i = 0; i < order_table->getSize(); i++) {
			String^ newSystemString = gcnew String(order_table->getOrder(i).getMenuName().c_str());

			System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
			listViewItem->SubItems->Add("" + order_table->getOrder(i).getQuantity());
			this->listView1->Items->Add(listViewItem);
		}
		this->label2->Text = "" + order_table->calcTotalPrice();
		this->label3->Text = "" + order_table->getLeftPrice();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		PosMenuItem item("소주", 1500, 1);
		Order order(item, 1);
		/*
		for (int i = 0; i < order_table->getSize(); i++) {
			if (order_table->getOrder(i).getMenuName() == "삼겹살") {
				order_table->getOrder(i).setQuantity(order_table->getOrder(i).getQuantity + 1);
			}
		}
		*/
		redrawListView();
		order_table->setOrder(order);
		for (int i = 0; i < order_table->getSize(); i++) {
			String^ newSystemString = gcnew String(order_table->getOrder(i).getMenuName().c_str());

			System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
			listViewItem->SubItems->Add("" + order_table->getOrder(i).getQuantity());
			this->listView1->Items->Add(listViewItem);
		}
		this->label2->Text = "" + order_table->calcTotalPrice();
		this->label3->Text = "" + order_table->getLeftPrice();

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void DetailForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//메뉴판 생성해야됨
		for (int i = 0; i < order_table->getSize(); i++) {
			String^ newSystemString = gcnew String(order_table->getOrder(i).getMenuName().c_str());

			System::Windows::Forms::ListViewItem^ listViewItem = gcnew Windows::Forms::ListViewItem(newSystemString);
			listViewItem->SubItems->Add("" + order_table->getOrder(i).getQuantity());
			this->listView1->Items->Add(listViewItem);
		}

		this->label2->Text = "" + order_table->calcTotalPrice();
		this->label3->Text = "" + order_table->getLeftPrice();
	}

			 /*
			 private: System::Void redirecMain(System::Object^  sender, System::EventArgs^  e) {
				 this->Owner->Visible = true;
				 this->Close();
			 }*/

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		//뒤로가기 버튼
		this->Owner->Visible = true;
		this->Close();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		//결제하기 버튼
		pos::PaymentForm paymentform(order_table);
		paymentform.Owner = this;
		paymentform.ShowDialog();
		this->label3->Text = "" + order_table->getLeftPrice();
		if (order_table->getLeftPrice() == 0) {
			this->label2->Text = "0";
			redrawListView();
		}
	}

	
};
}
