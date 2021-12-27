#pragma once
#include <cmath>
#include <math.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// contraststretch 的摘要
	/// </summary>
	public ref class contraststretch : public System::Windows::Forms::Form
	{
	public:
		contraststretch(void)
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
		~contraststretch()
		{
			if (components)
			{
				delete components;
			}
		}

	public: Bitmap^ scr1_gray;

	public: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(24, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 260);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(24, 342);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(260, 260);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(309, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::Gray;
			series1->Legend = L"Legend1";
			series1->Name = L"Gray";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(480, 300);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(309, 318);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::Gray;
			series2->Legend = L"Legend1";
			series2->Name = L"Gray";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(480, 300);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			// 
			// contraststretch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 633);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"contraststretch";
			this->Text = L"對比拉伸";
			this->Load += gcnew System::EventHandler(this, &contraststretch::contraststretch_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void contraststretch_Load(System::Object^ sender, System::EventArgs^ e) {
		this->chart1->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::Color::Transparent;
		this->chart1->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::Color::Transparent;
		this->chart2->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::Color::Transparent;
		this->chart2->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::Color::Transparent;
		this->chart1->Series["Gray"]->Points->Clear();
		int Gray[256] = { 0 };
		for (int i = 0; i < scr1_gray->Width; i++) {
			for (int j = 0; j < scr1_gray->Height; j++)
			{
				Gray[scr1_gray->GetPixel(i, j).R]++;
			}

		}
		for (int k = 0; k < 255; k++)
		{
			this->chart1->Series["Gray"]->Points->AddXY(k.ToString(), Gray[k]);
		}
		///
		/// 
		/// 
		/// histogram over 25 points will up to 255
		/// 
		/// 
		int Max, min;
		Bitmap^ stretch = gcnew Bitmap(scr1_gray->Width, scr1_gray->Height);
		for (int i = 0; i < 256; i++) {
			if (Gray[i] > 25) {
				min = i;
				break;
			}
		}
		for (int i = 255; i >= 0; i--) {
			if (Gray[i] > 25) {
				Max = i;
				break;
			}
		}
		for (int i = 0; i < scr1_gray->Width; i++) {
			for (int j = 0; j < scr1_gray->Height; j++) {
				int adjust = 0, pixel = scr1_gray->GetPixel(i, j).R;
				adjust = 255 * (pixel - min) / (Max - min);
				if (adjust < 0) { adjust = 0; }
				else if (adjust > 255) { adjust = 255; }
				stretch->SetPixel(i, j, Color::FromArgb(adjust, adjust, adjust));
			}
		}
		pictureBox2->Image = stretch;
		///
		/// 
		///	
		///
		/// 
		/// 
		this->chart2->Series["Gray"]->Points->Clear();
		int gray[256] = { 0 };
		for (int i = 0; i < stretch->Width; i++) {
			for (int j = 0; j < stretch->Height; j++)
			{
				gray[stretch->GetPixel(i, j).R]++;
			}

		}
		for (int k = 0; k < 255; k++)
		{
			this->chart2->Series["Gray"]->Points->AddXY(k.ToString(), gray[k]);
		}
	}
	};
}
