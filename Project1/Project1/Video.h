#pragma once
#include <stdlib.h>
#include <cliext\vector>	//CLR 專用vector
#include <iostream>
#include <stdlib.h>
#include <fstream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::IO;
	using namespace System::Threading;

	/// <summary>
	/// Video 的摘要
	/// </summary>
	public ref class Video : public System::Windows::Forms::Form
	{
	public:
		Video(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Video()
		{
			if (components)
			{
				delete components;
			}
		}

	public:cliext::vector<Bitmap^> videos;
		  unsigned int rate = 100;
		  float M = 1;				//倍率
		  unsigned int FrameNo = 0;
		  Thread^ Encode_thread1 = gcnew Thread(gcnew ThreadStart(this, &Video::Encode_FS));
		  Thread^ Encode_thread2 = gcnew Thread(gcnew ThreadStart(this, &Video::Encode_TSS));
		  int mask = 8;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Video::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1028, 32);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(96, 29);
			this->toolStripButton1->Text = L"開啟檔案";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Video::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(56, 29);
			this->toolStripButton2->Text = L"解碼";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(54, 70);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(341, 320);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(544, 70);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(341, 320);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(407, 102);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(107, 100);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(897, 102);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(107, 100);
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(115, 454);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(53, 50);
			this->button2->TabIndex = 6;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Video::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(115, 454);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(53, 50);
			this->button3->TabIndex = 7;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Video::button3_Click);
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(237, 454);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(53, 50);
			this->button5->TabIndex = 9;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Video::button5_Click);
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(53, 454);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(53, 50);
			this->button6->TabIndex = 10;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Video::button6_Click);
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(176, 454);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(53, 50);
			this->button7->TabIndex = 11;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Video::button7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(339, 41);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 19);
			this->label2->TabIndex = 13;
			this->label2->Text = L" /   -- ";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(54, 558);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(341, 320);
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(893, 70);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 19);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Target block";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(403, 70);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 19);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Candidate Block";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(49, 508);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 25);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Motion Vector : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(49, 41);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 25);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Previous Frame";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(539, 41);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 25);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Current Frame";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(23, 32);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(341, 29);
			this->radioButton1->TabIndex = 20;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Mean Absolute Difference (MAD)";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(23, 65);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(319, 29);
			this->radioButton2->TabIndex = 21;
			this->radioButton2->Text = L"Mean Square Difference (MSD)";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(8, 140);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(436, 104);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Matching Method";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Location = System::Drawing::Point(23, 32);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(219, 29);
			this->radioButton3->TabIndex = 23;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Block Based Motion";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(8, 32);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(436, 100);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Searching Method";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(23, 65);
			this->radioButton5->Margin = System::Windows::Forms::Padding(4);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(249, 29);
			this->radioButton5->TabIndex = 24;
			this->radioButton5->Text = L"Three Step Search (TSS)";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button8->Location = System::Drawing::Point(8, 251);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(132, 39);
			this->button8->TabIndex = 26;
			this->button8->Text = L"開始編碼";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Video::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button9->Location = System::Drawing::Point(148, 251);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(132, 39);
			this->button9->TabIndex = 27;
			this->button9->Text = L"停止編碼";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Video::button9_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox3->Location = System::Drawing::Point(544, 471);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(460, 306);
			this->groupBox3->TabIndex = 28;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Coding";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(301, 41);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 19);
			this->label1->TabIndex = 29;
			this->label1->Text = L"-- ";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Video::timer1_Tick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(301, 471);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 25);
			this->label8->TabIndex = 30;
			this->label8->Text = L"速度 : ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(372, 471);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 21);
			this->label9->TabIndex = 31;
			this->label9->Text = L"1";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(54, 397);
			this->trackBar1->Margin = System::Windows::Forms::Padding(4);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(341, 56);
			this->trackBar1->TabIndex = 32;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Video::trackBar1_Scroll_1);
			// 
			// Video
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1049, 869);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->toolStrip1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Video";
			this->Text = L"影片";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openfiledialog = gcnew OpenFileDialog;
		openfiledialog->Multiselect = true;		//選取多個檔案
		if (openfiledialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			videos.clear();
			cli::array<String^>^ filename = openfiledialog->FileNames; 
			for (int i = 0; i < filename->Length; i++) {
				//(vector).push_back用法:新增元素在vector的尾端，必要時會進行記憶體配置
				videos.push_back(gcnew Bitmap(filename[i]));//Bitmap(String)從指定的檔案，初始化 Bitmap 類別的新執行個體
			}
			trackBar1->Maximum = videos.size() - 1;//Vector用法  http://mropengate.blogspot.com/2015/07/cc-vector-stl.html
			this->label1->Text = "1";//顯示目前為第n張圖
			this->label2->Text = "/	 " + videos.size().ToString();
			pictureBox1->Image = videos[0];			//reference frame
			pictureBox2->Image = videos[1];			//current frame
		}
	}


	// Play
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		FrameNo = trackBar1->Value;
		timer1->Enabled = true;		//timer1啟動，加入timer工具					
		timer1->Interval = rate;	//時間間隔秒數(毫秒)
		button2->Visible = false;
		button3->Visible = true;
	}



	//timer1開始
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		trackBar1->Value = FrameNo;
		FrameNo++;
		pictureBox1->Image = videos[FrameNo];			//videos隨著trackBar1而變動的圖像，秀出reference frame 的圖片
		if (FrameNo != (videos.size() - 1)) {
			pictureBox2->Image = videos[FrameNo + 1];	//秀出current frame的圖片
		}
		label1->Text = (FrameNo + 1).ToString();		//顯示目前為第n張圖

		if (FrameNo == videos.size() - 1)				//如果計算圖像的計數大於等於圖像總張數， vec.size():取得 vector 目前持有的元素個數
		{												//FrameNo 從0開始
			timer1->Enabled = false;//timer1關閉
			FrameNo = 0;//計數歸零
			trackBar1->Value = FrameNo;
			label1->Text = (FrameNo + 1).ToString();
			pictureBox1->Image = videos[0];
			pictureBox2->Image = videos[1];
			button3->Visible = false;
			button2->Visible = true;
		}
	}

	// Scroll
	private: System::Void trackBar1_Scroll_1(System::Object^ sender, System::EventArgs^ e) {
		FrameNo = trackBar1->Value;
		pictureBox1->Image = videos[FrameNo];
		label1->Text = (FrameNo + 1).ToString();
		if (FrameNo != videos.size() - 1) {
			pictureBox2->Image = videos[FrameNo + 1];
		}
	}

	// Pause
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
		button2->Visible = true;
		button3->Visible = false;
	}

	// Stop
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		button3->Visible = false;
		button2->Visible = true;
		timer1->Enabled = false;
		trackBar1->Value = 0;
		label1->Text = (trackBar1->Value + 1).ToString();
		pictureBox1->Image = videos[trackBar1->Value];
		pictureBox2->Image = videos[trackBar1->Value + 1];
	}

	// Double speed up
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		rate = (float)rate * 0.5;		//縮短timer interval
		M = M * 2.0;
		timer1->Interval = rate;
		label9->Text = M.ToString();
	}

	// Double speed down
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		rate = (float)rate * 2;		//加長timer interval
		M = M / 2.0;
		timer1->Interval = rate;
		label9->Text = M.ToString();
	}

	// Coding
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((radioButton1->Checked == true) && (radioButton3->Checked == true) || (radioButton2->Checked == true) && (radioButton3->Checked == true)) {
			Encode_thread1->Start();
		}
		else if ((radioButton1->Checked == true) && (radioButton5->Checked == true) || (radioButton2->Checked == true) && (radioButton5->Checked == true)) {
			Encode_thread2->Start();
		}
	}

	// Stop codeing
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((radioButton1->Checked == true) && (radioButton3->Checked == true) || (radioButton2->Checked == true) && (radioButton3->Checked == true)) {
			Encode_thread1->Suspend();
		}
		else if ((radioButton1->Checked == true) && (radioButton5->Checked == true) || (radioButton2->Checked == true) && (radioButton5->Checked == true)) {
			Encode_thread2->Suspend();

		}
	}



	//委派顯示於介面的任務***********************************************************************************************************************	
																   //Thread 多執行序 http://vito-note.blogspot.com/2012/02/blog-post.html		
	delegate void SetLabel(Label^ object, System::String^ str);			//delegate (委派)用法 http://vito-note.blogspot.com/2012/03/delegate.html
	private:void SetLabelText(Label^ object, System::String^ str) {
		if (object->InvokeRequired)											//判斷這個Label的物件是否在同一個執行序上
		{																	//InvokeRequired為true時，表示在不同的執行序上，因此進行委派的動作
			SetLabel^ d = gcnew SetLabel(this, &Video::SetLabelText);		//此為非靜態封裝的方式，因此要多輸入this
			this->Invoke(d, gcnew cli::array<Object^> {object, str });
		}
		else {																//確定在此執行序上後，因此可以正常的呼叫到這個Label物件
			object->Text = str;
			object->Refresh();
		}
	}
	delegate void SetImageDelegate(PictureBox^ object, Bitmap^ _img);
	private:void Thread_SetImage(PictureBox^ obj, Bitmap^ _img) {
		if (obj->InvokeRequired) {
			SetImageDelegate^ d = gcnew SetImageDelegate(this, &Video::Thread_SetImage);
			this->Invoke(d, gcnew cli::array<Object^>{obj, _img});
		}
		else {
			obj->Image = _img;
			obj->Refresh();
		}
	}

	private:unsigned Matchmethod_caculate(Bitmap^% tar, Bitmap^% cand) {
		unsigned sum = 0;
		if (radioButton1->Checked == true)
		{
			for (int j = 0; j < mask; j++) {
				for (int i = 0; i < mask; i++)
				{
					sum += abs(tar->GetPixel(i, j).R - cand->GetPixel(i, j).R);
				}
			}
		}
		else if (radioButton2->Checked == true) {
			for (int j = 0; j < mask; j++) {
				for (int i = 0; i < mask; i++)
				{
					sum += pow(tar->GetPixel(i, j).R - cand->GetPixel(i, j).R, 2);
				}
			}
		}
		return sum;
	}


	public: void Encode_FS() {
		Bitmap^ target = gcnew Bitmap(mask, mask);
		Bitmap^ candidate = gcnew Bitmap(mask, mask);


		Point start, end;
		Rectangle rec(0, 0, 256, 256);
		Pen^ pen = gcnew Pen(Color::Yellow, 2);
		Pen^ pen2 = gcnew Pen(Color::Yellow, 0.5F);
		pen2->StartCap = LineCap::ArrowAnchor;

		String^ fileName = "fullFFF.txt";
		StreamWriter^ sw = gcnew StreamWriter(fileName);

		for (int count = 0; count < videos.size() - 1; count++) {

			SetLabelText(label1, (count + 1).ToString());
			Thread_SetImage(pictureBox1, videos[count]);
			Thread_SetImage(pictureBox2, videos[count + 1]);
			//motion vector
			Bitmap^ motionvector = gcnew Bitmap(256, 256);
			for (int i3 = 0; i3 < 256; i3++) {
				for (int j3 = 0; j3 < 256; j3++) {
					Color set3 = Color::FromArgb(0, 0, 0);
					motionvector->SetPixel(i3, j3, set3);
				}
			}
			Thread_SetImage(pictureBox5, motionvector);
			Graphics^ motion = Graphics::FromImage(motionvector);		// 建立graphics物件motion來畫圖

			//targetblock
			for (int y = 0; y < (256 / mask); y++) {									//將每張frame分割出 32*32 的block
				for (int x = 0; x < (256 / mask); x++) {
					Graphics^ canvus1 = pictureBox2->CreateGraphics();					//Graphics 用法 https://docs.microsoft.com/zh-tw/dotnet/api/system.drawing.graphics?view=netframework-4.8
					canvus1->DrawImage(videos[count + 1], rec);							//在原picturebox上建立繪圖物件並在上面畫出方塊
					canvus1->DrawRectangle(pen, x * mask, y * mask, mask, mask);

					for (int col = 0; col < mask; col++) {								//讀取targetblock並且放大到另一個picturebox上
						for (int row = 0; row < mask; row++) {
							Color set = videos[count + 1]->GetPixel(x * mask + row, y * mask + col);
							target->SetPixel(row, col, set);
						}
					}
					Bitmap^ zoomin = gcnew Bitmap(10 * target->Width, 10 * target->Height);	//放大target block
					for (int i = 0; i < zoomin->Width; i++) {
						for (int j = 0; j < zoomin->Height; j++) {
							Color set = target->GetPixel(i / 10, j / 10);
							zoomin->SetPixel(i, j, set);
						}
					}
					pictureBox4->Image = zoomin;



					int check = 1, cal, min, mini, minj;

					for (int j = 0; j < (256 - mask + 1); j += 1) {					//candidate block
						for (int i = 0; i < (256 - mask + 1); i += 1) {
							Graphics^ canvus2 = pictureBox1->CreateGraphics();
							canvus2->DrawImage(videos[count], rec);
							canvus2->DrawRectangle(pen, i, j, mask, mask);

							cal = 0;
							for (int col = 0; col < mask; col++) {					//讀取candidate block並且放大到另一個picturebox上
								for (int row = 0; row < mask; row++) {
									Color set = videos[count]->GetPixel(i + row, j + col);
									candidate->SetPixel(row, col, set);
								}
							}
							Bitmap^ zoomin = gcnew Bitmap(10 * candidate->Width, 10 * candidate->Height);	//放大target block
							for (int i = 0; i < zoomin->Width; i++) {
								for (int j = 0; j < zoomin->Height; j++) {
									Color set = candidate->GetPixel(i / 10, j / 10);
									zoomin->SetPixel(i, j, set);
								}
							}
							pictureBox3->Image = zoomin;

							cal = Matchmethod_caculate(target, candidate);  //MAD方式計算
							//for (int col = 0; col < mask; col++) {
							//	for (int row = 0; row < mask; row++) {
							//		cal += abs(target->GetPixel(row, col).R - candidate->GetPixel(row, col).R);  //MAD方式計算
							//	}
							//}
							if (check == 1) {		//全域掃描判斷是否為最小值
								min = cal;
								mini = i;			//candidate block中最像target block的座標
								minj = j;
								check++;
							}
							else if (cal <= min) {
								min = cal;
								mini = i;
								minj = j;
							}
							if (cal == 0) {
								break;
							}
						}
						if (cal == 0) {
							break;
						}
					}
					end.X = x * mask + mask / 2 - 1;
					end.Y = y * mask + mask / 2 - 1;
					start.X = mini + mask / 2 - 1;
					start.Y = minj + mask / 2 - 1;
					motion->DrawLine(pen2, start, end);
					Color R = Color::FromArgb(255, 0, 0);
					motionvector->SetPixel(start.X, start.Y, R);
					Thread_SetImage(pictureBox5, motionvector);
					sw->Write(mini.ToString());
					sw->Write(" ");
					sw->Write(minj.ToString());
					sw->Write(" ");
				}
			}
		}
		sw->Close();
	}

	public: void Encode_TSS() {
		Bitmap^ target = gcnew Bitmap(mask, mask);
		Bitmap^ candidate = gcnew Bitmap(mask, mask);


		Point start, end;
		Rectangle rec(0, 0, 256, 256);
		Pen^ pen1 = gcnew Pen(Color::Yellow, 2);
		Pen^ pen2 = gcnew Pen(Color::Yellow, 0.5F);
		pen2->StartCap = LineCap::ArrowAnchor;

		String^ fileName = "TSSFF.txt";
		StreamWriter^ sw = gcnew StreamWriter(fileName);

		for (int count = 0; count < videos.size() - 1; count++) {
			SetLabelText(label1, (count + 1).ToString());
			Thread_SetImage(pictureBox1, videos[count]);
			Thread_SetImage(pictureBox2, videos[count + 1]);
			Bitmap^ motionvector = gcnew Bitmap(256, 256);
			for (int i3 = 0; i3 < 256; i3++) {
				for (int j3 = 0; j3 < 256; j3++) {
					Color set3 = Color::FromArgb(0, 0, 0);
					motionvector->SetPixel(i3, j3, set3);
				}
			}
			Thread_SetImage(pictureBox5, motionvector);
			Graphics^ motion = Graphics::FromImage(motionvector);

			for (int y = 0; y < (256 / mask); y++) {									//將每張frame分割出 32*32 的block
				for (int x = 0; x < (256 / mask); x++) {
					Graphics^ canvus1 = pictureBox2->CreateGraphics();					//Graphics 用法 https://docs.microsoft.com/zh-tw/dotnet/api/system.drawing.graphics?view=netframework-4.8
					canvus1->DrawImage(videos[count + 1], rec);							//在原picturebox上建立繪圖物件並在上面畫出方塊
					canvus1->DrawRectangle(pen1, x * mask, y * mask, mask, mask);

					for (int col = 0; col < mask; col++) {								//讀取targetblock並且放大到另一個picturebox上
						for (int row = 0; row < mask; row++) {
							Color set = videos[count + 1]->GetPixel(x * mask + row, y * mask + col);
							target->SetPixel(row, col, set);
						}
					}
					Bitmap^ zoomin = gcnew Bitmap(10 * target->Width, 10 * target->Height);	//放大target block
					for (int i = 0; i < zoomin->Width; i++) {
						for (int j = 0; j < zoomin->Height; j++) {
							Color set = target->GetPixel(i / 10, j / 10);
							zoomin->SetPixel(i, j, set);
						}
					}
					pictureBox4->Image = zoomin;

					int cal, min = 20000000;
					int s = 3;
					int realX, realY;
					int centerX, centerY;
					int stepX, stepY;
					centerX = x * mask;
					centerY = y * mask;

					while (s > 0) {

						for (int i = -1; i < 2; i++) {
							for (int j = -1; j < 2; j++) {
								cal = 0;

								realX = centerX + i * s * mask;
								realY = centerY + j * s * mask;

								if ((realX >= 0) && (realX < (256 - mask + 1)) && (realY >= 0) && (realY < (256 - mask + 1))) {

									Graphics^ canvus2 = pictureBox1->CreateGraphics();
									canvus2->DrawImage(videos[count], rec);
									canvus2->DrawRectangle(pen1, realX, realY, mask, mask);

									for (int col = 0; col < mask; col++) {						//讀取candidate block資訊
										for (int row = 0; row < mask; row++) {
											Color set = videos[count]->GetPixel(realX + row, realY + col);
											candidate->SetPixel(row, col, set);
										}
									}
									Bitmap^ zoomin = gcnew Bitmap(10 * candidate->Width, 10 * candidate->Height);	//放大target block
									for (int i = 0; i < zoomin->Width; i++) {
										for (int j = 0; j < zoomin->Height; j++) {
											Color set = candidate->GetPixel(i / 10, j / 10);
											zoomin->SetPixel(i, j, set);
										}
									}
									pictureBox3->Image = zoomin;

									cal = Matchmethod_caculate(target, candidate);
									/*for (int col = 0; col < mask; col++) {
										for (int row = 0; row < mask; row++) {
											cal += abs(target->GetPixel(row, col).R - candidate->GetPixel(row, col).R);
										}
									}*/

									if (cal <= min) {
										min = cal;
										stepX = realX;			//得出3步驟中誤差值最小的block的座標
										stepY = realY;
									}
								}
							}
						}
						centerX = stepX;
						centerY = stepY;
						s--;
					}



					end.X = x * mask + (mask / 2) - 1;
					end.Y = y * mask + (mask / 2) - 1;
					start.X = centerX + (mask / 2) - 1;
					start.Y = centerY + (mask / 2) - 1;
					motion->DrawLine(pen2, start, end);
					Color R = Color::FromArgb(255, 0, 0);
					motionvector->SetPixel(start.X, start.Y, R);
					Thread_SetImage(pictureBox5, motionvector);
					sw->Write(centerX.ToString());
					sw->Write(" ");
					sw->Write(centerY.ToString());
					sw->Write(" ");
				}
			}
		}
		sw->Close();
	}

	};
}
