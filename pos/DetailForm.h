#pragma once
#include "DBConnection.h"
#include "Table.h"
#include "PosMenuItem.h"

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
			 PosMenuItem* items = new PosMenuItem[30];

	public:

		DetailForm(Table *order_table)
		{
			this->order_table = order_table;
			
			DBConnection db;
			
			items = db.select_menu_item();
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

	protected:



	private: System::Windows::Forms::ListView^  listView1;

	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			String^ newSystemString = gcnew String(items[0].getName().c_str());
			this->button1->Text = L"" + newSystemString;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DetailForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(626, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 87);
			this->button2->TabIndex = 7;
			newSystemString = gcnew String(items[1].getName().c_str());
			this->button2->Text = L"" + newSystemString;
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
			this->button4->Location = System::Drawing::Point(23, -3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 56);
			this->button4->TabIndex = 9;
			this->button4->Text = L"뒤로가기";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DetailForm::button4_Click);
			// 
			// DetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1231, 780);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DetailForm";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &DetailForm::DetailForm_Load);
			this->ResumeLayout(false);

		}

#pragma endregion

	private:
		void redrawListView() {
			this->listView1->Items->Clear();
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		PosMenuItem item(items[0].getName(), 4500, 1);
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

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		PosMenuItem item(items[1].getName(), 1500, 1);
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
	}

			 /*
			 private: System::Void redirecMain(System::Object^  sender, System::EventArgs^  e) {
				 this->Owner->Visible = true;
				 this->Close();
			 }*/

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Owner->Visible = true;
		this->Close();
	}
};
}
