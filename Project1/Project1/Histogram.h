#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Histogram 的摘要
	/// </summary>
	public ref class Histogram : public System::Windows::Forms::Form
	{
	public:
		Histogram(void)
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
		~Histogram()
		{
			if (components)
			{
				delete components;
			}
		}

	public: static Bitmap^ scr; Bitmap^ scr_gray;

	public: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:


	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::CheckBox^ checkBox4;

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
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 29);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 282);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox1->Location = System::Drawing::Point(161, 348);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(47, 29);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"R";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Histogram::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox2->Location = System::Drawing::Point(60, 406);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(49, 29);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"G";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Histogram::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox3->Location = System::Drawing::Point(161, 406);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(46, 29);
			this->checkBox3->TabIndex = 5;
			this->checkBox3->Text = L"B";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Histogram::checkBox3_CheckedChanged);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(325, 29);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"Red";
			series1->ShadowColor = System::Drawing::Color::Transparent;
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::LimeGreen;
			series2->Legend = L"Legend1";
			series2->Name = L"Green";
			series2->ShadowColor = System::Drawing::Color::Transparent;
			series3->ChartArea = L"ChartArea1";
			series3->Color = System::Drawing::Color::Blue;
			series3->Legend = L"Legend1";
			series3->Name = L"Blue";
			series3->ShadowColor = System::Drawing::Color::Transparent;
			series4->ChartArea = L"ChartArea1";
			series4->Color = System::Drawing::Color::Gray;
			series4->Legend = L"Legend1";
			series4->Name = L"Gray";
			series4->ShadowColor = System::Drawing::Color::Transparent;
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(567, 406);
			this->chart1->TabIndex = 6;
			this->chart1->Text = L"chart1";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox4->Location = System::Drawing::Point(60, 348);
			this->checkBox4->Margin = System::Windows::Forms::Padding(4);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(77, 29);
			this->checkBox4->TabIndex = 7;
			this->checkBox4->Text = L"Gray";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Histogram::checkBox4_CheckedChanged);
			// 
			// Histogram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(967, 485);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Histogram";
			this->Text = L"Histogram";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//畫出gray level histogram
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox4->Checked == true)
		{
			Bitmap^ Gray = gcnew Bitmap(scr->Width, scr->Height);
			for (int i = 0; i < (scr->Width); i++) {
				for (int j = 0; j < (scr->Height); j++) {
					Color pixel = scr->GetPixel(i, j);   //在Color結構中建立名為pixel物件以取得原圖像數值
					int r, g, b, gs;
					r = pixel.R;		//這裡取得的是像數中各個顏色數值
					g = pixel.G;
					b = pixel.B;
					gs = 0.3 * r + 0.3 * g + 0.4 * b;
					Color paint = Color::FromArgb(gs, gs, gs);		//重新輸入灰階像數值到paint物件
					Gray->SetPixel(i, j, paint);				//將灰階資料一個一個像數值用paint物件塗上
				}
			}
			scr_gray = Gray;		//注意載入檔案時直接使用此函數，使source_Gray附有值	
			this->pictureBox1->Image = scr_gray;
			this->chart1->Series["Gray"]->Points->Clear();
			int gray[256] = { 0 };		//設gray為1*256的矩陣，並定值為0
			for (int i = 0; i < scr_gray->Width; i++) {
				for (int j = 0; j < scr_gray->Height; j++)
				{
					gray[scr_gray->GetPixel(i, j).R]++;
				}

			}
			for (int k = 0; k < 255; k++)
			{
				this->chart1->Series["Gray"]->Points->AddXY(k.ToString(), gray[k]);
			}
		}
		else
		{
			this->chart1->Series["Gray"]->Points->Clear();
		}
	}
		   //畫Red直方圖
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked == true)
		{
			this->pictureBox1->Image = scr;
			this->chart1->Series["Red"]->Points->Clear();
			int r[256] = { 0 };		//設gray為1*256的矩陣，並定值為0
			for (int i = 0; i < scr->Width; i++) {
				for (int j = 0; j < scr->Height; j++)
				{
					r[scr->GetPixel(i, j).R]++;
				}

			}
			for (int k = 0; k < 255; k++)
			{
				this->chart1->Series["Red"]->Points->AddXY(k.ToString(), r[k]);
			}
		}
		else
		{
			this->chart1->Series["Red"]->Points->Clear();
		}
	}
		   //畫Green直方圖
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked == true)
		{
			this->pictureBox1->Image = scr;
			this->chart1->Series["Green"]->Points->Clear();
			int g[256] = { 0 };		//設gray為1*256的矩陣，並定值為0
			for (int i = 0; i < scr->Width; i++) {
				for (int j = 0; j < scr->Height; j++)
				{
					g[scr->GetPixel(i, j).G]++;
				}

			}
			for (int k = 0; k < 255; k++)
			{
				this->chart1->Series["Green"]->Points->AddXY(k.ToString(), g[k]);
			}
		}
		else
		{
			this->chart1->Series["Green"]->Points->Clear();
		}
	}
		   //畫Blue直方圖
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox3->Checked == true)
		{
			this->pictureBox1->Image = scr;
			this->chart1->Series["Blue"]->Points->Clear();
			int b[256] = { 0 };		//設gray為1*256的矩陣，並定值為0
			for (int i = 0; i < scr->Width; i++) {
				for (int j = 0; j < scr->Height; j++)
				{
					b[scr->GetPixel(i, j).B]++;
				}

			}
			for (int k = 0; k < 255; k++)
			{
				this->chart1->Series["Blue"]->Points->AddXY(k.ToString(), b[k]);
			}
		}
		else
		{
			this->chart1->Series["Blue"]->Points->Clear();
		}
	}

	};
}
