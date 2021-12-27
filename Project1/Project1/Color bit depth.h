#pragma once
#include <math.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// BitDepth 的摘要
	/// </summary>
	public ref class BitDepth : public System::Windows::Forms::Form
	{
	public:
		BitDepth(void)
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
		~BitDepth()
		{
			if (components)
			{
				delete components;
			}
		}

	public:Bitmap^ scr1; Bitmap^ gray;

	public: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;





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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(256, 256);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(365, 15);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(256, 256);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(715, 15);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(256, 256);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(1064, 15);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(256, 256);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label1->Location = System::Drawing::Point(133, 339);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"8 * 3  bits";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label2->Location = System::Drawing::Point(496, 339);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"4 * 3  bits";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label3->Location = System::Drawing::Point(843, 339);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"2 * 3  bits";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label4->Location = System::Drawing::Point(1200, 339);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"1 * 3  bits";
			// 
			// BitDepth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1423, 387);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"BitDepth";
			this->Text = L"BitDepth";
			this->Load += gcnew System::EventHandler(this, &BitDepth::BitDepth_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BitDepth_Load(System::Object^ sender, System::EventArgs^ e) {
		//1*3位元
		Bitmap^ rgb_bit_1 = gcnew Bitmap(scr1->Width, scr1->Height);
		for (int i = 0; i < scr1->Width; i++) {
			for (int j = 0; j < scr1->Height; j++) {
				int R = scr1->GetPixel(i, j).R;
				int G = scr1->GetPixel(i, j).G;
				int B = scr1->GetPixel(i, j).B;
				float r, g, b;
				r = R / 255.0;
				g = G / 255.0;
				b = B / 255.0;
				rgb_bit_1->SetPixel(i, j, Color::FromArgb(roundf(r) * 255, roundf(g) * 255, roundf(b) * 255));
			}
		}
		pictureBox4->Image = rgb_bit_1;
		//2*3位元
		Bitmap^ rgb_bit_2 = gcnew Bitmap(scr1->Width, scr1->Height);
		for (int i = 0; i < scr1->Width; i++) {
			for (int j = 0; j < scr1->Height; j++) {
				int R = scr1->GetPixel(i, j).R;
				int G = scr1->GetPixel(i, j).G;
				int B = scr1->GetPixel(i, j).B;
				float r, g, b;
				r = roundf(R / 85.0);
				g = roundf(G / 85.0);
				b = roundf(B / 85.0);
				rgb_bit_2->SetPixel(i, j, Color::FromArgb(r * 85, g * 85, b * 85));
			}
		}
		pictureBox3->Image = rgb_bit_2;
		//4*3位元
		Bitmap^ rgb_bit_4 = gcnew Bitmap(scr1->Width, scr1->Height);
		for (int i = 0; i < scr1->Width; i++) {
			for (int j = 0; j < scr1->Height; j++) {
				int R = scr1->GetPixel(i, j).R;
				int G = scr1->GetPixel(i, j).G;
				int B = scr1->GetPixel(i, j).B;
				float r, g, b;
				r = roundf(R / 17.0);
				g = roundf(G / 17.0);
				b = roundf(B / 17.0);
				rgb_bit_4->SetPixel(i, j, Color::FromArgb(r * 17, g * 17, b * 17));
			}
		}
		pictureBox2->Image = rgb_bit_4;
		
	}
	};
}
