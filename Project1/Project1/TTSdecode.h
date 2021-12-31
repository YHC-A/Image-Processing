#pragma once
#include <stdlib.h>
#include <cliext\vector>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cmath>


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// TTSdecode 的摘要
	/// </summary>
	public ref class TTSdecode : public System::Windows::Forms::Form
	{
	public:
		TTSdecode(void)
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
		~TTSdecode()
		{
			if (components)
			{
				delete components;
			}
		}
	public: cliext::vector<Bitmap^> videoseries;
		  int rate = 100;
		  int FrameNumber = 0;
		  cliext::vector<Bitmap^>motionvector;//15個白色圖給他化
		  cliext::vector<Graphics^> MOTION;//15彰化不
		  cliext::vector<Bitmap^>DECODE;//邊解編畫上去
		  cliext::vector<Bitmap^>decodesereis;//解碼完後的16張圖
		  cliext::vector<float>PSNR;

	protected:
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ 檔案ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tSSMAD16ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tSSMAD8ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tSSMSD16ToolStripMenuItem;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TTSdecode::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->檔案ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tSSMAD16ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tSSMAD8ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tSSMSD16ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(530, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(233, 22);
			this->label5->TabIndex = 53;
			this->label5->Text = L"Current Frame (time：t + 1)";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(317, 457);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(53, 50);
			this->button5->TabIndex = 51;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &TTSdecode::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(258, 457);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 50);
			this->button4->TabIndex = 50;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &TTSdecode::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(199, 457);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(53, 50);
			this->button3->TabIndex = 49;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &TTSdecode::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(140, 457);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(53, 50);
			this->button2->TabIndex = 48;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &TTSdecode::button2_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(81, 457);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(53, 50);
			this->button1->TabIndex = 47;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TTSdecode::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(460, 397);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 22);
			this->label3->TabIndex = 46;
			this->label3->Text = L"--";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(438, 397);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 22);
			this->label2->TabIndex = 45;
			this->label2->Text = L"/";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(408, 397);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 22);
			this->label1->TabIndex = 44;
			this->label1->Text = L"--";
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(54, 397);
			this->trackBar1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(341, 56);
			this->trackBar1->TabIndex = 43;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &TTSdecode::trackBar1_Scroll);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(54, 550);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(341, 320);
			this->pictureBox3->TabIndex = 42;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(535, 70);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(341, 320);
			this->pictureBox2->TabIndex = 41;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(54, 70);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(341, 320);
			this->pictureBox1->TabIndex = 40;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(51, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(223, 22);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Reference Frame (time：t)";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &TTSdecode::timer1_Tick_1);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &TTSdecode::timer2_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->檔案ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(953, 33);
			this->menuStrip1->TabIndex = 54;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 檔案ToolStripMenuItem
			// 
			this->檔案ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tSSMAD16ToolStripMenuItem,
					this->tSSMAD8ToolStripMenuItem, this->tSSMSD16ToolStripMenuItem
			});
			this->檔案ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->檔案ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"檔案ToolStripMenuItem.Image")));
			this->檔案ToolStripMenuItem->Name = L"檔案ToolStripMenuItem";
			this->檔案ToolStripMenuItem->Size = System::Drawing::Size(82, 29);
			this->檔案ToolStripMenuItem->Text = L"File";
			// 
			// tSSMAD16ToolStripMenuItem
			// 
			this->tSSMAD16ToolStripMenuItem->Name = L"tSSMAD16ToolStripMenuItem";
			this->tSSMAD16ToolStripMenuItem->Size = System::Drawing::Size(224, 30);
			this->tSSMAD16ToolStripMenuItem->Text = L"TSS(MAD-8)";
			this->tSSMAD16ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TTSdecode::tSSMAD16ToolStripMenuItem_Click);
			// 
			// tSSMAD8ToolStripMenuItem
			// 
			this->tSSMAD8ToolStripMenuItem->Name = L"tSSMAD8ToolStripMenuItem";
			this->tSSMAD8ToolStripMenuItem->Size = System::Drawing::Size(224, 30);
			this->tSSMAD8ToolStripMenuItem->Text = L"TSS(MSD-8)";
			this->tSSMAD8ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TTSdecode::tSSMAD8ToolStripMenuItem_Click);
			// 
			// tSSMSD16ToolStripMenuItem
			// 
			this->tSSMSD16ToolStripMenuItem->Name = L"tSSMSD16ToolStripMenuItem";
			this->tSSMSD16ToolStripMenuItem->Size = System::Drawing::Size(224, 30);
			this->tSSMSD16ToolStripMenuItem->Text = L"TSS(MSD-16)";
			this->tSSMSD16ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TTSdecode::tSSMSD16ToolStripMenuItem_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(534, 550);
			this->chart1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"PSNR";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(342, 320);
			this->chart1->TabIndex = 55;
			this->chart1->Text = L"chart1";
			// 
			// TTSdecode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(953, 904);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"TTSdecode";
			this->Text = L"TTSdecode";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//播放
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		FrameNumber = trackBar1->Value;
		timer1->Interval = rate;//時間間隔秒數(毫秒)
		timer1->Enabled = true;

	}

	private: System::Void timer1_Tick_1(System::Object^ sender, System::EventArgs^ e) {

		if (FrameNumber == 0) {
			this->chart1->Series["PSNR"]->Points->Clear();
		}

		if (FrameNumber < 15) {
			pictureBox1->Image = decodesereis[FrameNumber];//picture顯示video_bitmap隨著trackBar1而變動的圖像
			pictureBox2->Image = decodesereis[FrameNumber + 1];
			pictureBox3->Image = motionvector[FrameNumber];
			this->chart1->Series["PSNR"]->Points->AddXY((FrameNumber + 1).ToString(), PSNR[FrameNumber]);
		}
		label1->Text = (FrameNumber + 1).ToString();//顯示目前為第n張圖
		trackBar1->Value = FrameNumber;
		FrameNumber++;

		if (FrameNumber >= 15)//如果計算圖像的計數大於等於圖像總張數
		{
			timer1->Enabled = false;//timer1關閉
			FrameNumber = 0;//計數歸零
			pictureBox1->Image = decodesereis[0];
			pictureBox2->Image = decodesereis[1];
			pictureBox3->Image = motionvector[FrameNumber];
			trackBar1->Value = FrameNumber;
			label1->Text = (FrameNumber + 1).ToString();
			this->chart1->Series["PSNR"]->Points->Clear();
		}
		if (FrameNumber == 0) {
			this->chart1->Series["PSNR"]->Points->AddXY((FrameNumber + 1).ToString(), PSNR[FrameNumber]);
		}
	}

		   //暫停
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
	}

		   //降素
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		rate = (float)rate * 2;
		timer1->Interval = rate;
	}

		   //快速
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		rate = (float)rate * 0.5;
		timer1->Interval = rate;
	}

		   //停止
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;

		trackBar1->Value = 0;
		label1->Text = (trackBar1->Value + 1).ToString();
		pictureBox1->Image = decodesereis[trackBar1->Value];
		pictureBox2->Image = decodesereis[trackBar1->Value + 1];
	}

		   //倒轉
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		FrameNumber = trackBar1->Value;
		timer2->Interval = rate;
		timer2->Enabled = true;
	}


	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		trackBar1->Value = FrameNumber;
		label1->Text = (FrameNumber + 1).ToString();//顯示目前為第n張圖
		pictureBox1->Image = decodesereis[FrameNumber];
		if (FrameNumber == decodesereis.size() - 1) {
			pictureBox2->Image = decodesereis[FrameNumber];
		}
		else {
			pictureBox2->Image = decodesereis[FrameNumber + 1];
		}
		FrameNumber--;
		if (FrameNumber < 0) {
			timer2->Enabled = false;
			FrameNumber = 0;
		}
	}

		   //拖曳
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {

		unsigned int number;
		number = trackBar1->Value;
		if (number < 15) {
			pictureBox1->Image = decodesereis[number];//picture顯示video_bitmap隨著trackBar1而變動的圖像
			pictureBox2->Image = decodesereis[number + 1];
			pictureBox3->Image = motionvector[number];
			this->chart1->Series["PSNR"]->Points->AddXY((number + 1).ToString(), PSNR[number]);
		}
		label1->Text = (number + 1).ToString();

	}

	//tss mad 8
	private: System::Void tSSMAD16ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		decodesereis.clear();
		motionvector.clear();
		MOTION.clear();
		DECODE.clear();
		PSNR.clear();

		std::fstream fs("TSS_MAD.txt");
		int a[15360][2];
		for (int i = 0; i < 15360; i++) {
			for (int j = 0; j < 2; j++) {
				fs >> a[i][j];
				std::cout << a[i][j] << " ";
			}
			std::cout << "\n";
		}
		fs.close();

		decodesereis.push_back(gcnew Bitmap(videoseries[0]));//第一章是原圖

		Point start, end;
		Pen^ pen = gcnew Pen(Color::Red, 2);
		Color R = Color::FromArgb(255, 0, 0);

		for (int i = 0; i < (videoseries.size() - 1); i++) {
			std::cout << i << " ";
			//先創一個解碼後的圖出來

			motionvector.push_back(gcnew Bitmap(256, 256));//創造一個白色畫布去化motionvector
			for (int i3 = 0; i3 < 256; i3++) {
				for (int j3 = 0; j3 < 256; j3++) {
					Color set3 = Color::FromArgb(255, 255, 255);
					motionvector[i]->SetPixel(i3, j3, set3);
				}
			}



			MOTION.push_back(Graphics::FromImage(motionvector[i])); //對應到15張畫布

			DECODE.push_back(gcnew Bitmap(256, 256));//解碼時候 創造出來的圖


			for (int y = 0; y < 32; y++) {
				for (int x = 0; x < 32; x++) {

					//先知道位置 移動起點
					start.X = a[i * 1024 + y * 32 + x][0] + 3;
					start.Y = a[i * 1024 + y * 32 + x][1] + 3;
					end.X = x * 8 + 3;
					end.Y = y * 8 + 3;
					MOTION[i]->DrawLine(pen, start, end);
					motionvector[i]->SetPixel(start.X, start.Y, R);

					for (int row = 0; row < 8; row++) {
						for (int col = 0; col < 8; col++) {
							Color set = decodesereis[i]->GetPixel(a[i * 1024 + y * 32 + x][0] + row, a[i * 1024 + y * 32 + x][1] + col);//利用前一張造出下一張
							DECODE[i]->SetPixel(x * 8 + row, y * 8 + col, set);

						}
					}
				}
			}

			//pictureBox1->Image = motionvector[i];
			//pictureBox1->Refresh();
			decodesereis.push_back(gcnew Bitmap(DECODE[i]));

		}

		trackBar1->Maximum = decodesereis.size() - 2;
		this->label3->Text = decodesereis.size().ToString();
		this->label1->Text = "1";
		pictureBox1->Image = decodesereis[0];
		pictureBox2->Image = decodesereis[1];
		pictureBox3->Image = motionvector[0];


		for (int num = 0; num < 15; num++) {
			long long sum1 = 0, sum2 = 0;
			double final;
			for (int i = 0; i < decodesereis[num + 1]->Width; i++) {
				for (int j = 0; j < decodesereis[num + 1]->Height; j++) {
					sum1 += pow(255, 2);
					sum1 += pow(255, 2);
					sum1 += pow(255, 2);
				}
			}

			for (int i = 0; i < decodesereis[num + 1]->Width; i++) {
				for (int j = 0; j < decodesereis[num + 1]->Height; j++) {
					sum2 += pow((decodesereis[num + 1]->GetPixel(i, j).R) - videoseries[num + 1]->GetPixel(i, j).R, 2);
					sum2 += pow((decodesereis[num + 1]->GetPixel(i, j).G) - videoseries[num + 1]->GetPixel(i, j).G, 2);
					sum2 += pow((decodesereis[num + 1]->GetPixel(i, j).B) - videoseries[num + 1]->GetPixel(i, j).B, 2);
				}
			}

			final = 10 * log((double)sum1 / (double)sum2);

			PSNR.push_back(final);

		}

		GC::Collect();
	}


		   //tss msd 16

	private: System::Void tSSMSD16ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		decodesereis.clear();
		motionvector.clear();
		MOTION.clear();
		DECODE.clear();
		PSNR.clear();
		std::fstream fs("TSS2.txt");
		int a[3840][2];
		for (int i = 0; i < 3840; i++) {
			for (int j = 0; j < 2; j++) {
				fs >> a[i][j];
			}
		}
		fs.close();

		decodesereis.push_back(gcnew Bitmap(videoseries[0]));//第一章是原圖

		Point start, end;
		Pen^ pen = gcnew Pen(Color::Red, 2);
		Color R = Color::FromArgb(255, 0, 0);

		for (int i = 0; i < (videoseries.size() - 1); i++) {
			//先創一個解碼後的圖出來

			motionvector.push_back(gcnew Bitmap(256, 256));//創造一個白色畫布去化motionvector
			for (int i3 = 0; i3 < 256; i3++) {
				for (int j3 = 0; j3 < 256; j3++) {
					Color set3 = Color::FromArgb(255, 255, 255);
					motionvector[i]->SetPixel(i3, j3, set3);
				}
			}



			MOTION.push_back(Graphics::FromImage(motionvector[i])); //對應到15張畫布

			DECODE.push_back(gcnew Bitmap(256, 256));//解碼時候 創造出來的圖


			for (int y = 0; y < 16; y++) {
				for (int x = 0; x < 16; x++) {

					//先知道位置 移動起點
					start.X = a[i * 256 + y * 16 + x][0] + 7;
					start.Y = a[i * 256 + y * 16 + x][1] + 7;
					end.X = x * 16 + 7;
					end.Y = y * 16 + 7;
					MOTION[i]->DrawLine(pen, start, end);
					motionvector[i]->SetPixel(start.X, start.Y, R);

					for (int row = 0; row < 16; row++) {
						for (int col = 0; col < 16; col++) {
							Color set = decodesereis[i]->GetPixel(a[i * 256 + y * 16 + x][0] + row, a[i * 256 + y * 16 + x][1] + col);//利用前一張造出下一張
							DECODE[i]->SetPixel(x * 16 + row, y * 16 + col, set);

						}
					}
				}
			}

			//pictureBox1->Image = motionvector[i];
			//pictureBox1->Refresh();
			decodesereis.push_back(gcnew Bitmap(DECODE[i]));

		}

		trackBar1->Maximum = decodesereis.size() - 1;
		this->label3->Text = decodesereis.size().ToString();
		this->label1->Text = "1";
		pictureBox1->Image = decodesereis[0];
		pictureBox2->Image = decodesereis[1];
		pictureBox3->Image = motionvector[0];

		for (int num = 0; num < 15; num++) {
			long long sum1 = 0, sum2 = 0;
			double final;
			for (int i = 0; i < decodesereis[num + 1]->Width; i++) {
				for (int j = 0; j < decodesereis[num + 1]->Height; j++) {
					sum1 += pow(255, 2);
					sum1 += pow(255, 2);
					sum1 += pow(255, 2);
				}
			}

			for (int i = 0; i < decodesereis[num + 1]->Width; i++) {
				for (int j = 0; j < decodesereis[num + 1]->Height; j++) {
					sum2 += pow((decodesereis[num + 1]->GetPixel(i, j).R) - videoseries[num + 1]->GetPixel(i, j).R, 2);
					sum2 += pow((decodesereis[num + 1]->GetPixel(i, j).G) - videoseries[num + 1]->GetPixel(i, j).G, 2);
					sum2 += pow((decodesereis[num + 1]->GetPixel(i, j).B) - videoseries[num + 1]->GetPixel(i, j).B, 2);
				}
			}

			final = 10 * log((double)sum1 / (double)sum2);

			PSNR.push_back(final);

		}



	}

	//tss msd 8
	private: System::Void tSSMAD8ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		decodesereis.clear();
		motionvector.clear();
		MOTION.clear();
		DECODE.clear();
		PSNR.clear();

		std::fstream fs("TSS_MSD.txt");
		int a[15360][2];
		for (int i = 0; i < 15360; i++) {
			for (int j = 0; j < 2; j++) {
				fs >> a[i][j];
				std::cout << a[i][j] << " ";
			}
			std::cout << "\n";
		}
		fs.close();

		decodesereis.push_back(gcnew Bitmap(videoseries[0]));//第一章是原圖

		Point start, end;
		Pen^ pen = gcnew Pen(Color::Red, 2);
		Color R = Color::FromArgb(255, 0, 0);

		for (int i = 0; i < (videoseries.size() - 1); i++) {
			std::cout << i << " ";
			//先創一個解碼後的圖出來

			motionvector.push_back(gcnew Bitmap(256, 256));//創造一個白色畫布去化motionvector
			for (int i3 = 0; i3 < 256; i3++) {
				for (int j3 = 0; j3 < 256; j3++) {
					Color set3 = Color::FromArgb(255, 255, 255);
					motionvector[i]->SetPixel(i3, j3, set3);
				}
			}



			MOTION.push_back(Graphics::FromImage(motionvector[i])); //對應到15張畫布

			DECODE.push_back(gcnew Bitmap(256, 256));//解碼時候 創造出來的圖


			for (int y = 0; y < 32; y++) {
				for (int x = 0; x < 32; x++) {

					//先知道位置 移動起點
					start.X = a[i * 1024 + y * 32 + x][0] + 3;
					start.Y = a[i * 1024 + y * 32 + x][1] + 3;
					end.X = x * 8 + 3;
					end.Y = y * 8 + 3;
					MOTION[i]->DrawLine(pen, start, end);
					motionvector[i]->SetPixel(start.X, start.Y, R);

					for (int row = 0; row < 8; row++) {
						for (int col = 0; col < 8; col++) {
							Color set = decodesereis[i]->GetPixel(a[i * 1024 + y * 32 + x][0] + row, a[i * 1024 + y * 32 + x][1] + col);//利用前一張造出下一張
							DECODE[i]->SetPixel(x * 8 + row, y * 8 + col, set);

						}
					}
				}
			}

			//pictureBox1->Image = motionvector[i];
			//pictureBox1->Refresh();
			decodesereis.push_back(gcnew Bitmap(DECODE[i]));

		}

		trackBar1->Maximum = decodesereis.size() - 2;
		this->label3->Text = decodesereis.size().ToString();
		this->label1->Text = "1";
		pictureBox1->Image = decodesereis[0];
		pictureBox2->Image = decodesereis[1];
		pictureBox3->Image = motionvector[0];


		for (int num = 0; num < 15; num++) {
			long long sum1 = 0, sum2 = 0;
			double final;
			for (int i = 0; i < decodesereis[num + 1]->Width; i++) {
				for (int j = 0; j < decodesereis[num + 1]->Height; j++) {
					sum1 += pow(255, 2);
					sum1 += pow(255, 2);
					sum1 += pow(255, 2);
				}
			}

			for (int i = 0; i < decodesereis[num + 1]->Width; i++) {
				for (int j = 0; j < decodesereis[num + 1]->Height; j++) {
					sum2 += pow((decodesereis[num + 1]->GetPixel(i, j).R) - videoseries[num + 1]->GetPixel(i, j).R, 2);
					sum2 += pow((decodesereis[num + 1]->GetPixel(i, j).G) - videoseries[num + 1]->GetPixel(i, j).G, 2);
					sum2 += pow((decodesereis[num + 1]->GetPixel(i, j).B) - videoseries[num + 1]->GetPixel(i, j).B, 2);
				}
			}

			final = 10 * log((double)sum1 / (double)sum2);

			PSNR.push_back(final);

		}

		GC::Collect();

	}
	};
}
