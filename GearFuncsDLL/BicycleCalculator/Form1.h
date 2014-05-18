#include <string>
#include <sstream>
#pragma once

namespace BicycleCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			m_iWheelWidth = 0;
		}

		void DoCalculations(){
			// Somethings changed, recalculate EVERYTHING
			this->label4->Text = L"ZOMGWAT";
		};
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label4;
	protected: 
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboSize;

	private: System::Windows::Forms::ComboBox^  comboWidth;

	private: System::Windows::Forms::TextBox^  txtFront;
	private: System::Windows::Forms::TextBox^  txtRear;
	private: System::Windows::Forms::RadioButton^  radioMPH;
	private: System::Windows::Forms::RadioButton^  radioKPH;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		int m_iWheelWidth;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboSize = (gcnew System::Windows::Forms::ComboBox());
			this->comboWidth = (gcnew System::Windows::Forms::ComboBox());
			this->txtFront = (gcnew System::Windows::Forms::TextBox());
			this->txtRear = (gcnew System::Windows::Forms::TextBox());
			this->radioMPH = (gcnew System::Windows::Forms::RadioButton());
			this->radioKPH = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(453, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Rear:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(332, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Front:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(161, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Tyre Diameter:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Tyre Size:";
			// 
			// comboSize
			// 
			this->comboSize->FormattingEnabled = true;
			this->comboSize->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"20\"", L"24\"", L"26\"", L"700C", L"27\""});
			this->comboSize->Location = System::Drawing::Point(72, 6);
			this->comboSize->Name = L"comboSize";
			this->comboSize->Size = System::Drawing::Size(83, 21);
			this->comboSize->TabIndex = 8;
			this->comboSize->Text = L"700C";
			this->comboSize->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboSize_SelectedIndexChanged);
			// 
			// comboWidth
			// 
			this->comboWidth->FormattingEnabled = true;
			this->comboWidth->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"23", L"25", L"28", L"32", L"35"});
			this->comboWidth->Location = System::Drawing::Point(243, 6);
			this->comboWidth->Name = L"comboWidth";
			this->comboWidth->Size = System::Drawing::Size(83, 21);
			this->comboWidth->TabIndex = 9;
			// 
			// txtFront
			// 
			this->txtFront->Location = System::Drawing::Point(372, 6);
			this->txtFront->Name = L"txtFront";
			this->txtFront->Size = System::Drawing::Size(75, 20);
			this->txtFront->TabIndex = 10;
			// 
			// txtRear
			// 
			this->txtRear->Location = System::Drawing::Point(492, 6);
			this->txtRear->Name = L"txtRear";
			this->txtRear->Size = System::Drawing::Size(252, 20);
			this->txtRear->TabIndex = 11;
			// 
			// radioMPH
			// 
			this->radioMPH->AutoSize = true;
			this->radioMPH->Location = System::Drawing::Point(750, 7);
			this->radioMPH->Name = L"radioMPH";
			this->radioMPH->Size = System::Drawing::Size(49, 17);
			this->radioMPH->TabIndex = 12;
			this->radioMPH->TabStop = true;
			this->radioMPH->Text = L"MPH";
			this->radioMPH->UseVisualStyleBackColor = true;
			// 
			// radioKPH
			// 
			this->radioKPH->AutoSize = true;
			this->radioKPH->Location = System::Drawing::Point(805, 7);
			this->radioKPH->Name = L"radioKPH";
			this->radioKPH->Size = System::Drawing::Size(47, 17);
			this->radioKPH->TabIndex = 13;
			this->radioKPH->TabStop = true;
			this->radioKPH->Text = L"KPH";
			this->radioKPH->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(974, 506);
			this->Controls->Add(this->radioKPH);
			this->Controls->Add(this->radioMPH);
			this->Controls->Add(this->txtRear);
			this->Controls->Add(this->txtFront);
			this->Controls->Add(this->comboWidth);
			this->Controls->Add(this->comboSize);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Bike Calculations";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void comboSize_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 DoCalculations();
			 switch(comboWidth->SelectedIndex)
			 {
				 case 0:
					 m_iWheelWidth = 20;
					 break;
				 case 1:
					 m_iWheelWidth = 23;
					 break;
				 case 2:
					 m_iWheelWidth = 25;
					 break;
				 case 3:
					 m_iWheelWidth = 28;
					 break;
				 case 4:
					 m_iWheelWidth = 32;
					 break;
				 case 5:
					 m_iWheelWidth = 35;
					 break;
			 }
			 
			 if(this->txtFront->Text->Length != 0)
			 {
				 std::string input = this->txtFront->Text;
				 std::istringstream ss(input);
				 std::string token;
				 std::string strCombinedString;
				 
				 while(std::getline(ss, token, ','))
					strCombinedString += token;
				 
				 int i = 0;
			 }
		 }
};

}

