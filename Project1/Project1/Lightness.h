#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Lightness 的摘要
	/// </summary>
	public ref class Lightness : public System::Windows::Forms::Form
	{
	public:
		Lightness(void)
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
		~Lightness()
		{
			if (components)
			{
				delete components;
			}
		}

	public: static Bitmap^ lightness_picturebox;
	public: static Bitmap^ Fordisplay;

	public: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(72, 31);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(315, 299);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(28, 398);
			this->trackBar1->Margin = System::Windows::Forms::Padding(4);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Minimum = -100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(393, 56);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Lightness::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 439);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"-100%";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(391, 439);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"100%";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(124, 359);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"挪動或輸入調整亮度";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(193, 436);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(83, 25);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Lightness::numericUpDown1_ValueChanged);
			// 
			// Lightness
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 520);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Lightness";
			this->Text = L"Brightness";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		int value = trackBar1->Value;
		this->numericUpDown1->Text = String::Concat(value);
		Bitmap^ lightness_pic = gcnew Bitmap(lightness_picturebox->Width, lightness_picturebox->Height);
		float r, g, b;
		if (value > 0) {
			for (int i = 0; i < lightness_picturebox->Width; i++) {
				for (int j = 0; j < lightness_picturebox->Height; j++) {
					r = lightness_picturebox->GetPixel(i, j).R * (100 - value) / 100 + 255 * value / 100;
					g = lightness_picturebox->GetPixel(i, j).G * (100 - value) / 100 + 255 * value / 100;
					b = lightness_picturebox->GetPixel(i, j).B * (100 - value) / 100 + 255 * value / 100;
					Color set = Color::FromArgb(r, g, b);
					lightness_pic->SetPixel(i, j, set);
				}
			}
			pictureBox1->Image = lightness_pic;
		}
		else if (value < 0) {
			for (int i = 0; i < lightness_picturebox->Width; i++) {
				for (int j = 0; j < lightness_picturebox->Height; j++) {
					r = lightness_picturebox->GetPixel(i, j).R * (100 + value) / 100 + 0 * -value / 100;
					g = lightness_picturebox->GetPixel(i, j).G * (100 + value) / 100 + 0 * -value / 100;
					b = lightness_picturebox->GetPixel(i, j).B * (100 + value) / 100 + 0 * -value / 100;
					Color set = Color::FromArgb(r, g, b);
					lightness_pic->SetPixel(i, j, set);
				}
			}
			Fordisplay = lightness_pic;
			pictureBox1->Image = lightness_pic;
		}
		else if (value = 0) {
			pictureBox1->Image = lightness_picturebox;
		}
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		
		int value = System::Convert::ToInt32(numericUpDown1->Value);
		trackBar1->Value = value;
		Bitmap^ lightness_pic = gcnew Bitmap(lightness_picturebox->Width, lightness_picturebox->Height);
		float r, g, b;
		if (value > 0) {
			for (int i = 0; i < lightness_picturebox->Width; i++) {
				for (int j = 0; j < lightness_picturebox->Height; j++) {
					r = lightness_picturebox->GetPixel(i, j).R * (100 - value) / 100 + 255 * value / 100;
					g = lightness_picturebox->GetPixel(i, j).G * (100 - value) / 100 + 255 * value / 100;
					b = lightness_picturebox->GetPixel(i, j).B * (100 - value) / 100 + 255 * value / 100;
					Color set = Color::FromArgb(r, g, b);
					lightness_pic->SetPixel(i, j, set);
				}
			}
			pictureBox1->Image = lightness_pic;
			Fordisplay = lightness_pic;
		}
		else if (value < 0) {
			for (int i = 0; i < lightness_picturebox->Width; i++) {
				for (int j = 0; j < lightness_picturebox->Height; j++) {
					r = lightness_picturebox->GetPixel(i, j).R * (100 + value) / 100 + 0 * -value / 100;
					g = lightness_picturebox->GetPixel(i, j).G * (100 + value) / 100 + 0 * -value / 100;
					b = lightness_picturebox->GetPixel(i, j).B * (100 + value) / 100 + 0 * -value / 100;
					Color set = Color::FromArgb(r, g, b);
					lightness_pic->SetPixel(i, j, set);

				}
			}
			pictureBox1->Image = lightness_pic;
			Fordisplay = lightness_pic;
		}
		else if (value = 0) {
			pictureBox1->Image = lightness_picturebox;
		}
		
	}

	};
}
