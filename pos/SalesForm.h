#pragma once
#include "MonthSalesForm.h"

namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;


	/// <summary>
	/// SalesForm�� ���� ����Դϴ�.
	/// </summary>
	public ref class SalesForm : public System::Windows::Forms::Form
	{

	public:
		SalesForm()
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
		~SalesForm()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


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
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"�޴�";
			this->columnHeader1->Width = 93;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(36, 109);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 11;
			this->monthCalendar1->DateChanged += gcnew DateRangeEventHandler(this, &SalesForm::monthCalendar1_DateChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(-2, 6);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 54);
			this->button5->TabIndex = 10;
			this->button5->Text = L"�ڷ�";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SalesForm::button5_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(343, 62);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(271, 302);
			this->listView1->TabIndex = 12;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &SalesForm::listView1_SelectedIndexChanged);
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"����";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"�հ�";
			this->columnHeader3->Width = 100;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(590, 410);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 34);
			this->button1->TabIndex = 13;
			this->button1->Text = L"�� ���� ��";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SalesForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(420, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 19);
			this->label1->TabIndex = 14;
			this->label1->Text = L"��¥";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(339, 375);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"�� �հ� :";
			this->label2->Click += gcnew System::EventHandler(this, &SalesForm::label2_Click);
			// 
			// SalesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 456);
			this->ControlBox = false;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->button5);
			this->DoubleBuffered = true;
			this->Name = L"SalesForm";
			this->Text = L"SalesForm";
			this->Load += gcnew System::EventHandler(this, &SalesForm::SalesForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Owner->Visible = true;
		this->Close();
	}

	private: System::Void SalesForm_Load(System::Object^  sender, System::EventArgs^  e) {
		/*String^ row1 = gcnew String("����");//�޴�
		System::Windows::Forms::ListViewItem^ listViewItem1 = gcnew Windows::Forms::ListViewItem(row1);
		listViewItem1->SubItems->Add("2");//����
		listViewItem1->SubItems->Add("14000");//����
		this->listView1->Items->Add(listViewItem1);

		String^ row2 = gcnew String("����");//�޴�
		System::Windows::Forms::ListViewItem^ listViewItem2 = gcnew Windows::Forms::ListViewItem(row2);
		listViewItem2->SubItems->Add("10");//����
		listViewItem2->SubItems->Add("5000");//����
		this->listView1->Items->Add(listViewItem2);*/


		//this->listViewItem->SubItems->AddRange(gcnew array <String^>{"1", "2", "3"});

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		pos::MonthSalesForm monthsalesform;
		monthsalesform.Owner = this;
		monthsalesform.ShowDialog();
	}

	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, DateRangeEventArgs^ e) {
		label1->Text = monthCalendar1->SelectionRange->Start.ToShortDateString();
	}


	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}