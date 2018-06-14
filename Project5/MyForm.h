#pragma once
#include <Windows.h>
#include <vector>

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	vector<int> kierunek;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		const int pietro = 163;
		const int wysokosc = 81;
		const int przycisk = 5;
		int polozenie = 0;
		Point lokalizacja;
		int kolejnosc = 0;
		int puste = 0;
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

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Button^  button5;


	public:
		MyForm(void)
		{
			InitializeComponent();
			lokalizacja.Y = 5 * pietro;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(401, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(33, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(401, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(33, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(401, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(33, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(401, 180);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(33, 28);
			this->button4->TabIndex = 3;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(401, 146);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(33, 28);
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
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(12, 81);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(20, 44);
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 282);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(20, 44);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(12, 214);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(20, 44);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(12, 146);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(20, 44);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(12, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(20, 44);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(58, 298);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(33, 28);
			this->button6->TabIndex = 18;
			this->button6->Text = L"●";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(58, 230);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(33, 28);
			this->button7->TabIndex = 19;
			this->button7->Text = L"●";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(69, 162);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(33, 28);
			this->button8->TabIndex = 20;
			this->button8->Text = L"●";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(58, 97);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(33, 28);
			this->button9->TabIndex = 21;
			this->button9->Text = L"●";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(58, 28);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(33, 28);
			this->button10->TabIndex = 22;
			this->button10->Text = L"●";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 821);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox4);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
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
		pictureBox1->Location = Point(0, 5 * pietro - 50);
		pictureBox2->Location = Point(20, 4 * pietro - 50);
		pictureBox3->Location = Point(40, 3 * pietro - 50);
		pictureBox4->Location = Point(60, 2 * pietro - 50);
		pictureBox5->Location = Point(80, 1 * pietro - 50);
		button6->Location = Point(44, int(4.5*pietro));
		button7->Location = Point(44, int(3.5*pietro));
		button8->Location = Point(44, int(2.5*pietro));
		button9->Location = Point(44, int(1.5*pietro));
		button10->Location = Point(44, int(0.5*pietro));


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
		g->DrawLine(System::Drawing::Pens::Red, 105, 5 * pietro + polozenie, 230, 5 * pietro + polozenie);
		g->DrawLine(System::Drawing::Pens::Red, 105, 5 * pietro + polozenie, 105, 5 * pietro - wysokosc + polozenie);
		g->DrawLine(System::Drawing::Pens::Red, 230, 5 * pietro + polozenie, 230, 5 * pietro - wysokosc + polozenie);
		g->DrawLine(System::Drawing::Pens::Red, 105, 5 * pietro - wysokosc + polozenie, 230, 5 * pietro - wysokosc + polozenie);

	}
			 //////////PRZYCISKI W WINDZIE(INTERAKCJA)
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int jazda;
		jazda = 5 * pietro;
		timer1->Enabled = true;
		kierunek.push_back(jazda);

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int jazda;
		jazda = 4 * pietro;
		timer1->Enabled = true;
		kierunek.push_back(jazda);

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		int jazda;
		jazda = 3 * pietro;
		timer1->Enabled = true;
		kierunek.push_back(jazda);
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		int jazda;
		jazda = 2 * pietro;
		timer1->Enabled = true;
		kierunek.push_back(jazda);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		int jazda;
		jazda = 1 * pietro;
		timer1->Enabled = true;
		kierunek.push_back(jazda);
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Point ludek5 = pictureBox5->Location;
		Point ludek4 = pictureBox4->Location;
		Point ludek3 = pictureBox3->Location;
		Point ludek2 = pictureBox2->Location;
		Point ludek1 = pictureBox1->Location;
		lokalizacja.Y = 5 * pietro + polozenie;
		if (ludek5.X == 200) {
			pictureBox5->Location = Point(200, lokalizacja.Y - 50);
		}
		if (ludek4.X == 180) {
			pictureBox4->Location = Point(180, lokalizacja.Y - 50);
		}
		if (ludek3.X == 160) {
			pictureBox3->Location = Point(160, lokalizacja.Y - 50);
		}
		if (ludek2.X == 140) {
			pictureBox2->Location = Point(140, lokalizacja.Y - 50);
		}
		if (ludek1.X == 120) {
			pictureBox1->Location = Point(120, lokalizacja.Y - 50);
		}
		if (kierunek[kolejnosc] > lokalizacja.Y) {
			polozenie++;
		}
		if (kierunek[kolejnosc] < lokalizacja.Y) {
			polozenie--;
		}

		if (lokalizacja.Y == kierunek[kolejnosc]) {
			if (kolejnosc <= kierunek.size()) {
				kierunek.erase(kierunek.begin());
				Sleep(1000);
			}
		}
		if (kolejnosc == kierunek.size())
		{
			timer1->Enabled = false;
			kolejnosc = 0;
			kierunek.clear();
			if (lokalizacja.Y != 5 * pietro)
				timer2->Enabled = true;
		}

		this->Refresh();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		int jazda;
		jazda = 5 * pietro;
		timer1->Enabled = true;
		kierunek.push_back(jazda);
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		int jazda;
		jazda = 4 * pietro;
		timer1->Enabled = true;
		kierunek.push_back(jazda);
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		int jazda;
		jazda = 3 * pietro;
		timer1->Enabled = true;
		kierunek.push_back(jazda);
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		int jazda;
		jazda = 2 * pietro;
		timer1->Enabled = true;
		kierunek.push_back(jazda);
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		int jazda;
		jazda = 1 * pietro;
		timer1->Enabled = true;
		kierunek.push_back(jazda);
	}
	private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		Point ludek = pictureBox5->Location;
		if (ludek.Y == 5 * pietro - 50 || ludek.Y == 4 * pietro - 50 || ludek.Y == 3 * pietro - 50 || ludek.Y == 2 * pietro - 50 || ludek.Y == 1 * pietro - 50) {
			if (ludek.X == 80 && ludek.Y == lokalizacja.Y - 50)
			{
				pictureBox5->Location = Point(200, lokalizacja.Y - 50);
			}
			if (ludek.X == 200) {
				pictureBox5->Location = Point(80, lokalizacja.Y - 50);
			}
		}
	}
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
		Point ludek = pictureBox4->Location;
		if (ludek.Y == 5 * pietro - 50 || ludek.Y == 4 * pietro - 50 || ludek.Y == 3 * pietro - 50 || ludek.Y == 2 * pietro - 50 || ludek.Y == 1 * pietro - 50) {
			if (ludek.X == 60 && ludek.Y == lokalizacja.Y - 50)
			{
				pictureBox4->Location = Point(180, lokalizacja.Y - 50);
			}
			if (ludek.X == 180) {
				pictureBox4->Location = Point(60, lokalizacja.Y - 50);
			}
		}
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		Point ludek = pictureBox3->Location;
		if (ludek.Y == 5 * pietro - 50 || ludek.Y == 4 * pietro - 50 || ludek.Y == 3 * pietro - 50 || ludek.Y == 2 * pietro - 50 || ludek.Y == 1 * pietro - 50) {
			if (ludek.X == 40 && ludek.Y == lokalizacja.Y - 50)
			{
				pictureBox3->Location = Point(160, lokalizacja.Y - 50);
			}
			if (ludek.X == 160) {
				pictureBox3->Location = Point(40, lokalizacja.Y - 50);
			}
		}
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		Point ludek = pictureBox2->Location;
		if (ludek.Y == 5 * pietro - 50 || ludek.Y == 4 * pietro - 50 || ludek.Y == 3 * pietro - 50 || ludek.Y == 2 * pietro - 50 || ludek.Y == 1 * pietro - 50) {
			if (ludek.X == 20 && ludek.Y == lokalizacja.Y - 50)
			{
				pictureBox2->Location = Point(140, lokalizacja.Y - 50);
			}
			if (ludek.X == 140) {
				pictureBox2->Location = Point(20, lokalizacja.Y - 50);
			}
		}
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		Point ludek = pictureBox1->Location;
		if (ludek.Y == 5 * pietro - 50 || ludek.Y == 4 * pietro - 50 || ludek.Y == 3 * pietro - 50 || ludek.Y == 2 * pietro - 50 || ludek.Y == 1 * pietro - 50) {
			if (ludek.X == 0 && ludek.Y == lokalizacja.Y - 50)
			{
				pictureBox1->Location = Point(120, lokalizacja.Y - 50);
			}
			if (ludek.X == 120) {
				pictureBox1->Location = Point(0, lokalizacja.Y - 50);
			}
		}
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		puste++;
		Point ludek5 = pictureBox5->Location;
		Point ludek4 = pictureBox4->Location;
		Point ludek3 = pictureBox3->Location;
		Point ludek2 = pictureBox2->Location;
		Point ludek1 = pictureBox1->Location;
		if (puste == 5)
		{
			puste = 0;
			if (ludek1.X == 0 && ludek2.X == 20 && ludek3.X == 40 && ludek4.X == 60 && ludek5.X == 80)
			{
				timer2->Enabled = false;
				kierunek.push_back(5 * pietro);
				timer1->Enabled = true;

			}
		}
	}
	};
}
