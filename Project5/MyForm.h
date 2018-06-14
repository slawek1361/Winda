#pragma once
#include <Windows.h>

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		const int pietro = 163;
		const int wysokosc = 81;
		const int drzwi = 65;
		const int przycisk = 5;
		bool move;
		int polozenie = 0;
		Point lokalizacja;
		int jazda;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::HelpProvider^  helpProvider1;
	private: System::Windows::Forms::Button^  button5;


	public:
		MyForm(void)
		{
			InitializeComponent();
			lokalizacja.Y = 5 * pietro;
			if (GetAsyncKeyState(VK_UP))
			{
				button1->Enabled = true;
			}
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(432, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(15, 20);
			this->button1->TabIndex = 0;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(411, 22);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(15, 20);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(390, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(15, 20);
			this->button3->TabIndex = 2;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(369, 22);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(15, 20);
			this->button4->TabIndex = 3;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(348, 22);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(15, 20);
			this->button5->TabIndex = 4;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(440, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(409, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(385, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(359, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(328, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 821);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WINDA";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		////NUMERY PIETER
		label1->Location = Point(15, int(4.5*pietro));
		label2->Location = Point(15, int(3.5*pietro));
		label3->Location = Point(15, int(2.5*pietro));
		label4->Location = Point(15, int(1.5*pietro));
		label5->Location = Point(15, int(0.5*pietro));

	}
	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		/////PIETRA
		g->DrawLine(System::Drawing::Pens::Red, 0, pietro, 100, pietro);
		g->DrawLine(System::Drawing::Pens::Red, 0, 2 * pietro, 100, 2 * pietro);
		g->DrawLine(System::Drawing::Pens::Red, 0, 3 * pietro, 100, 3 * pietro);
		g->DrawLine(System::Drawing::Pens::Red, 0, 4 * pietro, 100, 4 * pietro);
		g->DrawLine(System::Drawing::Pens::Red, 0, 5 * pietro, 100, 5 * pietro);
		/////WINDA
		g->DrawLine(System::Drawing::Pens::Red, 105, 5 * pietro + polozenie, 205, 5 * pietro + polozenie);
		g->DrawLine(System::Drawing::Pens::Red, 105, 5 * pietro - drzwi + polozenie, 105, 5 * pietro - wysokosc + polozenie);
		g->DrawLine(System::Drawing::Pens::Red, 205, 5 * pietro + polozenie, 205, 5 * pietro - wysokosc + polozenie);
		g->DrawLine(System::Drawing::Pens::Red, 105, 5 * pietro - wysokosc + polozenie, 205, 5 * pietro - wysokosc + polozenie);
		/////PRZYCISKI
		button1->Location = Point(108, 5 * pietro - wysokosc + przycisk + polozenie);
		button2->Location = Point(108 + 20, 5 * pietro - wysokosc + przycisk + polozenie);
		button3->Location = Point(108 + 40, 5 * pietro - wysokosc + przycisk + polozenie);
		button4->Location = Point(108 + 60, 5 * pietro - wysokosc + przycisk + polozenie);
		button5->Location = Point(108 + 80, 5 * pietro - wysokosc + przycisk + polozenie);

	}
			 //////////PRZYCISKI WYBORU KIERUNKU NA KAZDYM PIETRZE + ALGORYTM ZATRZYMYWANIA SIE ++ LUDZIE I ICH INTERAKCAJ ++ ZAMYKANIE DRZWI ++ KOLEJNOSC JAZDY PO PIETRACH!!!!!!!!!!!!!


			  //////////PRZYCISKI W WINDZIE(INTERAKCJA)
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		button1->BackColor = System::Drawing::Color::Red;
		jazda = 5 * pietro;
		if (lokalizacja.Y < 5 * pietro) {
			move = true;
			timer1->Enabled = true;
		}
		if (lokalizacja.Y > 5 * pietro) {
			move = false;
			timer1->Enabled = true;
		}


	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		button2->BackColor = System::Drawing::Color::Red;
		jazda = 4 * pietro;
		if (lokalizacja.Y < 4 * pietro) {
			move = true;
			timer1->Enabled = true;
		}
		if (lokalizacja.Y > 4 * pietro) {
			move = false;
			timer1->Enabled = true;
		}

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		button3->BackColor = System::Drawing::Color::Red;
		jazda = 3 * pietro;
		if (lokalizacja.Y < 3 * pietro) {
			move = true;
			timer1->Enabled = true;
		}
		if (lokalizacja.Y > 3 * pietro) {
			move = false;
			timer1->Enabled = true;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		button4->BackColor = System::Drawing::Color::Red;
		jazda = 2 * pietro;
		if (lokalizacja.Y < 2 * pietro) {
			move = true;
			timer1->Enabled = true;
		}
		if (lokalizacja.Y > 2 * pietro) {
			move = false;
			timer1->Enabled = true;
		}

	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		button5->BackColor = System::Drawing::Color::Red;
		jazda = 1 * pietro;
		if (lokalizacja.Y < 1 * pietro) {
			move = true;
			timer1->Enabled = true;
		}
		if (lokalizacja.Y > 1 * pietro) {
			move = false;
			timer1->Enabled = true;
		}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		lokalizacja.Y = 5 * pietro + polozenie;
		if (lokalizacja.Y == jazda) {
			timer1->Enabled = false;
			button1->BackColor = System::Drawing::Color::White;
			button2->BackColor = System::Drawing::Color::White;
			button3->BackColor = System::Drawing::Color::White;
			button4->BackColor = System::Drawing::Color::White;
			button5->BackColor = System::Drawing::Color::White;
		}
		if (lokalizacja.Y != jazda) {
			if (move) {
				polozenie++;
			}
			if (!move) {
				polozenie--;
			}
		}

		this->Refresh();
	}
};
}
