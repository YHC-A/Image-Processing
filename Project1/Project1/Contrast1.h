#pragma once
#include <iostream>
#include "Contrast2.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ContrastSet 的摘要
	/// </summary>
	public ref class ContrastSet : public System::Windows::Forms::Form
	{
	public:
		ContrastSet(void)
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
		~ContrastSet()
		{
			if (components)
			{
				delete components;
			}
		}

	public: static Bitmap^ scr_gray;


	public: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;


	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(347, 325);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(16, 381);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(347, 325);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(388, 15);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::Gray;
			series1->Legend = L"Legend1";
			series1->Name = L"Gray";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(625, 325);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(388, 381);
			this->chart2->Margin = System::Windows::Forms::Padding(4);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::Gray;
			series2->Legend = L"Legend1";
			series2->Name = L"Gray";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(625, 325);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(1111, 87);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(341, 320);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ContrastSet::pictureBox3_MouseUp);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(1111, 537);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 60);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Origin";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ContrastSet::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label2->Location = System::Drawing::Point(1061, 87);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"255";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label3->Location = System::Drawing::Point(1410, 411);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"255";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label4->Location = System::Drawing::Point(1083, 387);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label5->Location = System::Drawing::Point(1113, 411);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(1113, 451);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"point1 : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(1113, 46);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Choose point1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(1113, 487);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 25);
			this->label1->TabIndex = 13;
			this->label1->Text = L"point2 : ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(1195, 451);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"( label8, ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(1274, 451);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 25);
			this->label9->TabIndex = 15;
			this->label9->Text = L" label9 )";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(1195, 487);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 25);
			this->label10->TabIndex = 16;
			this->label10->Text = L"( label10, ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label11->Location = System::Drawing::Point(1287, 487);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 25);
			this->label11->TabIndex = 17;
			this->label11->Text = L"label11 )";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label12->Location = System::Drawing::Point(1251, 411);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 20);
			this->label12->TabIndex = 18;
			this->label12->Text = L"input";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label13->Location = System::Drawing::Point(1042, 239);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 20);
			this->label13->TabIndex = 19;
			this->label13->Text = L"output";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(1255, 537);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 60);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Set";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ContrastSet::button2_Click);
			// 
			// ContrastSet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1635, 726);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ContrastSet";
			this->Text = L"ContrastSet";
			this->Load += gcnew System::EventHandler(this, &ContrastSet::ContrastSet_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		float X1 = 0, Y1 = 255, X2 = 255, Y2 = 0;
	private: System::Void ContrastSet_Load(System::Object^ sender, System::EventArgs^ e) {
		this->pictureBox1->Image = scr_gray;
		this->label8->Text = X1.ToString();
		this->label9->Text = (255 - Y1).ToString();
		this->label10->Text = X2.ToString();
		this->label11->Text = (255 - Y2).ToString();
		//原圖直方圖
		this->chart1->Series["Gray"]->Points->Clear();
		unsigned int ori_gray[256] = { 0 };
		for (int i = 0; i < scr_gray->Width; i++) {
			for (int j = 0; j < scr_gray->Height; j++)
			{
				ori_gray[scr_gray->GetPixel(i, j).R]++;
			}
		}
		for (int k = 0; k < 256; k++)
		{
			this->chart1->Series["Gray"]->Points->AddXY(k, ori_gray[k]);
		}

		//製作圖表
		Bitmap^ chart = gcnew Bitmap(256, 256);
		for (int i = 0; i < 256; i++) {
			for (int j = 0; j < 256; j++) {
				chart->SetPixel(i, j, Color::FromArgb(255, 255, 255));
			}
		}

		Point original = Point(0, 255 - 0);
		Point middle_1 = Point(X1, Y1);
		Point middle_2 = Point(X2, Y2);
		Point end = Point(255, 255 - 255);

		Pen^ draw = gcnew Pen(Color::FromArgb(0, 0, 0));
		Graphics^ canvas = Graphics::FromImage(chart);
		canvas->DrawLine(draw, original, middle_1);
		canvas->DrawLine(draw, middle_1, middle_2);
		canvas->DrawLine(draw, middle_2, end);

		this->pictureBox3->Image = chart;

		//畫新圖
		float newvalue;
		Bitmap^ NEW = gcnew Bitmap(scr_gray->Width, scr_gray->Height);

		NEW = scr_gray;

		this->pictureBox2->Image = NEW;
		//新圖直方圖
		this->chart2->Series["Gray"]->Points->Clear();
		unsigned int new_gray[256] = { 0 };
		for (int i = 0; i < NEW->Width; i++) {
			for (int j = 0; j < NEW->Height; j++)
			{
				new_gray[NEW->GetPixel(i, j).R]++;
			}
		}
		for (int k = 0; k < 256; k++)
		{
			this->chart2->Series["Gray"]->Points->AddXY(k, new_gray[k]);
		}
	}
	int flag = 1;
	private: System::Void pictureBox3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			if (flag == 1 && e->X <= X2) {
				flag = 2;
				X1 = e->X;
				Y1 = e->Y;
				label7->Text = "Choose point 2";
			}
			else if(flag == 2 && e->X >= X1){
				flag = 1;
				X2 = e->X;
				Y2 = e->Y;
				label7->Text = "Choose point 1";
			}		
		}



		if (X2 < X1) {
			// MessageBox::Show("第二點的X座標必需大於第一點");
		}
		else if (X2 >= X1) {
			this->label8->Text = "( " + X1.ToString() + ", ";
			this->label9->Text = (255 - Y1).ToString() + ")";
			this->label10->Text = "( " + X2.ToString() + ", ";
			this->label11->Text = (255 - Y2).ToString() + ")";

			//製作圖表
			Bitmap^ chart = gcnew Bitmap(256, 256);
			for (int i = 0; i < 256; i++) {
				for (int j = 0; j < 256; j++) {
					chart->SetPixel(i, j, Color::FromArgb(255, 255, 255));
				}
			}

			Point original = Point(0, 255);
			Point middle_1 = Point(X1, Y1);
			Point middle_2 = Point(X2, Y2);
			Point end = Point(255, 0);

			Pen^ draw = gcnew Pen(Color::FromArgb(0, 0, 0));
			Graphics^ canvas = Graphics::FromImage(chart);
			canvas->DrawLine(draw, original, middle_1);
			canvas->DrawLine(draw, middle_1, middle_2);
			canvas->DrawLine(draw, middle_2, end);

			this->pictureBox3->Image = chart;

			//製作新圖
			Bitmap^ NEW = gcnew	Bitmap(scr_gray->Width, scr_gray->Height);
			for (int i = 0; i < NEW->Width; i++) {
				for (int j = 0; j < NEW->Height; j++) {
					int pixel = scr_gray->GetPixel(i, j).R;
					if (pixel < X1) {
						float a = (255 - Y1) / X1;
						float b = 0;
						float set = round((a * pixel) + b);
						NEW->SetPixel(i, j, Color::FromArgb((int)set, (int)set, (int)set));
					}
					else if (pixel >= X1 && pixel < X2) {
						float a = ((255 - Y1) - (255 - Y2)) / (X1 - X2);
						float b = (255 - Y1) - (X1 * a);
						float set = round((a * pixel) + b);
						NEW->SetPixel(i, j, Color::FromArgb((int)set, (int)set, (int)set));
					}
					else if (pixel >= X2) {
						float a = (255 - (255 - Y2)) / (255 - X2);
						float b = 255 - (255 * a);
						float set = round((a * pixel) + b);
						NEW->SetPixel(i, j, Color::FromArgb((int)set, (int)set, (int)set));
					}
				}
			}
			this->pictureBox2->Image = NEW;

			//製作新圖直方圖
			this->chart2->Series["Gray"]->Points->Clear();
			unsigned int new_gray[256] = { 0 };
			for (int i = 0; i < NEW->Width; i++) {
				for (int j = 0; j < NEW->Height; j++)
				{
					new_gray[NEW->GetPixel(i, j).R]++;
				}
			}
			for (int k = 0; k < 256; k++)
			{
				this->chart2->Series["Gray"]->Points->AddXY(k, new_gray[k]);
			}




		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		X1 = 255, Y1 = 0, X2 = 255, Y2 = 0;
		this->label8->Text = X1.ToString();
		this->label9->Text = (255 - Y1).ToString();
		this->label10->Text = X2.ToString();
		this->label11->Text = (255 - Y2).ToString();
		//原圖直方圖
		this->chart1->Series["Gray"]->Points->Clear();
		unsigned int ori_gray[256] = { 0 };
		for (int i = 0; i < scr_gray->Width; i++) {
			for (int j = 0; j < scr_gray->Height; j++)
			{
				ori_gray[scr_gray->GetPixel(i, j).R]++;
			}
		}
		for (int k = 0; k < 256; k++)
		{
			this->chart1->Series["Gray"]->Points->AddXY(k, ori_gray[k]);
		}

		//製作圖表
		Bitmap^ chart = gcnew Bitmap(256, 256);
		for (int i = 0; i < 256; i++) {
			for (int j = 0; j < 256; j++) {
				chart->SetPixel(i, j, Color::FromArgb(255, 255, 255));
			}
		}

		Point original = Point(0, 255 - 0);
		Point middle_1 = Point(X1, Y1);
		Point middle_2 = Point(X2, Y2);
		Point end = Point(255, 255 - 255);

		Pen^ draw = gcnew Pen(Color::FromArgb(0, 0, 0));
		Graphics^ canvas = Graphics::FromImage(chart);
		canvas->DrawLine(draw, original, middle_1);
		canvas->DrawLine(draw, middle_1, middle_2);
		canvas->DrawLine(draw, middle_2, end);

		this->pictureBox3->Image = chart;

		//畫新圖
		float newvalue;
		Bitmap^ NEW = gcnew Bitmap(scr_gray->Width, scr_gray->Height);

		NEW = scr_gray;

		this->pictureBox2->Image = NEW;
		//新圖直方圖
		this->chart2->Series["Gray"]->Points->Clear();
		unsigned int new_gray[256] = { 0 };
		for (int i = 0; i < NEW->Width; i++) {
			for (int j = 0; j < NEW->Height; j++)
			{
				new_gray[NEW->GetPixel(i, j).R]++;
			}
		}
		for (int k = 0; k < 256; k++)
		{
			this->chart2->Series["Gray"]->Points->AddXY(k, new_gray[k]);
		}

	}
	// set
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		contraststretch^ stretch = gcnew contraststretch;
		stretch->scr1_gray = this->scr_gray;
		stretch->pictureBox1->Image = this->scr_gray;
		stretch->Show();
	}
};
}
