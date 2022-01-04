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
	using namespace System::IO;

	/// <summary>
	/// BitPlaneSlicing 的摘要
	/// </summary>
	public ref class BitPlane : public System::Windows::Forms::Form
	{
	public:
		BitPlane(void)
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
		~BitPlane()
		{
			if (components)
			{
				delete components;
			}
		}

	public:Bitmap^ scr1; Bitmap^ Plane_7; Bitmap^ Plane_6; Bitmap^ Plane_5; Bitmap^ Plane_4; Bitmap^ Plane_3; Bitmap^ Plane_2; Bitmap^ Plane_1; Bitmap^ Plane_0; Bitmap^ result; Bitmap^ Watermark;

	public: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	public: System::Windows::Forms::PictureBox^ pictureBox2;
	private:
	public: System::Windows::Forms::PictureBox^ pictureBox3;
	public: System::Windows::Forms::PictureBox^ pictureBox4;
	public: System::Windows::Forms::PictureBox^ pictureBox5;
	public: System::Windows::Forms::PictureBox^ pictureBox6;
	public: System::Windows::Forms::PictureBox^ pictureBox7;
	public: System::Windows::Forms::PictureBox^ pictureBox8;
	public: System::Windows::Forms::PictureBox^ pictureBox9;
	public: System::Windows::Forms::PictureBox^ pictureBox10;
	public: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container^ components;
		/// PCX data
		ref struct PCXHEAD {
			String^ Manufacturer;
			short int Version;
			String^ Encoding;
			short int BitsPerPixel;
			short int Xmin;
			short int Ymin;
			short int Xmax;
			short int Ymax;
			short int Hdpi;
			short int Vdpi;
			Bitmap^ Colormap;
			unsigned char Reserved;
			unsigned char Nplanes;
			short int BytesPerLine;
			String^ PaletteInfo;
			short int HscreenSize;
			short int VscreenSize;
			short int width;
			short int height;
		};
		ref struct PCXPALETTE {
			Bitmap^ palette;
			Bitmap^ draw_Colormap;
		};
		// BMP file data
		ref struct BMPHEAD {
			String^ Head;
			long int FileSize;
			long int ImageSize;
			long int StartingAddress;
			String^ DIB;
			long int ColorPlane;
			long int ColorsUsed;
			long int ColorsImportant;
			long int BitsPerPixel;
			long int CompressionMethod;
			long int Hdpi;
			long int Vdpi;
			Bitmap^ Colormap;
			unsigned char Reserved;
			String^ PaletteInfo;
			long int width;
			long int height;
		};
		ref struct BMPPALETTE {
			Bitmap^ palette2;
			Bitmap^ Colormap3;
		};

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
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(60, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 188);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(1100, 260);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(200, 188);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(845, 260);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(200, 188);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(592, 260);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(200, 188);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(343, 260);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(200, 188);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(1100, 15);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(200, 188);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(845, 15);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(200, 188);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(592, 15);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(200, 188);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(343, 15);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(200, 188);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(626, 502);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(200, 188);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(343, 502);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(200, 188);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(128, 206);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Source";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(1156, 452);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 25);
			this->label2->TabIndex = 12;
			this->label2->Text = L"2 ^ 7 Plane";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(892, 451);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 25);
			this->label3->TabIndex = 13;
			this->label3->Text = L"2 ^ 6 Plane";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(638, 451);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 25);
			this->label4->TabIndex = 14;
			this->label4->Text = L"2 ^ 5 Plane";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(389, 451);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 25);
			this->label5->TabIndex = 15;
			this->label5->Text = L"2 ^ 4 Plane";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(1156, 207);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 25);
			this->label6->TabIndex = 16;
			this->label6->Text = L"2 ^ 3Plane";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(892, 207);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"2 ^ 2 Plane";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(638, 206);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 25);
			this->label8->TabIndex = 18;
			this->label8->Text = L"2 ^ 1 Plane";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(389, 207);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 25);
			this->label9->TabIndex = 19;
			this->label9->Text = L"2 ^ 0 Plane";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(682, 694);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 25);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Result";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label11->Location = System::Drawing::Point(380, 694);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 25);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Watermark";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(60, 607);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 38);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Add watermark";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BitPlane::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"7", L"6", L"5", L"4", L"3", L"2", L"1", L"0" });
			this->comboBox1->Location = System::Drawing::Point(60, 561);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(199, 33);
			this->comboBox1->TabIndex = 23;
			this->comboBox1->Text = L"Choose layer";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(60, 652);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 38);
			this->button2->TabIndex = 24;
			this->button2->Text = L"remove watermark";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BitPlane::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(60, 502);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 38);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Choose watermark";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &BitPlane::button3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point(962, 572);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(83, 27);
			this->label13->TabIndex = 27;
			this->label13->Text = L"label13";
			this->label13->Visible = false;
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 711);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1413, 31);
			this->statusStrip1->TabIndex = 28;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(67, 25);
			this->toolStripStatusLabel1->Text = L"SNR : ";
			// 
			// BitPlane
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1413, 742);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"BitPlane";
			this->Text = L"BitPlane";
			this->Load += gcnew System::EventHandler(this, &BitPlane::BitPlaneSlicing_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//PCX data
	public:void LOADPCXDATA(String^ path, PCXHEAD% pcxdata, PCXPALETTE% Palette)
	{
		FileStream^ fs = gcnew  FileStream(path, FileMode::Open);
		BinaryReader^ br = gcnew  BinaryReader(fs);
		int row = 0, column = 0, color_number = 0;
		int red, green, blue;
		short int RGB[256][3];

		// header file 
		for (br->BaseStream->Position = 0; br->BaseStream->Position < 74;) {
			int c1, c2;

			switch (br->BaseStream->Position)
			{
			case 0:
				if (br->ReadByte() == 10) {
					pcxdata.Manufacturer = "Zshoft.pcx";
				}
				else
					pcxdata.Manufacturer = "Erro!!!";
				break;

			case 1:
				pcxdata.Version = br->ReadByte();
				break;

			case 2:
				if (br->ReadByte() == 1) {
					pcxdata.Encoding = "RLE";
				}
				break;

			case 3:
				pcxdata.BitsPerPixel = br->ReadByte();
				break;

			case 4:
				c1 = br->ReadByte();
				c2 = br->ReadByte();
				pcxdata.Xmin = c1 + c2 * 256;

				c1 = br->ReadByte();
				c2 = br->ReadByte();
				pcxdata.Ymin = c1 + c2 * 256;

				c1 = br->ReadByte();
				c2 = br->ReadByte();
				pcxdata.Xmax = c1 + c2 * 256;

				c1 = br->ReadByte();
				c2 = br->ReadByte();
				pcxdata.Ymax = c1 + c2 * 256;
				break;

			case 12: {
				c1 = br->ReadByte();
				c2 = br->ReadByte();
				pcxdata.Hdpi = c1 + c2 * 256;
				break;
			}
			case 14: {
				c1 = br->ReadByte();
				c2 = br->ReadByte();
				pcxdata.Vdpi = c1 + c2 * 256;
				break;
			}

			case 16: {//檔頭預留了48bytes,16種顏色//
				pcxdata.Colormap = gcnew Bitmap(160, 160);
				Color CM_color;
				Graphics^ CM_graphics = Graphics::FromImage(pcxdata.Colormap);	//不同層
				for (row = 0; row < 4; row++) {
					for (column = 0; column < 4; column++) {
						red = br->ReadByte();
						green = br->ReadByte();
						blue = br->ReadByte();
						CM_color = Color::FromArgb(red, green, blue);	//不同層
						//brushes的顏色已被定義，所以用solidbrush去設定得到的顏色//
						SolidBrush^ brush = gcnew SolidBrush(CM_color);//同層
						Rectangle rectangle((column * 4), (row * 4), 4, 4);//初始x,y座標，長度和寬度數值//
						CM_graphics->FillRectangle(brush, rectangle);
					}
				}
			}

			case 64: {
				pcxdata.Reserved = br->ReadByte();
				break;
			}

			case 65: {
				pcxdata.Nplanes = br->ReadByte();
				break;
			}

			case 66: {
				c1 = br->ReadByte();
				c2 = br->ReadByte();
				pcxdata.BytesPerLine = c1 + c2 * 256;
				break;
			}
			case 68: {
				c1 = br->ReadByte();
				c2 = br->ReadByte();
				if ((c1 + c2 * 256) == 1)
					pcxdata.PaletteInfo = "Color.BW";
				else
					pcxdata.PaletteInfo = "GrayScale";

				break;

			}
			case 70: {
				c1 = br->ReadByte();
				c2 = br->ReadByte();
				pcxdata.HscreenSize = c1 + c2 * 256;

				break;
			}
			case 72: {
				c1 = br->ReadByte();
				c2 = br->ReadByte();
				pcxdata.VscreenSize = c1 + c2 * 256;

				break;
			}
			}
			pcxdata.width = pcxdata.Xmax - pcxdata.Xmin + 1;
			pcxdata.height = pcxdata.Ymax - pcxdata.Ymin + 1;
		}

		//顯示標頭檔以及調色盤

		// End of file

		// read VGA palette

		Color get3;
		Palette.draw_Colormap = gcnew Bitmap(256, 256);
		Graphics^ CM2_graphics = Graphics::FromImage(Palette.draw_Colormap);
		SolidBrush^ brush;
		br->BaseStream->Position = ((br->BaseStream->Length) - 768);

		for (row = 0; row < 16; row++) {
			for (column = 0; column < 16; column++) {
				RGB[color_number][0] = br->ReadByte();
				RGB[color_number][1] = br->ReadByte();
				RGB[color_number][2] = br->ReadByte();
				get3 = Color::FromArgb(RGB[color_number][0], RGB[color_number][1], RGB[color_number][2]);
				brush = gcnew SolidBrush(get3);
				Rectangle rectangle((row * 16), (column * 16), 16, 16);
				CM2_graphics->FillRectangle(brush, rectangle);
				color_number++;
			}
		}


		//128之後是圖像，上色
		Palette.palette = gcnew Bitmap(pcxdata.width, pcxdata.height);
		Graphics^ Palette_graphics = Graphics::FromImage(Palette.palette);
		int check;
		int x = 0, y = 0;
		br->BaseStream->Position = 128;
		while (y < pcxdata.height) {
			if (((check = br->ReadByte()) & 0xc0) == 0xC0) {
				int duplicate_count;
				duplicate_count = (check & 0x3F);
				check = br->ReadByte();
				Color newColor = Color::FromArgb(RGB[check][0], RGB[check][1], RGB[check][2]);
				for (; duplicate_count > 0; duplicate_count--) {
					Palette.palette->SetPixel(x, y, newColor);
					x++;
					if (x == pcxdata.width) {
						x = 0;
						y++;
					}
					if (y == pcxdata.height) {
						break;
					}
				}
				if (y == pcxdata.height) {
					break;
				}
			}
			else {
				Color newColor = Color::FromArgb(RGB[check][0], RGB[check][1], RGB[check][2]);
				Palette.palette->SetPixel(x, y, newColor);
				++x;
				if (x == pcxdata.width) {
					x = 0;
					++y;
				}
				if (y == pcxdata.height) {
					break;
				}
			}
		}
		fs->Close();
	}

	// SNR
	public:double SNR(Bitmap^ scr1, Bitmap^ result) {

		long long  R = 0, G = 0, B = 0;
		long long resR = 0, resG = 0, resB = 0;
		double square = 0.0;
		double sigma = 0.0;
		double SNR;
		for (int i = 0; i < scr1->Width; i++) {
			for (int j = 0; j < scr1->Height; j++) {
				R += scr1->GetPixel(i, j).R;
				G += scr1->GetPixel(i, j).G;
				B += scr1->GetPixel(i, j).B;
			}
		}
		for (int i = 0; i < result->Width; i++) {
			for (int j = 0; j < result->Height; j++) {
				resR += result->GetPixel(i, j).R;
				resG += result->GetPixel(i, j).G;
				resB += result->GetPixel(i, j).B;
			}
		}
		// 信噪比公式
		square += pow(R, 2) + pow(G, 2) + pow(B, 2);
		sigma += pow(resR - R, 2) + pow(resG - G, 2) + pow(resB - B, 2);

		SNR = 10 * log10(square / sigma);			
		this->label13->Text = SNR.ToString("0.00") + " DB";
		this->toolStripStatusLabel1->Text = "SNR = " + SNR.ToString("0.00") + " DB";
		return SNR;
	}
	// slicing
	private: System::Void BitPlaneSlicing_Load(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ plane_7 = gcnew Bitmap(scr1->Width, scr1->Height);
		Bitmap^ plane_6 = gcnew Bitmap(scr1->Width, scr1->Height);
		Bitmap^ plane_5 = gcnew Bitmap(scr1->Width, scr1->Height);
		Bitmap^ plane_4 = gcnew Bitmap(scr1->Width, scr1->Height);
		Bitmap^ plane_3 = gcnew Bitmap(scr1->Width, scr1->Height);
		Bitmap^ plane_2 = gcnew Bitmap(scr1->Width, scr1->Height);
		Bitmap^ plane_1 = gcnew Bitmap(scr1->Width, scr1->Height);
		Bitmap^ plane_0 = gcnew Bitmap(scr1->Width, scr1->Height);
		Bitmap^ Result = gcnew Bitmap(scr1->Width, scr1->Height);
		int Binary[8] = { 0 };
		int b;
		for (int i = 0; i < scr1->Width; i++) {
			for (int j = 0; j < scr1->Height; j++) {
				int pixel = scr1->GetPixel(i, j).R;
				for (int k = 7; k >= 0; k--) {				//這裡計算各個pixel的二進位值
					int square = pow(2, k);
					b = pixel / square;
					pixel = pixel % square;
					Binary[k] = b;
				}
				if (Binary[7] == 1) { plane_7->SetPixel(i, j, Color::FromArgb(255, 255, 255)); }
				else if (Binary[7] == 0) { plane_7->SetPixel(i, j, Color::FromArgb(0, 0, 0)); }

				if (Binary[6] == 1) { plane_6->SetPixel(i, j, Color::FromArgb(255, 255, 255)); }
				else if (Binary[6] == 0) { plane_6->SetPixel(i, j, Color::FromArgb(0, 0, 0)); }

				if (Binary[5] == 1) { plane_5->SetPixel(i, j, Color::FromArgb(255, 255, 255)); }
				else if (Binary[5] == 0) { plane_5->SetPixel(i, j, Color::FromArgb(0, 0, 0)); }

				if (Binary[4] == 1) { plane_4->SetPixel(i, j, Color::FromArgb(255, 255, 255)); }
				else if (Binary[4] == 0) { plane_4->SetPixel(i, j, Color::FromArgb(0, 0, 0)); }

				if (Binary[3] == 1) { plane_3->SetPixel(i, j, Color::FromArgb(255, 255, 255)); }
				else if (Binary[3] == 0) { plane_3->SetPixel(i, j, Color::FromArgb(0, 0, 0)); }

				if (Binary[2] == 1) { plane_2->SetPixel(i, j, Color::FromArgb(255, 255, 255)); }
				else if (Binary[2] == 0) { plane_2->SetPixel(i, j, Color::FromArgb(0, 0, 0)); }

				if (Binary[1] == 1) { plane_1->SetPixel(i, j, Color::FromArgb(255, 255, 255)); }
				else if (Binary[1] == 0) { plane_1->SetPixel(i, j, Color::FromArgb(0, 0, 0)); }

				if (Binary[0] == 1) { plane_0->SetPixel(i, j, Color::FromArgb(255, 255, 255)); }
				else if (Binary[0] == 0) { plane_0->SetPixel(i, j, Color::FromArgb(0, 0, 0)); }

				int sum = 0;
				for (int p = 7; p >= 0; p--) {
					int square = pow(2, p);
					sum = sum + square * Binary[p];
				}
				Result->SetPixel(i, j, Color::FromArgb(sum, sum, sum));
			}
		}
		Plane_7 = plane_7;
		Plane_6 = plane_6;
		Plane_5 = plane_5;
		Plane_4 = plane_4;
		Plane_3 = plane_3;
		Plane_2 = plane_2;
		Plane_1 = plane_1;
		Plane_0 = plane_0;
		result = Result;

		pictureBox2->Image = Plane_7;
		pictureBox3->Image = Plane_6;
		pictureBox4->Image = Plane_5;
		pictureBox5->Image = Plane_4;
		pictureBox6->Image = Plane_3;
		pictureBox7->Image = Plane_2;
		pictureBox8->Image = Plane_1;
		pictureBox9->Image = Plane_0;
		pictureBox10->Image = result;
		SNR(scr1, result);
	}
	//匯入浮水印
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0)
		{
			char a[2] = ".";
			array<Char>^ dot = (gcnew String(a))->ToCharArray();
			cli::array<String^>^ result = openFileDialog1->FileName->Split(dot, StringSplitOptions::RemoveEmptyEntries);
			if (result[1] == "pcx") {
				PCXHEAD pcx_head;
				PCXPALETTE pcx_palette;
				LOADPCXDATA(openFileDialog1->FileName, pcx_head, pcx_palette);
				Watermark = pcx_palette.palette;
			}
			else {
				Watermark = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
				pictureBox11->Image = Watermark;
			}
		}

		Bitmap^ watermark = gcnew Bitmap(Watermark ->Width, Watermark->Height);
		for (int i = 0; i < (Watermark->Width); i++) {
			for (int j = 0; j < (Watermark->Height); j++) {
				Color pixel = Watermark->GetPixel(i, j);
				int r, g, b, gs;
				r = pixel.R;
				g = pixel.G;
				b = pixel.B;
				gs = 0.299 * r + 0.587 * g + 0.114 * b;///R.G.B to gray
				Color paint = Color::FromArgb(gs, gs, gs);
				watermark->SetPixel(i, j, paint);
			}
		}
		Watermark = watermark;  //Watermark = 開啟圖檔的灰階
		pictureBox11->Image = Watermark;
	}

	//	watermark
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int square[8] = { 0 };
		for (int s = 7; s >= 0; s--) {
			square[s] = pow(2, s);
		}
		if (this->comboBox1->Text == "7")
		{
			pictureBox3->Image = Plane_6;
			pictureBox4->Image = Plane_5;
			pictureBox5->Image = Plane_4;
			pictureBox6->Image = Plane_3;
			pictureBox7->Image = Plane_2;
			pictureBox8->Image = Plane_1;
			pictureBox9->Image = Plane_0;
			pictureBox2->Image = Watermark;
			Bitmap^ Result = gcnew Bitmap(scr1->Width, scr1->Height);
			for (int i = 0; i < scr1->Width; i++) {
				for (int j = 0; j < scr1->Height; j++) {
					int bit_7 = square[7] * (Watermark->GetPixel(i, j).R / 255);
					int bit_6 = square[6] * (Plane_6->GetPixel(i, j).R / 255);
					int bit_5 = square[5] * (Plane_5->GetPixel(i, j).R / 255);
					int bit_4 = square[4] * (Plane_4->GetPixel(i, j).R / 255);
					int bit_3 = square[3] * (Plane_3->GetPixel(i, j).R / 255);
					int bit_2 = square[2] * (Plane_2->GetPixel(i, j).R / 255);
					int bit_1 = square[1] * (Plane_1->GetPixel(i, j).R / 255);
					int bit_0 = square[0] * (Plane_0->GetPixel(i, j).R / 255);
					int pixel = bit_7 + bit_6 + bit_5 + bit_4 + bit_3 + bit_2 + bit_1 + bit_0;
					Result->SetPixel(i, j, Color::FromArgb(pixel, pixel, pixel));
				}
			}
			pictureBox10->Image = Result;
			SNR(scr1, Result);
		}
		else if (this->comboBox1->Text == "6")
		{
			pictureBox2->Image = Plane_7;
			pictureBox4->Image = Plane_5;
			pictureBox5->Image = Plane_4;
			pictureBox6->Image = Plane_3;
			pictureBox7->Image = Plane_2;
			pictureBox8->Image = Plane_1;
			pictureBox9->Image = Plane_0;
			pictureBox3->Image = Watermark;
			Bitmap^ Result = gcnew Bitmap(scr1->Width, scr1->Height);
			for (int i = 0; i < scr1->Width; i++) {
				for (int j = 0; j < scr1->Height; j++) {
					int bit_7 = square[7] * (Plane_7->GetPixel(i, j).R / 255);
					int bit_6 = square[6] * (Watermark->GetPixel(i, j).R / 255);
					int bit_5 = square[5] * (Plane_5->GetPixel(i, j).R / 255);
					int bit_4 = square[4] * (Plane_4->GetPixel(i, j).R / 255);
					int bit_3 = square[3] * (Plane_3->GetPixel(i, j).R / 255);
					int bit_2 = square[2] * (Plane_2->GetPixel(i, j).R / 255);
					int bit_1 = square[1] * (Plane_1->GetPixel(i, j).R / 255);
					int bit_0 = square[0] * (Plane_0->GetPixel(i, j).R / 255);
					int pixel = bit_7 + bit_6 + bit_5 + bit_4 + bit_3 + bit_2 + bit_1 + bit_0;
					Result->SetPixel(i, j, Color::FromArgb(pixel, pixel, pixel));
				}
			}
			pictureBox10->Image = Result;
			SNR(scr1, Result);
		}
		else if (this->comboBox1->Text == "5")
		{
			pictureBox2->Image = Plane_7;
			pictureBox3->Image = Plane_6;
			pictureBox5->Image = Plane_4;
			pictureBox6->Image = Plane_3;
			pictureBox7->Image = Plane_2;
			pictureBox8->Image = Plane_1;
			pictureBox9->Image = Plane_0;
			pictureBox4->Image = Watermark;
			Bitmap^ Result = gcnew Bitmap(scr1->Width, scr1->Height);
			for (int i = 0; i < scr1->Width; i++) {
				for (int j = 0; j < scr1->Height; j++) {
					int bit_7 = square[7] * (Plane_7->GetPixel(i, j).R / 255);
					int bit_6 = square[6] * (Plane_6->GetPixel(i, j).R / 255);
					int bit_5 = square[5] * (Watermark->GetPixel(i, j).R / 255);
					int bit_4 = square[4] * (Plane_4->GetPixel(i, j).R / 255);
					int bit_3 = square[3] * (Plane_3->GetPixel(i, j).R / 255);
					int bit_2 = square[2] * (Plane_2->GetPixel(i, j).R / 255);
					int bit_1 = square[1] * (Plane_1->GetPixel(i, j).R / 255);
					int bit_0 = square[0] * (Plane_0->GetPixel(i, j).R / 255);
					int pixel = bit_7 + bit_6 + bit_5 + bit_4 + bit_3 + bit_2 + bit_1 + bit_0;
					Result->SetPixel(i, j, Color::FromArgb(pixel, pixel, pixel));
				}
			}
			pictureBox10->Image = Result;
			SNR(scr1, Result);
		}
		else if (this->comboBox1->Text == "4")
		{
			pictureBox2->Image = Plane_7;
			pictureBox3->Image = Plane_6;
			pictureBox4->Image = Plane_5;
			pictureBox6->Image = Plane_3;
			pictureBox7->Image = Plane_2;
			pictureBox8->Image = Plane_1;
			pictureBox9->Image = Plane_0;
			pictureBox5->Image = Watermark;
			Bitmap^ Result = gcnew Bitmap(scr1->Width, scr1->Height);
			for (int i = 0; i < scr1->Width; i++) {
				for (int j = 0; j < scr1->Height; j++) {
					int bit_7 = square[7] * (Plane_7->GetPixel(i, j).R / 255);
					int bit_6 = square[6] * (Plane_6->GetPixel(i, j).R / 255);
					int bit_5 = square[5] * (Plane_5->GetPixel(i, j).R / 255);
					int bit_4 = square[4] * (Watermark->GetPixel(i, j).R / 255);
					int bit_3 = square[3] * (Plane_3->GetPixel(i, j).R / 255);
					int bit_2 = square[2] * (Plane_2->GetPixel(i, j).R / 255);
					int bit_1 = square[1] * (Plane_1->GetPixel(i, j).R / 255);
					int bit_0 = square[0] * (Plane_0->GetPixel(i, j).R / 255);
					int pixel = bit_7 + bit_6 + bit_5 + bit_4 + bit_3 + bit_2 + bit_1 + bit_0;
					Result->SetPixel(i, j, Color::FromArgb(pixel, pixel, pixel));
				}
			}
			pictureBox10->Image = Result;
			SNR(scr1, Result);
		}
		else if (this->comboBox1->Text == "3")
		{
			pictureBox2->Image = Plane_7;
			pictureBox3->Image = Plane_6;
			pictureBox4->Image = Plane_5;
			pictureBox5->Image = Plane_4;
			pictureBox7->Image = Plane_2;
			pictureBox8->Image = Plane_1;
			pictureBox9->Image = Plane_0;
			pictureBox6->Image = Watermark;
			Bitmap^ Result = gcnew Bitmap(scr1->Width, scr1->Height);
			for (int i = 0; i < scr1->Width; i++) {
				for (int j = 0; j < scr1->Height; j++) {
					int bit_7 = square[7] * (Plane_7->GetPixel(i, j).R / 255);
					int bit_6 = square[6] * (Plane_6->GetPixel(i, j).R / 255);
					int bit_5 = square[5] * (Plane_5->GetPixel(i, j).R / 255);
					int bit_4 = square[4] * (Plane_4->GetPixel(i, j).R / 255);
					int bit_3 = square[3] * (Watermark->GetPixel(i, j).R / 255);
					int bit_2 = square[2] * (Plane_2->GetPixel(i, j).R / 255);
					int bit_1 = square[1] * (Plane_1->GetPixel(i, j).R / 255);
					int bit_0 = square[0] * (Plane_0->GetPixel(i, j).R / 255);
					int pixel = bit_7 + bit_6 + bit_5 + bit_4 + bit_3 + bit_2 + bit_1 + bit_0;
					Result->SetPixel(i, j, Color::FromArgb(pixel, pixel, pixel));
				}
			}
			pictureBox10->Image = Result;
			SNR(scr1, Result);
		}
		else if (this->comboBox1->Text == "2")
		{
			pictureBox2->Image = Plane_7;
			pictureBox3->Image = Plane_6;
			pictureBox4->Image = Plane_5;
			pictureBox5->Image = Plane_4;
			pictureBox6->Image = Plane_3;
			pictureBox8->Image = Plane_1;
			pictureBox9->Image = Plane_0;
			pictureBox7->Image = Watermark;
			Bitmap^ Result = gcnew Bitmap(scr1->Width, scr1->Height);
			for (int i = 0; i < scr1->Width; i++) {
				for (int j = 0; j < scr1->Height; j++) {
					int bit_7 = square[7] * (Plane_7->GetPixel(i, j).R / 255);
					int bit_6 = square[6] * (Plane_6->GetPixel(i, j).R / 255);
					int bit_5 = square[5] * (Plane_5->GetPixel(i, j).R / 255);
					int bit_4 = square[4] * (Plane_4->GetPixel(i, j).R / 255);
					int bit_3 = square[3] * (Plane_3->GetPixel(i, j).R / 255);
					int bit_2 = square[2] * (Watermark->GetPixel(i, j).R / 255);
					int bit_1 = square[1] * (Plane_1->GetPixel(i, j).R / 255);
					int bit_0 = square[0] * (Plane_0->GetPixel(i, j).R / 255);
					int pixel = bit_7 + bit_6 + bit_5 + bit_4 + bit_3 + bit_2 + bit_1 + bit_0;
					Result->SetPixel(i, j, Color::FromArgb(pixel, pixel, pixel));
				}
			}
			pictureBox10->Image = Result;
			SNR(scr1, Result);
		}
		else if (this->comboBox1->Text == "1")
		{
			pictureBox2->Image = Plane_7;
			pictureBox3->Image = Plane_6;
			pictureBox4->Image = Plane_5;
			pictureBox5->Image = Plane_4;
			pictureBox6->Image = Plane_3;
			pictureBox7->Image = Plane_2;
			pictureBox9->Image = Plane_0;
			pictureBox8->Image = Watermark;
			Bitmap^ Result = gcnew Bitmap(scr1->Width, scr1->Height);
			for (int i = 0; i < scr1->Width; i++) {
				for (int j = 0; j < scr1->Height; j++) {
					int bit_7 = square[7] * (Plane_7->GetPixel(i, j).R / 255);
					int bit_6 = square[6] * (Plane_6->GetPixel(i, j).R / 255);
					int bit_5 = square[5] * (Plane_5->GetPixel(i, j).R / 255);
					int bit_4 = square[4] * (Plane_4->GetPixel(i, j).R / 255);
					int bit_3 = square[3] * (Plane_3->GetPixel(i, j).R / 255);
					int bit_2 = square[2] * (Plane_2->GetPixel(i, j).R / 255);
					int bit_1 = square[1] * (Watermark->GetPixel(i, j).R / 255);
					int bit_0 = square[0] * (Plane_0->GetPixel(i, j).R / 255);
					int pixel = bit_7 + bit_6 + bit_5 + bit_4 + bit_3 + bit_2 + bit_1 + bit_0;
					Result->SetPixel(i, j, Color::FromArgb(pixel, pixel, pixel));
				}
			}
			pictureBox10->Image = Result;
			SNR(scr1, Result);
		}
		else if (this->comboBox1->Text == "0")
		{
			pictureBox2->Image = Plane_7;
			pictureBox3->Image = Plane_6;
			pictureBox4->Image = Plane_5;
			pictureBox5->Image = Plane_4;
			pictureBox6->Image = Plane_3;
			pictureBox7->Image = Plane_2;
			pictureBox8->Image = Plane_1;
			pictureBox9->Image = Watermark;
			Bitmap^ Result = gcnew Bitmap(scr1->Width, scr1->Height);
			for (int i = 0; i < scr1->Width; i++) {
				for (int j = 0; j < scr1->Height; j++) {
					int bit_7 = square[7] * (Plane_7->GetPixel(i, j).R / 255);
					int bit_6 = square[6] * (Plane_6->GetPixel(i, j).R / 255);
					int bit_5 = square[5] * (Plane_5->GetPixel(i, j).R / 255);
					int bit_4 = square[4] * (Plane_4->GetPixel(i, j).R / 255);
					int bit_3 = square[3] * (Plane_3->GetPixel(i, j).R / 255);
					int bit_2 = square[2] * (Plane_2->GetPixel(i, j).R / 255);
					int bit_1 = square[1] * (Plane_1->GetPixel(i, j).R / 255);
					int bit_0 = square[0] * (Watermark->GetPixel(i, j).R / 255);
					int pixel = bit_7 + bit_6 + bit_5 + bit_4 + bit_3 + bit_2 + bit_1 + bit_0;
					Result->SetPixel(i, j, Color::FromArgb(pixel, pixel, pixel));
				}
			}
			pictureBox10->Image = Result;
			SNR(scr1, Result);
		}

		
	}
	// remove
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox2->Image = Plane_7;
		pictureBox3->Image = Plane_6;
		pictureBox4->Image = Plane_5;
		pictureBox5->Image = Plane_4;
		pictureBox6->Image = Plane_3;
		pictureBox7->Image = Plane_2;
		pictureBox8->Image = Plane_1;
		pictureBox9->Image = Plane_0;
		pictureBox10->Image = result;
		SNR(scr1, result);
	}


};
}
