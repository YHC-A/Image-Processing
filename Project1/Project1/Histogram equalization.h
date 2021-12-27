#pragma once
#include <math.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// HistogramEqualization 的摘要
	/// </summary>
	public ref class HistogramEqualization : public System::Windows::Forms::Form
	{
	public:
		HistogramEqualization(void)
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
		~HistogramEqualization()
		{
			if (components)
			{
				delete components;
			}
		}

	public: static Bitmap^ scr1;

	public: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	public: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	public:
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
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(352, 332);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(13, 364);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(352, 321);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(399, 13);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::Gray;
			series1->Legend = L"Legend1";
			series1->Name = L"Gray";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)));
			series2->Legend = L"Legend1";
			series2->Name = L"CDF";
			series2->YAxisType = System::Windows::Forms::DataVisualization::Charting::AxisType::Secondary;
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(433, 332);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(399, 364);
			this->chart2->Margin = System::Windows::Forms::Padding(4);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->Color = System::Drawing::Color::Gray;
			series3->Legend = L"Legend1";
			series3->Name = L"Gray";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)));
			series4->Legend = L"Legend1";
			series4->Name = L"CDF";
			series4->YAxisType = System::Windows::Forms::DataVisualization::Charting::AxisType::Secondary;
			this->chart2->Series->Add(series3);
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(433, 321);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			// 
			// HistogramEqualization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 716);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"HistogramEqualization";
			this->Text = L"Histogram Equalization";
			this->Load += gcnew System::EventHandler(this, &HistogramEqualization::HistogramEqualization_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void HistogramEqualization_Load(System::Object^ sender, System::EventArgs^ e)
	{
		Bitmap^ Gray = gcnew Bitmap(scr1->Width, scr1->Height);
		for (int i = 0; i < (scr1->Width); i++) {
			for (int j = 0; j < (scr1->Height); j++) {
				Color pixel = scr1->GetPixel(i, j);
				int r, g, b, gs;
				r = pixel.R;
				g = pixel.G;
				b = pixel.B;
				gs = 0.3 * r + 0.3 * g + 0.4 * b;
				Color paint = Color::FromArgb(gs, gs, gs);
				Gray->SetPixel(i, j, paint);
			}
		}
		this->pictureBox1->Image = Gray;

		// origin histogram
		this->chart1->Series["Gray"]->Points->Clear();
		unsigned int gray[256] = { 0 };
		for (int i = 0; i < Gray->Width; i++) {
			for (int j = 0; j < Gray->Height; j++)
			{
				gray[Gray->GetPixel(i, j).R]++;
			}
		}
		for (int k = 0; k < 256; k++)
		{
			this->chart1->Series["Gray"]->Points->AddXY(k, gray[k]);
		}

		// origin CDF
		this->chart1->Series["CDF"]->Points->Clear();
		float Probabily_1[256] = { 0 };
		float sum_1 = 0, total_1[256] = { 0 };
		for (int i = 0; i < 255; i++)
		{
			Probabily_1[i] = gray[i] / (float(Gray->Width) * float(Gray->Height));
			sum_1 += Probabily_1[i];
			total_1[i] = sum_1;
		}
		for (int k = 0; k < 255; k++)
		{
			this->chart1->Series["CDF"]->Points->AddXY(k, total_1[k]);
		}

		//========================================================================equalization
		// new
		Bitmap^ equalization = gcnew Bitmap(Gray->Width, Gray->Height);
		for (int i = 0; i < Gray->Width; i++) {
			for (int j = 0; j < Gray->Height; j++) {
				int before = Gray->GetPixel(i, j).R;
				int after = round(255 * total_1[before]);
				Color set = Color::FromArgb(after, after, after);
				equalization->SetPixel(i, j, set);
			}
		}
		pictureBox2->Image = equalization;
		// new histogram
		this->chart2->Series["Gray"]->Points->Clear();
		unsigned int equ[256] = { 0 };
		for (int i = 0; i < Gray->Width; i++) {
			for (int j = 0; j < Gray->Height; j++)
			{
				equ[equalization->GetPixel(i, j).R]++;
			}
		}
		for (int k = 0; k < 256; k++)
		{
			this->chart2->Series["Gray"]->Points->AddXY(k, equ[k]);
		}

		// new CDF
		this->chart2->Series["CDF"]->Points->Clear();
		float Probabily_2[256] = { 0 };
		float sum_2 = 0, total_2[256] = { 0 };
		for (int i = 0; i < 255; i++)
		{
			Probabily_2[i] = equ[i] / (float(equalization->Width) * float(equalization->Height));
			sum_2 += Probabily_2[i];
			total_2[i] = sum_2;
		}
		for (int k = 0; k < 255; k++)
		{
			this->chart2->Series["CDF"]->Points->AddXY(k, total_2[k]);
		}
	}
	};
}