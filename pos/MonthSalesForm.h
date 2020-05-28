#pragma once

namespace pos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MonthSalesForm�� ���� ����Դϴ�.
	/// </summary>
	public ref class MonthSalesForm : public System::Windows::Forms::Form
	{
	public:
		MonthSalesForm(void)
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
		~MonthSalesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label2;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"�޴�";
			this->columnHeader1->Width = 93;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(127, 37);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(343, 467);
			this->listView1->TabIndex = 13;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MonthSalesForm::listView1_SelectedIndexChanged);
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"����";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"�հ�";
			this->columnHeader3->Width = 183;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(-2, 6);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 54);
			this->button5->TabIndex = 16;
			this->button5->Text = L"�ڷ�";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MonthSalesForm::button5_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(12, 77);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(92, 25);
			this->dateTimePicker1->TabIndex = 17;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MonthSalesForm::dateTimePicker1_ValueChanged);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(306, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 26);
			this->label1->TabIndex = 18;
			this->label1->Text = L"��";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(122, 516);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 20);
			this->label2->TabIndex = 19;
			this->label2->Text = L"�� �հ� : ";
			// 
			// MonthSalesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 553);
			this->ControlBox = false;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listView1);
			this->Name = L"MonthSalesForm";
			this->Text = L"MonthSalesForm";
			this->Load += gcnew System::EventHandler(this, &MonthSalesForm::MonthSalesForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Owner->Visible = true;
		this->Close();
	}
	private: System::Void MonthSalesForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = dateTimePicker1->Value.ToString("yyyy-MM");
	}
	};
}
