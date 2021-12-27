#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Threshold ���K�n
	/// </summary>
	public ref class Threshold : public System::Windows::Forms::Form
	{
	public:
		Threshold(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~Threshold()
		{
			if (components)
			{
				delete components;
			}
		}
	public:Bitmap^ scr1, ^ scr_threshold_gray;
	public: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Threshold::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(271, 276);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(345, 294);
			this->trackBar1->Maximum = 255;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(516, 45);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Threshold::trackBar1_Scroll);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(289, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::Gray;
			series1->Legend = L"Legend1";
			series1->Name = L"Gray";
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->Name = L"Threshold";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(710, 276);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(12, 348);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(271, 276);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(289, 348);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->Color = System::Drawing::Color::Blue;
			series3->Legend = L"Legend1";
			series3->Name = L"Gray";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(710, 276);
			this->chart2->TabIndex = 4;
			this->chart2->Text = L"chart2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(923, 293);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 32);
			this->button1->TabIndex = 5;
			this->button1->Text = L"O \' t s u";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Threshold::button1_Click_1);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"�s�ө���", 13));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(862, 294);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(55, 28);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Threshold::numericUpDown1_ValueChanged);
			// 
			// Threshold
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1018, 642);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->pictureBox1);
			//this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Threshold";
			this->Text = L"Threshold";
			this->Load += gcnew System::EventHandler(this, &Threshold::Threshold_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Threshold_Load(System::Object^ sender, System::EventArgs^ e) {
		//��ܦǶ���
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
		scr_threshold_gray = Gray;
		//��Ϫ����
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

	}

		   //�]�wthreshold
		   //��trackbar����
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		int t = trackBar1->Value;
		this->numericUpDown1->Text = String::Concat(t);
		this->chart1->Series["Threshold"]->Points->Clear();
		this->chart1->Series["Threshold"]->Points->AddXY(t, 2500);
		Bitmap^ threshold = gcnew Bitmap(scr_threshold_gray->Width, scr_threshold_gray->Height);
		for (int i = 0; i < scr_threshold_gray->Width; i++) {
			for (int j = 0; j < scr_threshold_gray->Height; j++) {
				if (scr_threshold_gray->GetPixel(i, j).R < t) {
					threshold->SetPixel(i, j, Color::FromArgb(0, 0, 0));
				}
				else {
					threshold->SetPixel(i, j, Color::FromArgb(255, 255, 255));
				}
			}
		}
		pictureBox2->Image = threshold;
		//�G�Ȥƫ᪺�����
		this->chart2->Series["Gray"]->Points->Clear();
		unsigned int Threshold[256] = { 0 };
		for (int i = 0; i < threshold->Width; i++) {
			for (int j = 0; j < threshold->Height; j++)
			{
				Threshold[threshold->GetPixel(i, j).R]++;
			}
		}
		for (int k = 0; k < 256; k++)
		{
			this->chart2->Series["Gray"]->Points->AddXY(k, Threshold[k]);
		}
	}
		   //��numericUpDown����
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(numericUpDown1->Text)) {
			MessageBox::Show("�п�J0~255�����");
		}
		else {
			int t = System::Convert::ToInt32(numericUpDown1->Value);
			this->trackBar1->Value = t;
			this->chart1->Series["Threshold"]->Points->Clear();
			this->chart1->Series["Threshold"]->Points->AddXY(t, 2500);
			Bitmap^ threshold = gcnew Bitmap(scr_threshold_gray->Width, scr_threshold_gray->Height);
			for (int i = 0; i < scr_threshold_gray->Width; i++) {
				for (int j = 0; j < scr_threshold_gray->Height; j++) {
					if (scr_threshold_gray->GetPixel(i, j).R < t) {
						threshold->SetPixel(i, j, Color::FromArgb(0, 0, 0));
					}
					else {
						threshold->SetPixel(i, j, Color::FromArgb(255, 255, 255));
					}
				}
			}
			pictureBox2->Image = threshold;
			//�G�Ȥƫ᪺�����
			this->chart2->Series["Gray"]->Points->Clear();
			unsigned int Threshold[256] = { 0 };
			for (int i = 0; i < threshold->Width; i++) {
				for (int j = 0; j < threshold->Height; j++)
				{
					Threshold[threshold->GetPixel(i, j).R]++;
				}
			}
			for (int k = 0; k < 256; k++)
			{
				this->chart2->Series["Gray"]->Points->AddXY(k, Threshold[k]);
			}
		}
	}

		   //O'tsu�ȳ]�w
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		unsigned int gray[256] = { 0 };
		for (int i = 0; i < scr_threshold_gray->Width; i++) {
			for (int j = 0; j < scr_threshold_gray->Height; j++) {
				gray[scr_threshold_gray->GetPixel(i, j).R]++;
			}
		}

		int T, i;				//�H T �Nhistogram�������class�Ai�p��� �A�p�󵥩�T�P�j��T
		float W1, W2;					//�������class�U�ۥe���v��
		float total_1, total_2;			//���class�U�۩ҧt��pixel�`��
		float value_1, value_2;			//���class�U�۩Һ⪺pixel�ȭ��W��ƶq
		float mean_1, mean_2;			//���class�U�۪�������
		float variance_1, variance_2;	//��class�U�۪��ܲ��q
		float minVariance, min_T;
		for (T = 0; T < 256; T++) {		//�֭��ܤ�
			total_1 = 0, total_2 = 0;
			for (i = 0; i <= T; i++) {
				total_1 += gray[i];
			}
			total_2 = (scr_threshold_gray->Width * scr_threshold_gray->Height) - total_1;

			W1 = (total_1) / ((scr_threshold_gray->Width) * (scr_threshold_gray->Height));
			W2 = (total_2) / ((scr_threshold_gray->Width) * (scr_threshold_gray->Height));

			value_1 = 0, value_2 = 0;
			for (i = 0; i <= T; i++) {
				value_1 += i * gray[i];
			}
			for (i = 255; i > T; i--) {
				value_2 += i * gray[i];
			}

			if (total_1 == 0) {
				mean_1 = 0;
			}
			else {
				mean_1 = value_1 / total_1;
			}

			if (total_2 == 0) {
				mean_2 = 0;
			}
			else {
				mean_2 = value_2 / total_2;
			}

			variance_1 = 0, variance_2 = 0;

			for (i = 0; i <= T; i++) {
				if (total_1 == 0) {
					break;
				}
				else {
					variance_1 += (i - mean_1) * (i - mean_1) * gray[i] / (total_1);
				}
			}

			for (i = 255; i > T; i--) {
				if (total_2 == 0) {
					break;
				}
				else {
					variance_2 += (i - mean_2) * (i - mean_2) * gray[i] / (total_2);
				}
			}
			float result = W1 * variance_1 + W2 * variance_2;

			if (T == 0) {
				minVariance = result;
				min_T = T;
			}

			if (result <= minVariance) {
				minVariance = result;
				min_T = T;
			}
		}
		Bitmap^ Otsu = gcnew Bitmap(scr_threshold_gray->Width, scr_threshold_gray->Height);
		for (int i = 0; i < (scr_threshold_gray->Width); i++) {
			for (int j = 0; j < (scr_threshold_gray->Height); j++) {
				int value = scr_threshold_gray->GetPixel(i, j).R;
				if ((value < min_T)) {
					Otsu->SetPixel(i, j, Color::FromArgb(0, 0, 0));
				}
				else {
					Otsu->SetPixel(i, j, Color::FromArgb(255, 255, 255));
				}
			}
		}
		pictureBox2->Image = Otsu;
		this->numericUpDown1->Text = min_T.ToString();
		this->trackBar1->Value = min_T;
		this->chart2->Series["Gray"]->Points->Clear();
		unsigned int Threshold[256] = { 0 };
		for (int i = 0; i < Otsu->Width; i++) {
			for (int j = 0; j < Otsu->Height; j++)
			{
				Threshold[Otsu->GetPixel(i, j).R]++;
			}
		}
		for (int k = 0; k < 256; k++)
		{
			this->chart2->Series["Gray"]->Points->AddXY(k, Threshold[k]);
		}
	}




	};
}
