#pragma once

#include <cmath>
#include "Cut.h"
#include "Overlap.h"
#include "Lightness.h"
#include "Gary code.h"
#include "Bit plane.h"
#include "Transparency.h"
#include "Threshold.h"
#include "Color bit depth.h"
#include "Histogram.h"
#include "Histogram equalization.h"
#include "Histogram specification1.h"
#include "Ball.h"
#include "Contrast1.h"
#include "8Connect.h"
#include "Video.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public: static Bitmap^ source; Bitmap^ Display; Bitmap^ OriginGray; int sigma;//資源
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveFileToolStripMenuItem;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox_origin;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox_colormapORpalette;
	private: System::Windows::Forms::PictureBox^ pictureBox_show;
	private: System::Windows::Forms::Label^ label_originfile;
	private: System::Windows::Forms::Button^ show_R;
	private: System::Windows::Forms::Button^ show_G;
	private: System::Windows::Forms::Button^ origin;
	private: System::Windows::Forms::Button^ show_B;
	private: System::Windows::Forms::Panel^ RGBpanel;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton2;
	private: System::Windows::Forms::ToolStripMenuItem^ 灰階ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ 負片ToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ 色彩選項ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;



	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ buttonzoomin;

	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::Button^ buttonzoonout;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::ToolStripButton^ rotatetoolStripButton;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripDropDownButton^ cut_overlap_toolStripDropDownButton3;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ overlapToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ brightnesstoolStripButton;
	private: System::Windows::Forms::ToolStripDropDownButton^ Bit_plane_toolStripDropDownButton3;
	private: System::Windows::Forms::ToolStripMenuItem^ grayCodeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ birPlaneWatermarkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transparencyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ colorBitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton3;
	private: System::Windows::Forms::ToolStripMenuItem^ histogramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripMenuItem^ histogramEqualizationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ histogramSpecificatioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ headerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton4;
	private: System::Windows::Forms::ToolStripMenuItem^ contrastToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ Filter;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel6;
private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::ToolStripMenuItem^ rGBInvertToolStripMenuItem;
private: System::Windows::Forms::TrackBar^ trackBar2;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;























	protected:










	private: System::ComponentModel::IContainer^ components;
	protected:











	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->headerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->色彩選項ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rGBInvertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->灰階ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->負片ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorBitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->rotatetoolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->cut_overlap_toolStripDropDownButton3 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->overlapToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transparencyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->brightnesstoolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->Bit_plane_toolStripDropDownButton3 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->grayCodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->birPlaneWatermarkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton3 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->histogramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->histogramEqualizationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->histogramSpecificatioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Filter = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripDropDownButton4 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->contrastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox_origin = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox_colormapORpalette = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_show = (gcnew System::Windows::Forms::PictureBox());
			this->label_originfile = (gcnew System::Windows::Forms::Label());
			this->show_R = (gcnew System::Windows::Forms::Button());
			this->show_G = (gcnew System::Windows::Forms::Button());
			this->origin = (gcnew System::Windows::Forms::Button());
			this->show_B = (gcnew System::Windows::Forms::Button());
			this->RGBpanel = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonzoonout = (gcnew System::Windows::Forms::Button());
			this->buttonzoomin = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_origin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_colormapORpalette))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_show))->BeginInit();
			this->RGBpanel->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(14) {
				this->toolStripDropDownButton1,
					this->toolStripDropDownButton2, this->toolStripButton1, this->rotatetoolStripButton, this->cut_overlap_toolStripDropDownButton3,
					this->brightnesstoolStripButton, this->toolStripButton2, this->Bit_plane_toolStripDropDownButton3, this->toolStripDropDownButton3,
					this->Filter, this->toolStripDropDownButton4, this->toolStripButton4, this->toolStripButton5, this->toolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1733, 32);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openFileToolStripMenuItem,
					this->headerToolStripMenuItem, this->saveFileToolStripMenuItem
			});
			this->toolStripDropDownButton1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(78, 29);
			this->toolStripDropDownButton1->Text = L"File";
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openFileToolStripMenuItem.Image")));
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(258, 30);
			this->openFileToolStripMenuItem->Text = L"Open file";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFileToolStripMenuItem_Click);
			// 
			// headerToolStripMenuItem
			// 
			this->headerToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"headerToolStripMenuItem.Image")));
			this->headerToolStripMenuItem->Name = L"headerToolStripMenuItem";
			this->headerToolStripMenuItem->Size = System::Drawing::Size(258, 30);
			this->headerToolStripMenuItem->Text = L"Header";
			this->headerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::headerToolStripMenuItem_Click);
			// 
			// saveFileToolStripMenuItem
			// 
			this->saveFileToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveFileToolStripMenuItem.Image")));
			this->saveFileToolStripMenuItem->Name = L"saveFileToolStripMenuItem";
			this->saveFileToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->saveFileToolStripMenuItem->Size = System::Drawing::Size(258, 30);
			this->saveFileToolStripMenuItem->Text = L"Exit";
			this->saveFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveFileToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->色彩選項ToolStripMenuItem,
					this->rGBInvertToolStripMenuItem, this->灰階ToolStripMenuItem, this->負片ToolStripMenuItem, this->colorBitToolStripMenuItem
			});
			this->toolStripDropDownButton2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripDropDownButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton2.Image")));
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(97, 29);
			this->toolStripDropDownButton2->Text = L"Color";
			// 
			// 色彩選項ToolStripMenuItem
			// 
			this->色彩選項ToolStripMenuItem->Name = L"色彩選項ToolStripMenuItem";
			this->色彩選項ToolStripMenuItem->ShowShortcutKeys = false;
			this->色彩選項ToolStripMenuItem->Size = System::Drawing::Size(250, 30);
			this->色彩選項ToolStripMenuItem->Text = L"R G B";
			this->色彩選項ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::色彩選項ToolStripMenuItem_Click);
			// 
			// rGBInvertToolStripMenuItem
			// 
			this->rGBInvertToolStripMenuItem->Name = L"rGBInvertToolStripMenuItem";
			this->rGBInvertToolStripMenuItem->Size = System::Drawing::Size(250, 30);
			this->rGBInvertToolStripMenuItem->Text = L"RGB invert";
			this->rGBInvertToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rGBInvertToolStripMenuItem_Click);
			// 
			// 灰階ToolStripMenuItem
			// 
			this->灰階ToolStripMenuItem->Name = L"灰階ToolStripMenuItem";
			this->灰階ToolStripMenuItem->Size = System::Drawing::Size(250, 30);
			this->灰階ToolStripMenuItem->Text = L"Gray scale";
			this->灰階ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::灰階ToolStripMenuItem_Click);
			// 
			// 負片ToolStripMenuItem
			// 
			this->負片ToolStripMenuItem->Name = L"負片ToolStripMenuItem";
			this->負片ToolStripMenuItem->Size = System::Drawing::Size(250, 30);
			this->負片ToolStripMenuItem->Text = L"Gray scale Invert";
			this->負片ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::負片ToolStripMenuItem_Click);
			// 
			// colorBitToolStripMenuItem
			// 
			this->colorBitToolStripMenuItem->Name = L"colorBitToolStripMenuItem";
			this->colorBitToolStripMenuItem->Size = System::Drawing::Size(250, 30);
			this->colorBitToolStripMenuItem->Text = L"Color bit depth";
			this->colorBitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::colorBitToolStripMenuItem_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(103, 29);
			this->toolStripButton1->Text = L"Scaling";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// rotatetoolStripButton
			// 
			this->rotatetoolStripButton->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->rotatetoolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rotatetoolStripButton.Image")));
			this->rotatetoolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->rotatetoolStripButton->Name = L"rotatetoolStripButton";
			this->rotatetoolStripButton->Size = System::Drawing::Size(98, 29);
			this->rotatetoolStripButton->Text = L"Rotate";
			this->rotatetoolStripButton->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// cut_overlap_toolStripDropDownButton3
			// 
			this->cut_overlap_toolStripDropDownButton3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cutToolStripMenuItem,
					this->overlapToolStripMenuItem, this->transparencyToolStripMenuItem
			});
			this->cut_overlap_toolStripDropDownButton3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->cut_overlap_toolStripDropDownButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cut_overlap_toolStripDropDownButton3.Image")));
			this->cut_overlap_toolStripDropDownButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cut_overlap_toolStripDropDownButton3->Name = L"cut_overlap_toolStripDropDownButton3";
			this->cut_overlap_toolStripDropDownButton3->Size = System::Drawing::Size(169, 29);
			this->cut_overlap_toolStripDropDownButton3->Text = L"Cut \\ Overlap";
			this->cut_overlap_toolStripDropDownButton3->ToolTipText = L"cut \\ overlap";
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->Size = System::Drawing::Size(222, 30);
			this->cutToolStripMenuItem->Text = L"Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripMenuItem_Click_1);
			// 
			// overlapToolStripMenuItem
			// 
			this->overlapToolStripMenuItem->Name = L"overlapToolStripMenuItem";
			this->overlapToolStripMenuItem->Size = System::Drawing::Size(222, 30);
			this->overlapToolStripMenuItem->Text = L"Overlap";
			this->overlapToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::overlapToolStripMenuItem_Click);
			// 
			// transparencyToolStripMenuItem
			// 
			this->transparencyToolStripMenuItem->Name = L"transparencyToolStripMenuItem";
			this->transparencyToolStripMenuItem->Size = System::Drawing::Size(222, 30);
			this->transparencyToolStripMenuItem->Text = L"Transparency";
			this->transparencyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::transparencyToolStripMenuItem_Click);
			// 
			// brightnesstoolStripButton
			// 
			this->brightnesstoolStripButton->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->brightnesstoolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"brightnesstoolStripButton.Image")));
			this->brightnesstoolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->brightnesstoolStripButton->Name = L"brightnesstoolStripButton";
			this->brightnesstoolStripButton->Size = System::Drawing::Size(133, 29);
			this->brightnesstoolStripButton->Text = L"Brightness";
			this->brightnesstoolStripButton->Click += gcnew System::EventHandler(this, &MyForm::brightnesstoolStripButton_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(129, 29);
			this->toolStripButton2->Text = L"Threshold";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click_1);
			// 
			// Bit_plane_toolStripDropDownButton3
			// 
			this->Bit_plane_toolStripDropDownButton3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->grayCodeToolStripMenuItem,
					this->birPlaneWatermarkToolStripMenuItem
			});
			this->Bit_plane_toolStripDropDownButton3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->Bit_plane_toolStripDropDownButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bit_plane_toolStripDropDownButton3.Image")));
			this->Bit_plane_toolStripDropDownButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Bit_plane_toolStripDropDownButton3->Name = L"Bit_plane_toolStripDropDownButton3";
			this->Bit_plane_toolStripDropDownButton3->Size = System::Drawing::Size(126, 29);
			this->Bit_plane_toolStripDropDownButton3->Text = L"Bit Plane";
			// 
			// grayCodeToolStripMenuItem
			// 
			this->grayCodeToolStripMenuItem->Name = L"grayCodeToolStripMenuItem";
			this->grayCodeToolStripMenuItem->Size = System::Drawing::Size(365, 30);
			this->grayCodeToolStripMenuItem->Text = L"Gray Code";
			this->grayCodeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::grayCodeToolStripMenuItem_Click);
			// 
			// birPlaneWatermarkToolStripMenuItem
			// 
			this->birPlaneWatermarkToolStripMenuItem->Name = L"birPlaneWatermarkToolStripMenuItem";
			this->birPlaneWatermarkToolStripMenuItem->Size = System::Drawing::Size(365, 30);
			this->birPlaneWatermarkToolStripMenuItem->Text = L"Bit plane slicing \\ Watermark";
			this->birPlaneWatermarkToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::birPlaneWatermarkToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton3
			// 
			this->toolStripDropDownButton3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->histogramToolStripMenuItem,
					this->histogramEqualizationToolStripMenuItem, this->histogramSpecificatioToolStripMenuItem
			});
			this->toolStripDropDownButton3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripDropDownButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton3.Image")));
			this->toolStripDropDownButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton3->Name = L"toolStripDropDownButton3";
			this->toolStripDropDownButton3->Size = System::Drawing::Size(145, 29);
			this->toolStripDropDownButton3->Text = L"Histogram";
			// 
			// histogramToolStripMenuItem
			// 
			this->histogramToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->histogramToolStripMenuItem->Name = L"histogramToolStripMenuItem";
			this->histogramToolStripMenuItem->Size = System::Drawing::Size(320, 30);
			this->histogramToolStripMenuItem->Text = L"Histogram";
			this->histogramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::histogramToolStripMenuItem_Click);
			// 
			// histogramEqualizationToolStripMenuItem
			// 
			this->histogramEqualizationToolStripMenuItem->Name = L"histogramEqualizationToolStripMenuItem";
			this->histogramEqualizationToolStripMenuItem->Size = System::Drawing::Size(320, 30);
			this->histogramEqualizationToolStripMenuItem->Text = L"Histogram equalization";
			this->histogramEqualizationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::histogramEqualizationToolStripMenuItem_Click);
			// 
			// histogramSpecificatioToolStripMenuItem
			// 
			this->histogramSpecificatioToolStripMenuItem->Name = L"histogramSpecificatioToolStripMenuItem";
			this->histogramSpecificatioToolStripMenuItem->Size = System::Drawing::Size(320, 30);
			this->histogramSpecificatioToolStripMenuItem->Text = L"Histogram specification";
			this->histogramSpecificatioToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::histogramSpecificatioToolStripMenuItem_Click);
			// 
			// Filter
			// 
			this->Filter->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Filter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Filter.Image")));
			this->Filter->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Filter->Name = L"Filter";
			this->Filter->Size = System::Drawing::Size(82, 29);
			this->Filter->Text = L"Filter";
			this->Filter->Click += gcnew System::EventHandler(this, &MyForm::Filter_Click);
			// 
			// toolStripDropDownButton4
			// 
			this->toolStripDropDownButton4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->contrastToolStripMenuItem });
			this->toolStripDropDownButton4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripDropDownButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton4.Image")));
			this->toolStripDropDownButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton4->Name = L"toolStripDropDownButton4";
			this->toolStripDropDownButton4->Size = System::Drawing::Size(125, 29);
			this->toolStripDropDownButton4->Text = L"Contrast";
			// 
			// contrastToolStripMenuItem
			// 
			this->contrastToolStripMenuItem->Name = L"contrastToolStripMenuItem";
			this->contrastToolStripMenuItem->Size = System::Drawing::Size(177, 30);
			this->contrastToolStripMenuItem->Text = L"Contrast";
			this->contrastToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::contrastToolStripMenuItem_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(114, 29);
			this->toolStripButton4->Text = L"Connect";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(91, 29);
			this->toolStripButton5->Text = L"Video";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(69, 29);
			this->toolStripButton3->Text = L"Ball";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// pictureBox_origin
			// 
			this->pictureBox_origin->Location = System::Drawing::Point(0, 73);
			this->pictureBox_origin->Name = L"pictureBox_origin";
			this->pictureBox_origin->Size = System::Drawing::Size(315, 205);
			this->pictureBox_origin->TabIndex = 1;
			this->pictureBox_origin->TabStop = false;
			this->pictureBox_origin->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_origin_MouseMove);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(1087, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Picture data";
			this->label1->Visible = false;
			// 
			// pictureBox_colormapORpalette
			// 
			this->pictureBox_colormapORpalette->Location = System::Drawing::Point(360, 73);
			this->pictureBox_colormapORpalette->Name = L"pictureBox_colormapORpalette";
			this->pictureBox_colormapORpalette->Size = System::Drawing::Size(160, 160);
			this->pictureBox_colormapORpalette->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_colormapORpalette->TabIndex = 3;
			this->pictureBox_colormapORpalette->TabStop = false;
			this->pictureBox_colormapORpalette->Click += gcnew System::EventHandler(this, &MyForm::pictureBox_colormapORpalette_Click);
			// 
			// pictureBox_show
			// 
			this->pictureBox_show->Location = System::Drawing::Point(557, 391);
			this->pictureBox_show->Name = L"pictureBox_show";
			this->pictureBox_show->Size = System::Drawing::Size(352, 227);
			this->pictureBox_show->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_show->TabIndex = 4;
			this->pictureBox_show->TabStop = false;
			// 
			// label_originfile
			// 
			this->label_originfile->AutoSize = true;
			this->label_originfile->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_originfile->Location = System::Drawing::Point(10, 37);
			this->label_originfile->Name = L"label_originfile";
			this->label_originfile->Size = System::Drawing::Size(40, 25);
			this->label_originfile->TabIndex = 5;
			this->label_originfile->Text = L"file";
			this->label_originfile->Visible = false;
			// 
			// show_R
			// 
			this->show_R->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->show_R->Location = System::Drawing::Point(106, 3);
			this->show_R->Name = L"show_R";
			this->show_R->Size = System::Drawing::Size(94, 99);
			this->show_R->TabIndex = 6;
			this->show_R->Text = L"R";
			this->show_R->UseVisualStyleBackColor = true;
			this->show_R->Click += gcnew System::EventHandler(this, &MyForm::show_R_Click);
			// 
			// show_G
			// 
			this->show_G->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->show_G->Location = System::Drawing::Point(206, 3);
			this->show_G->Name = L"show_G";
			this->show_G->Size = System::Drawing::Size(94, 99);
			this->show_G->TabIndex = 8;
			this->show_G->Text = L"G";
			this->show_G->UseVisualStyleBackColor = true;
			this->show_G->Click += gcnew System::EventHandler(this, &MyForm::show_G_Click);
			// 
			// origin
			// 
			this->origin->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->origin->Location = System::Drawing::Point(3, 3);
			this->origin->Name = L"origin";
			this->origin->Size = System::Drawing::Size(98, 99);
			this->origin->TabIndex = 9;
			this->origin->Text = L"origin";
			this->origin->UseVisualStyleBackColor = true;
			this->origin->Click += gcnew System::EventHandler(this, &MyForm::origin_Click);
			// 
			// show_B
			// 
			this->show_B->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->show_B->Location = System::Drawing::Point(306, 3);
			this->show_B->Name = L"show_B";
			this->show_B->Size = System::Drawing::Size(94, 99);
			this->show_B->TabIndex = 10;
			this->show_B->Text = L"B";
			this->show_B->UseVisualStyleBackColor = true;
			this->show_B->Click += gcnew System::EventHandler(this, &MyForm::show_B_Click);
			// 
			// RGBpanel
			// 
			this->RGBpanel->Controls->Add(this->show_B);
			this->RGBpanel->Controls->Add(this->origin);
			this->RGBpanel->Controls->Add(this->show_G);
			this->RGBpanel->Controls->Add(this->show_R);
			this->RGBpanel->Location = System::Drawing::Point(15, 415);
			this->RGBpanel->Name = L"RGBpanel";
			this->RGBpanel->Size = System::Drawing::Size(405, 106);
			this->RGBpanel->TabIndex = 11;
			this->RGBpanel->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->buttonzoonout);
			this->groupBox1->Controls->Add(this->buttonzoomin);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(11, 543);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(409, 219);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Scaling";
			this->groupBox1->Visible = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(47, 162);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(111, 29);
			this->checkBox4->TabIndex = 11;
			this->checkBox4->Text = L"Average";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(47, 127);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(142, 29);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Decimation";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(208, 148);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(35, 34);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"2";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(208, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(35, 34);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"2";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// buttonzoonout
			// 
			this->buttonzoonout->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
			this->buttonzoonout->Location = System::Drawing::Point(249, 148);
			this->buttonzoonout->Name = L"buttonzoonout";
			this->buttonzoonout->Size = System::Drawing::Size(115, 34);
			this->buttonzoonout->TabIndex = 6;
			this->buttonzoonout->Text = L"Zoom out";
			this->buttonzoonout->UseVisualStyleBackColor = true;
			this->buttonzoonout->Click += gcnew System::EventHandler(this, &MyForm::buttonzoonout_Click);
			// 
			// buttonzoomin
			// 
			this->buttonzoomin->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
			this->buttonzoomin->Location = System::Drawing::Point(249, 52);
			this->buttonzoomin->Name = L"buttonzoomin";
			this->buttonzoomin->Size = System::Drawing::Size(115, 34);
			this->buttonzoomin->TabIndex = 5;
			this->buttonzoomin->Text = L"Zoom in";
			this->buttonzoomin->UseVisualStyleBackColor = true;
			this->buttonzoomin->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(47, 70);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(156, 29);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Interpolation";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(47, 35);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(142, 29);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Duplication";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel6, this->toolStripStatusLabel5
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 762);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1733, 31);
			this->statusStrip1->TabIndex = 13;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(93, 25);
			this->toolStripStatusLabel1->Text = L"Location";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripStatusLabel2->ForeColor = System::Drawing::Color::Red;
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(40, 25);
			this->toolStripStatusLabel2->Text = L"R : ";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripStatusLabel3->ForeColor = System::Drawing::Color::Green;
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(42, 25);
			this->toolStripStatusLabel3->Text = L"G : ";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripStatusLabel4->ForeColor = System::Drawing::Color::Blue;
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(39, 25);
			this->toolStripStatusLabel4->Text = L"B : ";
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripStatusLabel6->ForeColor = System::Drawing::Color::MediumTurquoise;
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(109, 25);
			this->toolStripStatusLabel6->Text = L"H :   S :   I : ";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->toolStripStatusLabel5->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->toolStripStatusLabel5->LinkColor = System::Drawing::Color::Purple;
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(77, 25);
			this->toolStripStatusLabel5->Text = L"SNR = ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->trackBar1);
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(557, 73);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(419, 160);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Rotate";
			this->groupBox2->Visible = false;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(20, 98);
			this->trackBar1->Maximum = 360;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(385, 56);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"正推", L"逆推" });
			this->comboBox3->Location = System::Drawing::Point(194, 46);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 33);
			this->comboBox3->TabIndex = 1;
			this->comboBox3->Text = L"正推";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(39, 46);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 34);
			this->textBox3->TabIndex = 0;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->radioButton1->Location = System::Drawing::Point(12, 140);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(82, 29);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"3 × 3";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->radioButton2->Location = System::Drawing::Point(12, 172);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(82, 29);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"5 × 5";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(100, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 38);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Pseudo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Location = System::Drawing::Point(991, 391);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(710, 349);
			this->panel1->TabIndex = 18;
			this->panel1->Visible = false;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button20->Location = System::Drawing::Point(342, 45);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(126, 38);
			this->button20->TabIndex = 37;
			this->button20->Text = L"Median C";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button19->Location = System::Drawing::Point(246, 140);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(160, 37);
			this->button19->TabIndex = 36;
			this->button19->Text = L"Edge cripsing";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button18->Location = System::Drawing::Point(100, 140);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(150, 37);
			this->button18->TabIndex = 35;
			this->button18->Text = L"Laplacian ";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button17->Location = System::Drawing::Point(463, 45);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(126, 38);
			this->button17->TabIndex = 34;
			this->button17->Text = L"Outlier";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button16->Location = System::Drawing::Point(392, 278);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(150, 36);
			this->button16->TabIndex = 33;
			this->button16->Text = L"Prewitt";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button15->Location = System::Drawing::Point(246, 278);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(150, 36);
			this->button15->TabIndex = 32;
			this->button15->Text = L"Y Prewitt";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button14->Location = System::Drawing::Point(100, 278);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(150, 36);
			this->button14->TabIndex = 31;
			this->button14->Text = L"X Prewitt";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button13->Location = System::Drawing::Point(392, 235);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(150, 37);
			this->button13->TabIndex = 30;
			this->button13->Text = L"Sobel";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button12->Location = System::Drawing::Point(246, 235);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(150, 37);
			this->button12->TabIndex = 29;
			this->button12->Text = L"Y Sobel";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button11->Location = System::Drawing::Point(100, 235);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(150, 37);
			this->button11->TabIndex = 28;
			this->button11->Text = L"X Sobel";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button10->Location = System::Drawing::Point(392, 192);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(150, 37);
			this->button10->TabIndex = 27;
			this->button10->Text = L"Gradient";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button9->Location = System::Drawing::Point(246, 192);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(150, 37);
			this->button9->TabIndex = 26;
			this->button9->Text = L"Y gradient";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button8->Location = System::Drawing::Point(100, 192);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 37);
			this->button8->TabIndex = 25;
			this->button8->Text = L"X gradient";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button7->Location = System::Drawing::Point(4, 93);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 38);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Noise";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown1->Location = System::Drawing::Point(378, 93);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(128, 38);
			this->numericUpDown1->TabIndex = 23;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button6->Location = System::Drawing::Point(246, 93);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 37);
			this->button6->TabIndex = 22;
			this->button6->Text = L"HighBoost";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(100, 93);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 38);
			this->button5->TabIndex = 21;
			this->button5->Text = L"High pass";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(4, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 80);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Gray";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(100, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 38);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Low pass";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(222, 45);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 38);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Median S";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(6, 38);
			this->trackBar2->Maximum = 100;
			this->trackBar2->Minimum = -100;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(303, 56);
			this->trackBar2->TabIndex = 19;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown2->Location = System::Drawing::Point(335, 43);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(73, 34);
			this->numericUpDown2->TabIndex = 20;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numericUpDown2);
			this->groupBox3->Controls->Add(this->trackBar2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox3->Location = System::Drawing::Point(557, 268);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(423, 100);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Brightness";
			this->groupBox3->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1754, 782);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->RGBpanel);
			this->Controls->Add(this->label_originfile);
			this->Controls->Add(this->pictureBox_show);
			this->Controls->Add(this->pictureBox_colormapORpalette);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox_origin);
			this->Controls->Add(this->toolStrip1);
			this->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Image";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_origin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_colormapORpalette))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_show))->EndInit();
			this->RGBpanel->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//new一個新的openFileDialog1開啟檔案
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		//設定Filter，用以限定使用者開啟的檔案
		openFileDialog1->Filter = " All files (*.*)| *.*";
		//預設檔案名稱為空值
		openFileDialog1->FileName = "";
		//設定跳出選擇視窗的標題名稱
		openFileDialog1->Title = "載入影像";
		//設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
		openFileDialog1->FilterIndex = 1;

		//跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0)
		{
			char a[2] = ".";
			array<Char>^ dot = (gcnew String(a))->ToCharArray();
			cli::array<String^>^ result = openFileDialog1->FileName->Split(dot, StringSplitOptions::RemoveEmptyEntries);
	
			if (result[1] == "pcx") {
				PCXHEAD pcx_head;
				PCXPALETTE pcx_palette;
				LOADPCXDATA(openFileDialog1->FileName, pcx_head, pcx_palette);
				source = pcx_palette.palette;
				Display = pcx_palette.palette;

				pictureBox_origin->Image = source;
				OriginGray = Gary();
				this->label_originfile->Visible = true;
				this->label_originfile->Text = "File : " + openFileDialog1->FileName;
				
			}
			else {
				BMPHEAD bmp_head;
				BMPPALETTE bmp_palette;
				LOADBMPDATA(openFileDialog1->FileName, bmp_head, bmp_palette);
				source = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
				pictureBox_origin->Image = source;
				OriginGray = Gary();
				this->label_originfile->Visible = true;
				this->label_originfile->Text = "File : " + openFileDialog1->FileName;

			}
		
		}
	}

	//PCX data
	public:void LOADPCXDATA(String^ path, PCXHEAD% pcxdata, PCXPALETTE% Palette)
	{
		FileStream^ fs = gcnew   FileStream(path, FileMode::Open);
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
		label1->Text = "Manufacturer" + " : " + (pcxdata.Manufacturer) + "\r\n"
			"Version" + " : " + (pcxdata.Version) + "\r\n"
			"Encodong" + " : " + (pcxdata.Encoding) + "\r\n"
			"BitsPerPixel" + " : " + (pcxdata.BitsPerPixel) + "\r\n"
			"Window" + " : " + "( " + (pcxdata.Xmin) + " : " + (pcxdata.Ymin) + " ) ~ ( " + (pcxdata.Xmax) + " : " + (pcxdata.Ymax) + " )" + "\r\n"
			"Hdpi" + " : " + (pcxdata.Hdpi) + "\r\n"
			"Vdpi" + " : " + (pcxdata.Vdpi) + "\r\n"
			"Reserved" + " : " + (pcxdata.Reserved) + "\r\n"
			"Nplanes" + " : " + (pcxdata.Nplanes) + "\r\n"
			"BytesPerLine" + " : " + (pcxdata.BytesPerLine) + "\r\n"
			"PaletteInfo" + " : " + (pcxdata.PaletteInfo) + "\r\n"
			"HscreenSize" + " : " + (pcxdata.HscreenSize) + "\r\n"
			"VscreenSize" + " : " + (pcxdata.VscreenSize) + "\r\n";
		pictureBox_origin->Width = pcxdata.width;
		pictureBox_origin->Height = pcxdata.height;
		
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

		pictureBox_colormapORpalette->Image = Palette.draw_Colormap;

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
	// Load Bitmap
	public:void LOADBMPDATA(String^ path, BMPHEAD% bmpdata, BMPPALETTE% Palette) {
		FileStream^ fs_bmp = gcnew FileStream(path, FileMode::Open);
		BinaryReader^ br_bmp = gcnew BinaryReader(fs_bmp);
		int row = 0, column = 0, color_number = 0; //用在調色盤和colormap//
		int red, green, blue;	//用在調色盤和colormap//
		short int RGB[256][3];

		//讀取檔頭開始...//
		for (br_bmp->BaseStream->Position = 0; br_bmp->BaseStream->Position < 54; ) {
			long int c1, c2, c3, c4;	//計算用//
			long int a = pow(16, 2);	//進位用的
			long int b = pow(16, 4);
			long int c = pow(16, 6);
			switch (br_bmp->BaseStream->Position) {

			case 0:
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				if ((c1 + c2) == 0x42 + 0x4D) {
					bmpdata.Head = "BM";
				}
				else
					bmpdata.Head = "Erro!!!";
				break;


			case 2:
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.FileSize = c1 + c2 * a + c3 * b + c4 * c;
				break;


			case 6:
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.Reserved = c1 + c2 * a + c3 * b + c4 * c;
				break;


			case 10:
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.StartingAddress = c1 + c2 * a + c3 * b + c4 * c;
				break;

			case 14:
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				if ((c1 + c2 * a + c3 * b + c4 * c) == 40) {
					bmpdata.DIB = "BITMAPINFOHEADER";
				}
				break;

			case 18:
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.width = c1 + c2 * a + c3 * b + c4 * c;
				break;

			case 22: {
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.height = c1 + c2 * a + c3 * b + c4 * c;
				break;
			}
			case 26: {
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				bmpdata.ColorPlane = c1 + c2 * 256;
				break;
			}
			case 28: {
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				bmpdata.BitsPerPixel = c1 + c2 * 256;
				break;
			}
			case 30: {
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.CompressionMethod = c1 + c2 * a + c3 * b + c4 * c;
				break;
			}
			case 34: {
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.ImageSize = c1 + c2 * a + c3 * b + c4 * c;
				break;
			}
			case 38: {
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.Hdpi = c1 + c2 * a + c3 * b + c4 * c;
				break;
			}
			case 42: {
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.Vdpi = c1 + c2 * a + c3 * b + c4 * c;
				break;
			}
			case 46: {
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.ColorsUsed = c1 + c2 * a + c3 * b + c4 * c;
				break;
			}
			case 50: {
				c1 = br_bmp->ReadByte();
				c2 = br_bmp->ReadByte();
				c3 = br_bmp->ReadByte();
				c4 = br_bmp->ReadByte();
				bmpdata.ColorsImportant = c1 + c2 * a + c3 * b + c4 * c;
				break;
			}
			case 55: {
				int RED = 0, GREEN = 0, BLUE = 0;
				Color get3;
				Palette.Colormap3 = gcnew Bitmap(256, 256);
				Graphics^ CM2_graphics = Graphics::FromImage(Palette.Colormap3);
				SolidBrush^ brush;
				SolidBrush^ brushHSI;
				for (row = 0; row < 16; row++) {
					for (column = 0; column < 16; column++) {
						RGB[color_number][0] = br_bmp->ReadByte();
						RGB[color_number][1] = br_bmp->ReadByte();
						RGB[color_number][2] = br_bmp->ReadByte();
						RGB[color_number][3] = br_bmp->ReadByte();
						get3 = Color::FromArgb(RGB[color_number][3], RGB[color_number][2], RGB[color_number][1], RGB[color_number][0]);
						brush = gcnew SolidBrush(get3);
						Rectangle rectangle((row * 16), (column * 16), 16, 16);
						CM2_graphics->FillRectangle(brush, rectangle);

						color_number++;
					}
				}
				/*
				Palette.Colormap3 = gcnew Bitmap(160, 160);
				//Bitmap(長,寬)單位為像素，因為我下面自己設定顏色顯示一格是40*40，所以長寬是160*160//
				Color CM_color;
				Graphics^ CM_graphics = Graphics::FromImage(Palette.Colormap3);	//不同層
				for (row = 0; row < 4; row++) {
					for (column = 0; column < 4; column++) {
						red = br_bmp->ReadByte();
						green = br_bmp->ReadByte();
						blue = br_bmp->ReadByte();
						CM_color = Color::FromArgb(red, green, blue);	//不同層
						//brushes的顏色已被定義，所以用solidbrush去設定得到的顏色//
						SolidBrush^ brush = gcnew SolidBrush(CM_color);//同層
						Rectangle rectangle((column * 40), (row * 40), 40, 40);//初始x,y座標，長度和寬度數值//
						CM_graphics->FillRectangle(brush, rectangle);
					}
				}*/
			}
			case 1079: {
				Palette.palette2 = gcnew Bitmap(bmpdata.width, bmpdata.height);
				Graphics^ Palette_graphics = Graphics::FromImage(Palette.palette2);
				int check;
				int x = 0, y = 0;
				while (y < bmpdata.height) {	//括弧要刮好，沒刮好一直做不出來//
					RGB[check][0] = br_bmp->ReadByte();
					RGB[check][1] = br_bmp->ReadByte();
					RGB[check][2] = br_bmp->ReadByte();
					RGB[check][3] = br_bmp->ReadByte();
					Color newColor = Color::FromArgb(RGB[check][3], RGB[check][2], RGB[check][1], RGB[check][0]);
					Palette.palette2->SetPixel(x, y, newColor);
					x++;
					if (x == bmpdata.width) {
						x = 0;
						y++;
					}
					if (y == bmpdata.height) {
						break;
					}
				}
				if (y == bmpdata.height) {
					break;
				}

			}

			}
		}
		//到這邊為止，把頭檔資料讀出來而已。
	//關於畫圖、顏色的用法網址：https://docs.microsoft.com/zh-tw/dotnet/api/system.drawing?view=netframework-4.7.2
		this->label1->Visible = false;
		label1->Text = "Head" + " : " + (bmpdata.Head) + "\r\n"
			"FileSize" + " : " + (bmpdata.FileSize) + "\r\n"
			"Reserved" + " : " + (bmpdata.Reserved) + "\r\n"
			"StartingAddress" + " : " + (bmpdata.StartingAddress) + "\r\n"
			"DIB" + " : " + (bmpdata.DIB) + "\r\n"
			"Window" + "：" + "width： " + (bmpdata.width) + "\n" +   
			"height： " + (bmpdata.height) + "\r\n"
			"ColorPlanel" + " : " + (bmpdata.ColorPlane) + "\r\n"
			"BitsPerPixel" + " : " + (bmpdata.BitsPerPixel) + "\r\n"
			"CompressionMethod" + " : " + (bmpdata.CompressionMethod) + "\r\n"
			"ImageSize" + " : " + (bmpdata.ImageSize) + "\r\n"
			"Hdpi" + " : " + (bmpdata.Hdpi / 39.375) + "\r\n"
			"Vdpi" + " : " + (bmpdata.Vdpi / 39.375) + "\r\n"
			"ColorsUsed" + " : " + (bmpdata.ColorsUsed) + "\r\n"
			"ColorsImportant" + " : " + (bmpdata.ColorsImportant) + "\r\n";
		pictureBox_origin->Width = bmpdata.width;
		pictureBox_origin->Height = bmpdata.height;
		//將讀完的PCXHEAD資料，加到個項目冒號之後。
		Palette.palette2 = gcnew Bitmap(bmpdata.width, bmpdata.height);
		pictureBox_colormapORpalette->Image = Palette.Colormap3;
		//讀取圖像的2-D array 並且著色//
		fs_bmp->Close();
	}


	// Compare with Origin color picture
	public: void SNR() {
		long long sum1 = 0, sum2 = 0, R = 0, G = 0, B = 0;
		double final;
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				sum1 += pow((Display->GetPixel(i, j).R), 2);
				sum1 += pow((Display->GetPixel(i, j).G), 2);
				sum1 += pow((Display->GetPixel(i, j).B), 2);
			}
		}

		for (int i = 0; i < source->Width; i++) {
			for (int j = 0; j < source->Height; j++) {
				sum2 += pow((Display->GetPixel(i, j).R) - source->GetPixel(i, j).R, 2);
				sum2 += pow((Display->GetPixel(i, j).G) - source->GetPixel(i, j).G, 2);
				sum2 += pow((Display->GetPixel(i, j).B) - source->GetPixel(i, j).B, 2);
			}
		}

		final = 10 * log((double)sum1 / (double)sum2);


		this->toolStripStatusLabel5->Text = "SNR = " + (final).ToString("0.000") + " DB";

	}

	// Compare with Gray level
	public: void SNR2() {
		long long sum1 = 0, sum2 = 0, R = 0, G = 0, B = 0;
		double final;
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				sum1 += pow((Display->GetPixel(i, j).R), 2);
				sum1 += pow((Display->GetPixel(i, j).G), 2);
				sum1 += pow((Display->GetPixel(i, j).B), 2);
			}
		}

		for (int i = 0; i < source->Width; i++) {
			for (int j = 0; j < source->Height; j++) {
				sum2 += pow((Display->GetPixel(i, j).R) - OriginGray->GetPixel(i, j).R, 2);
				sum2 += pow((Display->GetPixel(i, j).G) - OriginGray->GetPixel(i, j).G, 2);
				sum2 += pow((Display->GetPixel(i, j).B) - OriginGray->GetPixel(i, j).B, 2);
			}
		}

		final = 10 * log((double)sum1 / (double)sum2);


		this->toolStripStatusLabel5->Text = "SNR = " + (final).ToString("0.000") + " DB";

	}

	private: System::Void pictureBox_origin_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if ((this->pictureBox_origin->Image) != nullptr) {
			this->toolStripStatusLabel1->Text = e->Location.ToString();
			this->statusStrip1->Visible = true;
			String^ Ri, ^ Gi, ^ Bi, ^ Hi, ^ Si, ^ Ii;
			if ((e->X) > 0 && e->X < (this->pictureBox_origin->Width)) {
				if ((e->Y) > 0 && (e->Y) < (this->pictureBox_origin->Height)) {
					Color RGBInfo = source->GetPixel(e->X, e->Y);
					double R, G, B;
					R = source->GetPixel(e->X, e->Y).R;          
					G = source->GetPixel(e->X, e->Y).G;            
					B = source->GetPixel(e->X, e->Y).B;
					this->toolStripStatusLabel2->Text = RGBInfo.R.ToString();
					this->toolStripStatusLabel3->Text = RGBInfo.G.ToString();
					this->toolStripStatusLabel4->Text = RGBInfo.B.ToString();

					double Rv, Gv, Bv;
					double Theta;
					double Hv, Sv, Iv;
					double Deno;

					Rv = R / 255;
					Gv = G / 255;
					Bv = B / 255;

					Deno = sqrt(((Rv - Gv) * (Rv - Gv)) + ((Rv - Bv) * (Gv - Bv)));
					Theta = Math::Acos(((Rv - Gv) + (Rv - Bv)) / 2 * Deno);

					if (Deno = 0) {

						Hv = 0;
					}
					else
					{
						if (Gv >= Bv)
						{
							Hv = Theta / (Math::PI * 2);
						}
						else
						{
							Hv = ((2 * Math::PI) - Theta) / (2 * Math::PI);
						}
					}

					Sv = 1 - ((3 * Math::Min(Rv, Math::Min(Gv, Bv))) / (Rv + Gv + Bv));

					Iv = (Rv + Gv + Bv) / 3;

					Hv = Hv * 255;
					Sv = Sv * 255;
					Iv = Iv * 255;
					

					Ri = RGBInfo.R.ToString();
					Gi = RGBInfo.G.ToString();
					Bi = RGBInfo.B.ToString();
					Hi = Hv.ToString();
					Si = Sv.ToString();
					Ii = Iv.ToString();
					this->toolStripStatusLabel6->Text = "| H : " + Hi + "  S : " + Si + "  I : " + Ii + " |";

				}
			}
		}
	}

	private: System::Void headerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->label1->Visible == false ) {
			this->label1->Visible = true;
		}
		else {
			this->label1->Visible = false;
		}
		
	}


	private: System::Void pictureBox_colormapORpalette_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void 色彩選項ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->RGBpanel->Visible == false) {
			RGBpanel->Visible = true;
		}
		else {
			RGBpanel->Visible = false;
		}
		
	}

	private: System::Void origin_Click(System::Object^ sender, System::EventArgs^ e) {
		Display = source;
		this->pictureBox_show->Image = source;
		SNR();
	}
	private: System::Void show_R_Click(System::Object^ sender, System::EventArgs^ e) {	
		Display = Generate_R();		
		this->pictureBox_show->Image = Display;
		SNR();
	}
	public:Bitmap^ Generate_R() {
		Bitmap^ R = gcnew Bitmap(source->Width, source->Height);
		for (int i = 0; i < source->Width; i++) {
			for (int j = 0; j < source->Height; j++) {
				R->SetPixel(i, j, Color::FromArgb((source->GetPixel(i, j).R), 0, 0));
			}
		}
		return R;
	}
	private: System::Void show_G_Click(System::Object^ sender, System::EventArgs^ e) {
		Display = Generate_G();
		this->pictureBox_show->Image = Display;
		SNR();
	}
	public:Bitmap^ Generate_G() {
		Bitmap^ G = gcnew Bitmap(source->Width, source->Height);
		for (int i = 0; i < source->Width; i++) {
			for (int j = 0; j < source->Height; j++) {
				G->SetPixel(i, j, Color::FromArgb(0, (source->GetPixel(i, j).G), 0));
			}
		}
		return G;
	}

	private: System::Void show_B_Click(System::Object^ sender, System::EventArgs^ e) {
		Display = Generate_B();
		this->pictureBox_show->Image = Display;
		SNR();
	}
	public:Bitmap^ Generate_B() {
		Bitmap^ B = gcnew Bitmap(source->Width, source->Height);
		for (int i = 0; i < source->Width; i++) {
			for (int j = 0; j < source->Height; j++) {
				B->SetPixel(i, j, Color::FromArgb(0, 0, (source->GetPixel(i, j).B)));
			}
		}
		return B;
	}

	// RGB invert
	private: System::Void rGBInvertToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ RGB_Invert;
		RGB_Invert = gcnew Bitmap(source->Width, source->Height);
		for (int i = 0; i < source->Width; i++) {
			for (int j = 0; j < source->Height; j++) {
				RGB_Invert->SetPixel(i, j, Color::FromArgb(-(source->GetPixel(i, j).R) + 255, -(source->GetPixel(i, j).G) + 255, -(source->GetPixel(i, j).B) + 255));
			}
		}
		Display = RGB_Invert;
		pictureBox_show->Image = Display;
		SNR();
	}

	private: System::Void 灰階ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OriginGray = Gary();
		Display = OriginGray;
		pictureBox_show->Image = Display;
		SNR();
	}	
	public: Bitmap^ Gary() {
		Bitmap^ Gary = gcnew Bitmap(source->Width, source->Height);
		for (int i = 0; i < source->Width; i++) {
			for (int j = 0; j < source->Height; j++) {
				int pixel = ((source->GetPixel(i, j).R) * 0.299 + (source->GetPixel(i, j).G) * 0.587 + (source->GetPixel(i, j).B) * 0.114);
				Gary->SetPixel(i, j, Color::FromArgb(pixel, pixel, pixel));
			}
		}
		return Gary;		
	}

	private: System::Void 負片ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Display = GaryInvert();
		pictureBox_show->Image = Display;
		SNR();
	}
	public: Bitmap^ GaryInvert() {
		Bitmap^ GaryInvert = gcnew Bitmap(source->Width, source->Height);
		for (int i = 0; i < source->Width; i++) {
			for (int j = 0; j < source->Height; j++) {
				int pixel = 255 - ((source->GetPixel(i, j).R) * 0.114 + (source->GetPixel(i, j).G) * 0.587 + (source->GetPixel(i, j).B) * 0.299);
				GaryInvert->SetPixel(i, j, Color::FromArgb(pixel, pixel, pixel));
			}
		}
		return GaryInvert;
	}

	public: double RGBtoHSI(int a) {
		double R, G, B;
		double HV, SV, IV, den, theta;
		Bitmap^ H = gcnew Bitmap(source->Width, source->Height);
		Bitmap^ S = gcnew Bitmap(source->Width, source->Height);
		Bitmap^ I = gcnew Bitmap(source->Width, source->Height);
		for (int i = 0; i < source->Width; i++) {
			for (int j = 0; j < source->Height; j++) {
				R = (source->GetPixel(i, j).R);
				G = (source->GetPixel(i, j).G);
				B = (source->GetPixel(i, j).B);
				
				R = R / 255;
				G = G / 255;
				B = B / 255;

				den = 2 * sqrt((R - G) * (R - G) + (R - B) * (G - B));
				theta = Math::Acos(((R - G) + (R - B)) / den);

				if (den == 0) {
					HV = 0;
				}
				else if (G >= B) {
					HV = theta / (Math::PI * 2);
				}
				else {
					HV = ((2 * Math::PI) - theta) / (2 * Math::PI);
				}

				SV = 1 - 3 * Math::Min(R, Math::Min(G, B)) / (R + G + B);
				IV = (R + G + B) / 3;

				Color Hshow = Color::FromArgb(HV * 255, SV * 255, IV * 255);
				Color Sshow = Color::FromArgb(SV * 255, SV * 255, SV * 255);
				Color Ishow = Color::FromArgb(HV * 255, SV * 255, IV * 255);
				H->SetPixel(i, j, Hshow);
				S->SetPixel(i, j, Sshow);
				I->SetPixel(i, j, Ishow);

			}	
		}
		if (a == 1) {
			return HV * 255;
		}
		else if (a == 2) {
			return SV * 255;
		}
		else if (a == 3) {
			return IV * 255;
		}
		
	}



	// zoom
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->groupBox1->Visible == false) {
			this->groupBox1->Visible = true;
		}
		else {
			this->groupBox1->Visible = false;
		}
		
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double times = System::Convert::ToDouble(textBox1->Text);
		if (this->checkBox1->Checked == true && (this->checkBox2->Checked == false)) {
			Bitmap^ simplezoomin = gcnew Bitmap(times * Display->Width, times * Display->Height);
			for (int i = 0; i < simplezoomin->Width; i++) {
				for (int j = 0; j < simplezoomin->Height; j++) {
					if ((i % int(times)) == 0) {
						if ((j % int(times)) == 0) {
							Color set = Display->GetPixel(i / times, j / times);
							simplezoomin->SetPixel(i, j, set);
						}
						else {
							Color set = simplezoomin->GetPixel(i, j - 1);
							simplezoomin->SetPixel(i, j, set);
						}
					}
					else {
						Color set = simplezoomin->GetPixel(i - 1, j);
						simplezoomin->SetPixel(i, j, set);
					}
				}
			}
			Display = simplezoomin;
			pictureBox_show->Image = Display;
			this->panel1->Location = Point(pictureBox_show->Location.X + Display->Width + 50, this->panel1->Location.Y);
			SNR();
		}
		else if ((this->checkBox1->Checked == false) && this->checkBox2->Checked == true) {
			double times = System::Convert::ToDouble(textBox1->Text);
			Bitmap^ linearzoomin = gcnew Bitmap(times * Display->Width, times * Display->Height);
			for (int i = 0; i < linearzoomin->Width; i += 2) {
				for (int j = 0; j < linearzoomin->Height; j += 2) {
					Color set = Display->GetPixel(i / times, j / times);
					linearzoomin->SetPixel(i, j, set);
				}
			}

			for (int i = 0; i < linearzoomin->Width; i += 2) {
				for (int j = 1; j < linearzoomin->Height; j += 2) {
					int R, G, B;
					if (j != (linearzoomin->Height - 1)) {
						R = (linearzoomin->GetPixel(i, j - 1).R + linearzoomin->GetPixel(i, j + 1).R) / 2;
						G = (linearzoomin->GetPixel(i, j - 1).G + linearzoomin->GetPixel(i, j + 1).G) / 2;
						B = (linearzoomin->GetPixel(i, j - 1).B + linearzoomin->GetPixel(i, j + 1).B) / 2;
						Color set = Color::FromArgb(R, G, B);
						linearzoomin->SetPixel(i, j, set);
					}
					else {
						Color set = linearzoomin->GetPixel(i, j - 1);
						linearzoomin->SetPixel(i, j, set);
					}

				}
			}

			for (int i = 1; i < linearzoomin->Width; i += 2) {
				for (int j = 0; j < linearzoomin->Height; j += 2) {
					int R, G, B;
					if (i != (linearzoomin->Width - 1)) {
						R = (linearzoomin->GetPixel(i - 1, j).R + linearzoomin->GetPixel(i + 1, j).R) / 2;
						G = (linearzoomin->GetPixel(i - 1, j).G + linearzoomin->GetPixel(i + 1, j).G) / 2;
						B = (linearzoomin->GetPixel(i - 1, j).B + linearzoomin->GetPixel(i + 1, j).B) / 2;
						Color set = Color::FromArgb(R, G, B);
						linearzoomin->SetPixel(i, j, set);
					}
					else {
						Color set = linearzoomin->GetPixel(i - 1, j);
						linearzoomin->SetPixel(i, j, set);
					}

				}
			}

			for (int i = 1; i < linearzoomin->Width; i += 2) {
				for (int j = 1; j < linearzoomin->Height; j += 2) {
					int R, G, B;
					if ((i != (linearzoomin->Width - 1)) && (j != (linearzoomin->Height - 1))) {
						R = (linearzoomin->GetPixel(i - 1, j - 1).R + linearzoomin->GetPixel(i - 1, j + 1).R + linearzoomin->GetPixel(i + 1, j - 1).R + linearzoomin->GetPixel(i + 1, j + 1).R) / 4;
						G = (linearzoomin->GetPixel(i - 1, j - 1).G + linearzoomin->GetPixel(i - 1, j + 1).G + linearzoomin->GetPixel(i + 1, j - 1).G + linearzoomin->GetPixel(i + 1, j + 1).G) / 4;
						B = (linearzoomin->GetPixel(i - 1, j - 1).B + linearzoomin->GetPixel(i - 1, j + 1).B + linearzoomin->GetPixel(i + 1, j - 1).B + linearzoomin->GetPixel(i + 1, j + 1).B) / 4;
						Color set = Color::FromArgb(R, G, B);
						linearzoomin->SetPixel(i, j, set);
					}
					else if (j == (linearzoomin->Height - 1)) {
						Color set = linearzoomin->GetPixel(i, j - 1);
						linearzoomin->SetPixel(i, j, set);
					}
					else {
						Color set = linearzoomin->GetPixel(i - 1, j);
						linearzoomin->SetPixel(i, j, set);
					}

				}
			}
			Display = linearzoomin;
			pictureBox_show->Image = Display;
			this->panel1->Location = Point(pictureBox_show->Location.X + Display->Width + 50, this->panel1->Location.Y);
			SNR();
		}

	}	

	private: System::Void buttonzoonout_Click(System::Object^ sender, System::EventArgs^ e) {
		double times = System::Convert::ToDouble(textBox2->Text);
		if (this->checkBox3->Checked == true && this->checkBox4->Checked == false) {
			Bitmap^ zoomout = gcnew Bitmap(Display->Width / times, Display->Height / times);
			times = int(times);
			for (int i = 0; i < zoomout->Width; i++) {
				for (int j = 0; j < zoomout->Height; j++) {
					Color get = Display->GetPixel(i * times, j * times);
					zoomout->SetPixel(i, j, get);
				}
			}
			Display = zoomout;
			pictureBox_show->Image = Display;
			this->panel1->Location = Point(pictureBox_show->Location.X + Display->Width + 50, this->panel1->Location.Y);
			SNR();
		}
		else if (this->checkBox4->Checked == true && this->checkBox3->Checked == false) {
			Bitmap^ zoomout = gcnew Bitmap(Display->Width / times, Display->Height / times);
			int new_w = Display->Width % int(times);
			int new_h = Display->Height % int(times);
			for (int i = 0; i < Display->Width - new_w; i = i + times) {
				for (int j = 0; j < Display->Height - new_h; j = j + times) {
					int R = 0,  G = 0, B = 0, ave_R, ave_G, ave_B;
					for (int x = 0; x < times; x = x + 1) {
						for (int y = 0; y < times; y = y + 1) {
							R += (Display->GetPixel(i + x, j + y).R);
							G += (Display->GetPixel(i + x, j + y).G);
							B += (Display->GetPixel(i + x, j + y).B);
						}
					}
					ave_R = R / (times + times);
					ave_G = G / (times + times);
					ave_B = B / (times + times);
					Color set = Color::FromArgb(ave_R, ave_G, ave_B);
					zoomout->SetPixel(i / times, j / times, set);
				}
			}
			Display = zoomout;
			pictureBox_show->Image = Display;
			this->panel1->Location = Point(pictureBox_show->Location.X + Display->Width + 50, this->panel1->Location.Y);
			SNR();
		}
	
	}

	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (groupBox2->Visible == false) {
			groupBox2->Visible = true;
		}
		else {
			groupBox2->Visible = false;
		}
	}

	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		
		if (this->comboBox3->Text == "正推") {
			double	degree = trackBar1->Value;
			this->textBox3->Text = String::Concat(trackBar1->Value);
			double rad = degree * 0.01745329252; 

			int NewWidth, NewHeight;
			NewWidth = (int)(abs(Display->Width * cos(rad)) + abs(Display->Height * sin(rad)));
			NewHeight = (int)(abs(Display->Width * sin(rad)) + abs(Display->Height * cos(rad)));

			//make a new paper
			Bitmap^ rotate = gcnew Bitmap(NewWidth, NewHeight);												
			for (int i = 0; i < NewWidth; i++) {
				for (int j = 0; j < NewHeight; j++) {
					rotate->SetPixel(i, j, Color::Color::FromArgb(255, 255, 255));
				}
			}

			int x2, y2;			//新座標																					
			for (float x1 = (-(Display->Width)) / 2 + 0.5; x1 <= (Display->Width) / 2 - 0.5; x1++) {						
				for (float y1 = (-(Display->Height)) / 2 + 0.5; y1 <= (Display->Height) / 2 - 0.5; y1++) {						
					x2 = (int)((x1 * cos(rad)) - (y1 * sin(rad)) + (rotate->Width / 2) - 0.5);									
					y2 = (int)((x1 * sin(rad)) + (y1 * cos(rad)) + (rotate->Width / 2) - 0.5);							
					Color new_loc = Display->GetPixel(x1 + (Display->Width) / 2 - 0.5, y1 + (Display->Height) / 2 - 0.5);	
					rotate->SetPixel(x2, y2, new_loc);																		
				}
			}
			pictureBox_show->Image = rotate;
		}

		else if (this->comboBox3->Text == "逆推") {
			double theta = trackBar1->Value;
			this->textBox3->Text = String::Concat(trackBar1->Value);
			theta = theta * 0.01745329252;

			int NewWidth, NewHeight;
			NewWidth = (int)(abs(Display->Width * cos(theta)) + abs(Display->Height * sin(theta)));
			NewHeight = (int)(abs(Display->Width * sin(theta)) + abs(Display->Height * cos(theta)));

			Bitmap^ rotate = gcnew Bitmap(NewWidth, NewHeight);												
			for (int i = 0; i < NewWidth; i++) {
				for (int j = 0; j < NewHeight; j++) {
					rotate->SetPixel(i, j, Color::Color::FromArgb(255, 255, 255));
				}
			}
			int x2, y2;																						//此時的x2，y2為原圖的座標
			for (float x1 = (-(rotate->Width)) / 2 + 0.5; x1 <= (rotate->Width) / 2 - 0.5; x1++) {			//注意這裡是讀取旋轉後的圖
				for (float y1 = (-(rotate->Height)) / 2 + 0.5; y1 <= (rotate->Height) / 2 - 0.5; y1++) {
					x2 = (int)((x1 * cos(theta)) + (y1 * sin(theta)));										//旋轉負角度，新圖轉至原圖
					y2 = (int)(-(x1 * sin(theta)) + (y1 * cos(theta)));
					if (x2 >= (-(Display->Width / 2) + 0.5) && x2 <= ((Display->Width / 2) - 0.5) && y2 >= (-(Display->Height / 2) + 0.5) && y2 <= ((Display->Height / 2) - 0.5)) {
						Color ori_loc = Display->GetPixel(x2 + (Display->Width / 2) - 0.5, y2 + (Display->Width / 2) - 0.5);
						rotate->SetPixel(x1 + (rotate->Width / 2) - 0.5, y1 + (rotate->Height / 2) - 0.5, ori_loc);
					}
				}
			}
			pictureBox_show->Image = rotate;
		}
	
	}

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		double theta;
		if (this->comboBox3->Text == "正推") {
			if (textBox3->Text == "") {
				theta = 0;
			}
			else {
				theta = System::Convert::ToInt32(textBox3->Text) % 360;
			}
			
			this->trackBar1->Value = theta;
			theta = theta * 0.01745329252;

			int NewWidth, NewHeight;
			NewWidth = (int)(abs(Display->Width * cos(theta)) + abs(Display->Height * sin(theta)));
			NewHeight = (int)(abs(Display->Width * sin(theta)) + abs(Display->Height * cos(theta)));

			Bitmap^ rotate = gcnew Bitmap(NewWidth, NewHeight);												//顯示背景pictureBox的大小(白底)
			for (int i = 0; i < NewWidth; i++) {
				for (int j = 0; j < NewHeight; j++) {
					rotate->SetPixel(i, j, Color::Color::FromArgb(255, 255, 255));
				}
			}

			int x2, y2;			//新座標																					//x2，y2為新圖座標
			for (float x1 = (-(Display->Width)) / 2 + 0.5; x1 <= (Display->Width) / 2 - 0.5; x1++) {						//平移座標，將原點從左上角移至原圖中心
				for (float y1 = (-(Display->Height)) / 2 + 0.5; y1 <= (Display->Height) / 2 - 0.5; y1++) {					//轉換後圖片讀取 x 軸從-127.5~127.5	
					x2 = (int)((x1 * cos(theta)) - (y1 * sin(theta)) + (rotate->Width / 2) - 0.5);							//旋轉後到新的pictureBox(rotate)，加上座標的平移(此時座標原點在左上角)		
					y2 = (int)((x1 * sin(theta)) + (y1 * cos(theta)) + (rotate->Width / 2) - 0.5);							//旋轉正角度
					Color new_loc = Display->GetPixel(x1 + (Display->Width) / 2 - 0.5, y1 + (Display->Height) / 2 - 0.5);	//抓取pixel位置從左上角(-127.5,-127.5)開始，
					rotate->SetPixel(x2, y2, new_loc);																		//因此是原座標(0,0)
				}
			}
			pictureBox_show->Image = rotate;
		}
		else if (this->comboBox3->Text == "逆推") {

			if (textBox3->Text == "") {
				theta = 0;
			}
			else {
				theta = System::Convert::ToInt32(textBox3->Text) % 360;
			}

			this->trackBar1->Value = theta;
			theta = theta * 0.01745329252;

			int NewWidth, NewHeight;
			NewWidth = (int)(abs(Display->Width * cos(theta)) + abs(Display->Height * sin(theta)));
			NewHeight = (int)(abs(Display->Width * sin(theta)) + abs(Display->Height * cos(theta)));

			Bitmap^ rotate = gcnew Bitmap(NewWidth, NewHeight);												//顯示背景pictureBox的大小(白底)
			for (int i = 0; i < NewWidth; i++) {
				for (int j = 0; j < NewHeight; j++) {
					rotate->SetPixel(i, j, Color::FromArgb(255, 255, 255));
				}
			}
			int x2, y2;																						//此時的x2，y2為原圖的座標
			for (float x1 = (-(rotate->Width)) / 2 + 0.5; x1 <= (rotate->Width) / 2 - 0.5; x1++) {			//注意這裡是讀取旋轉後的圖
				for (float y1 = (-(rotate->Height)) / 2 + 0.5; y1 <= (rotate->Height) / 2 - 0.5; y1++) {
					x2 = (int)((x1 * cos(theta)) + (y1 * sin(theta)));										//旋轉負角度，新圖轉至原圖
					y2 = (int)(-(x1 * sin(theta)) + (y1 * cos(theta)));
					//假設旋轉後，原圖在pictureBox內則上色
					if (x2 >= (-(Display->Width / 2) + 0.5) && x2 <= ((Display->Width / 2) - 0.5) && y2 >= (-(Display->Height / 2) + 0.5) && y2 <= ((Display->Height / 2) - 0.5)) {
						Color ori_loc = Display->GetPixel(x2 + (Display->Width / 2) - 0.5, y2 + (Display->Width / 2) - 0.5);
						rotate->SetPixel(x1 + (rotate->Width / 2) - 0.5, y1 + (rotate->Height / 2) - 0.5, ori_loc);
					}
				}
			}
			pictureBox_show->Image = rotate;
		}
	}

	// Cut
	private: System::Void cutToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Cut^ cut = gcnew Cut;
		cut->scr = source;
		cut->pictureBox1->Image = source;
		cut->Show();
	}
	// Overlap
	private: System::Void overlapToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Overlap^ overlap = gcnew Overlap;
		overlap->Show();
	}
	// Transparency
	private: System::Void transparencyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Transparent^ cn = gcnew Transparent;
		cn->src2 = source;
		cn->pictureBox2->Image = source;
		cn->Show();
	}
	// Brightness
	private: System::Void brightnesstoolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Lightness^ light = gcnew Lightness;
		light->lightness_picturebox = source;
		light->pictureBox1->Image = source;
		if (groupBox3->Visible == false) {
			groupBox3->Visible = true;
		}
		else {
			groupBox3->Visible = false;
		}
	}
	// for bright function
	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
		int value = trackBar2->Value;
		this->numericUpDown2->Text = String::Concat(value);
		Bitmap^ lightness_pic = gcnew Bitmap(Display->Width, Display->Height);
		float r, g, b;
		if (value > 0) {
			for (int i = 0; i < Display->Width; i++) {
				for (int j = 0; j < Display->Height; j++) {
					r = Display->GetPixel(i, j).R * (100 - value) / 100 + 255 * value / 100;
					g = Display->GetPixel(i, j).G * (100 - value) / 100 + 255 * value / 100;
					b = Display->GetPixel(i, j).B * (100 - value) / 100 + 255 * value / 100;
					Color set = Color::FromArgb(r, g, b);
					lightness_pic->SetPixel(i, j, set);
				}
			}
			pictureBox_show->Image = lightness_pic;
			SNR();
		}
		else if (value < 0) {
			for (int i = 0; i < Display->Width; i++) {
				for (int j = 0; j < Display->Height; j++) {
					r = Display->GetPixel(i, j).R * (100 + value) / 100 + 0 * -value / 100;
					g = Display->GetPixel(i, j).G * (100 + value) / 100 + 0 * -value / 100;
					b = Display->GetPixel(i, j).B * (100 + value) / 100 + 0 * -value / 100;
					Color set = Color::FromArgb(r, g, b);
					lightness_pic->SetPixel(i, j, set);
				}
			}
			pictureBox_show->Image = lightness_pic;
			SNR();
		}
		else if (value = 0) {
			pictureBox_show->Image = Display;
			SNR();
		}
	}
	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		int value = System::Convert::ToInt32(numericUpDown2->Value);
		trackBar2->Value = value;
		Bitmap^ lightness_pic = gcnew Bitmap(Display->Width, Display->Height);
		float r, g, b;
		if (value > 0) {
			for (int i = 0; i < Display->Width; i++) {
				for (int j = 0; j < Display->Height; j++) {
					r = Display->GetPixel(i, j).R * (100 - value) / 100 + 255 * value / 100;
					g = Display->GetPixel(i, j).G * (100 - value) / 100 + 255 * value / 100;
					b = Display->GetPixel(i, j).B * (100 - value) / 100 + 255 * value / 100;
					Color set = Color::FromArgb(r, g, b);
					lightness_pic->SetPixel(i, j, set);
				}
			}
			pictureBox_show->Image = lightness_pic;
			SNR();
		}
		else if (value < 0) {
			for (int i = 0; i < Display->Width; i++) {
				for (int j = 0; j < Display->Height; j++) {
					r = Display->GetPixel(i, j).R * (100 + value) / 100 + 0 * -value / 100;
					g = Display->GetPixel(i, j).G * (100 + value) / 100 + 0 * -value / 100;
					b = Display->GetPixel(i, j).B * (100 + value) / 100 + 0 * -value / 100;
					Color set = Color::FromArgb(r, g, b);
					lightness_pic->SetPixel(i, j, set);

				}
			}
			pictureBox_show->Image = lightness_pic;
			SNR();
		}
		else if (value = 0) {
			pictureBox_show->Image = Display;
			SNR();
		}
	}

	// Threshold
	private: System::Void toolStripButton2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Threshold^ threshold = gcnew Threshold;
		threshold->scr1 = source;
		threshold->Show();
	}
	// Gary code
	private: System::Void grayCodeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Graycode^ graycode = gcnew Graycode;
		graycode->scr1_gray = OriginGray;
		graycode->pictureBox1->Image = OriginGray;
		graycode->Show();
	}
	// bit plane watermark
	private: System::Void birPlaneWatermarkToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BitPlane^ Bitplane = gcnew BitPlane;
		Bitplane->scr1 = this->OriginGray;
		Bitplane->pictureBox1->Image = OriginGray;
		Bitplane->Show();
	}
	// Color bit depth
	private: System::Void colorBitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BitDepth^ colorbitdepth = gcnew BitDepth;
		colorbitdepth->pictureBox1->Image = source;
		colorbitdepth->scr1 = source;
		colorbitdepth->Show();
	}
	// Histogram
	private: System::Void histogramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Histogram^ histogram = gcnew Histogram;
		histogram->scr = source;
		histogram->scr_gray = OriginGray;
		histogram->pictureBox1->Image = source;
		histogram->Show();
	}
	// Histogram equalizaion
	private: System::Void histogramEqualizationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		HistogramEqualization^ equalization = gcnew HistogramEqualization;
		equalization->scr1 = source;
		equalization->pictureBox1->Image = source;
		equalization->Show();
	}
	// Histogram specification
	private: System::Void histogramSpecificatioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		HistogramSpecification^ specification = gcnew HistogramSpecification;
		specification->scr1 = source;
		specification->Show();
	}
	// Ball
	private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		Ball^ ball = gcnew Ball;
		ball->Show();
	}
	// Contraset
	private: System::Void contrastToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ContrastSet^ set = gcnew ContrastSet;
		set->scr_gray = OriginGray;
		set->Show();
	}
	// Connect
	private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		Connected8^ connect8 = gcnew Connected8;
		connect8->scr_gray = OriginGray;
		connect8->Show();
	}
	// Filter
	private: System::Void Filter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->panel1->Visible == false) {
			this->panel1->Visible = true;
		}
		else {
			this->panel1->Visible = false;
		}
		long long sum_pixel = 0, avg_all = 0;

		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				sum_pixel = sum_pixel + Display->GetPixel(i, j).R;
			}
		}
		avg_all = sum_pixel / (Display->Width * Display->Height);
		long long sum = 0;
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				sum = sum + pow((Display->GetPixel(i, j).R - avg_all), 2);
			}
		}
		sigma = sqrt(sum / (Display->Width * Display->Height));

	}
	// Origin picture
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Display = OriginGray;
		this->pictureBox_show->Image = Display;
		SNR2();
	}
	// Pseudo filter
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ extend_3 = gcnew Bitmap(Display->Width + 2, Display->Height + 2);
		for (int i = 0; i < extend_3->Width; i++) {
			for (int j = 0; j < extend_3->Height; j++) {
				if ((i >= 1) && (j >= 1) && (i < extend_3->Width - 1) && (j < extend_3->Height - 1)) {
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, j - 1));
				}
				else if ((i < 1) && (j >= 1) && (j < extend_3->Height - 1)) {								//放大圖圖形左邊
					extend_3->SetPixel(i, j, Display->GetPixel(0, j - 1));
				}
				else if ((j >= 1) && (j < extend_3->Height - 1) && (i >= extend_3->Width - 1)) {		//放大圖圖形右邊
					extend_3->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j - 1));
				}
				else if ((i >= 1) && (i < extend_3->Width - 1) && (j < 1)) {								//放大圖圖形上面
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, 0));
				}
				else if ((i >= 1) && (i < extend_3->Width - 1) && (j >= extend_3->Height - 1)) {		//放大圖圖形下面
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_3->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		Bitmap^ extend_5 = gcnew Bitmap(Display->Width + 4, Display->Height + 4);
		for (int i = 0; i < extend_5->Width; i++) {
			for (int j = 0; j < extend_5->Height; j++) {
				if ((i >= 2) && (j >= 2) && (i < extend_5->Width - 2) && (j < extend_5->Height - 2)) {
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, j - 2));
				}
				else if ((i < 2) && (j >= 2) && (j < extend_5->Height - 2)) {								//放大圖圖形左邊
					extend_5->SetPixel(i, j, Display->GetPixel(0, j - 2));
				}
				else if ((j >= 2) && (j < extend_5->Height - 2) && (i >= extend_5->Width - 2)) {		//放大圖圖形右邊
					extend_5->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j - 2));
				}
				else if ((i >= 2) && (i < extend_5->Width - 2) && (j < 2)) {								//放大圖圖形上面
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, 0));
				}
				else if ((i >= 2) && (i < extend_5->Width - 2) && (j >= extend_5->Height - 2)) {		//放大圖圖形下面
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_5->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		if (radioButton1->Checked == true) {
			Bitmap^ Pseudo_3 = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 1; i < extend_3->Width - 1; i++) {
				for (int j = 1; j < extend_3->Height - 1; j++) {
					int horizontal[3] = { 0 }, vertical[3] = { 0 }, a = 0, b = 0, temp = 0;
					int vertical_first = 0;
					for (int m = -1; m <= 1; m++) {
						a = 0;
						for (int n = -1; n <= 1; n++) {
							vertical[a] = extend_3->GetPixel(i + m, j + n).R;
							a++;
						}
						temp = 0;
						for (int o = 0; o < 3; o++) {
							for (int p = o; p < 3; p++) {
								if (vertical[o] > vertical[p]) {
									temp = vertical[p];
									vertical[p] = vertical[o];
									vertical[o] = temp;
								}
							}
						}
						horizontal[b] = vertical[1];
						b++;
					}
					temp = 0;
					for (int o = 0; o < 3; o++) {
						for (int p = o; p < 3; p++) {
							if (horizontal[o] > horizontal[p]) {
								temp = horizontal[p];
								horizontal[p] = horizontal[o];
								horizontal[o] = temp;
							}
						}
					}
					vertical_first = horizontal[1];


					horizontal[3] = { 0 }, vertical[3] = { 0 }, a = 0, b = 0, temp = 0;
					int horizontal_first = 0;
					for (int n = -1; n <= 1; n++) {
						a = 0;
						for (int m = -1; m <= 1; m++) {
							horizontal[a] = extend_3->GetPixel(i + m, j + n).R;
							a++;
						}
						temp = 0;
						for (int o = 0; o < 3; o++) {
							for (int p = o; p < 3; p++) {
								if (horizontal[o] > horizontal[p]) {
									temp = horizontal[p];
									horizontal[p] = horizontal[o];
									horizontal[o] = temp;
								}
							}
						}
						vertical[b] = horizontal[1];
						b++;
					}
					temp = 0;
					for (int o = 0; o < 3; o++) {
						for (int p = o; p < 3; p++) {
							if (vertical[o] > vertical[p]) {
								temp = vertical[p];
								vertical[p] = vertical[o];
								vertical[o] = temp;
							}
						}
					}
					horizontal_first = vertical[1];

					int set = (horizontal_first + vertical_first) / 2;

					Pseudo_3->SetPixel(i - 1, j - 1, Color::FromArgb(set, set, set));
				}
			}
			Display = Pseudo_3;
			pictureBox_show->Image = Display;
			SNR2();
		}
		else if (radioButton2->Checked == true) {
			Bitmap^ Pseudo_5 = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 2; i < extend_5->Width - 2; i++) {
				for (int j = 2; j < extend_5->Height - 2; j++) {
					int horizontal[5] = { 0 }, vertical[5] = { 0 }, a = 0, b = 0, temp = 0;
					int vertical_first = 0;
					for (int m = -2; m <= 2; m++) {
						a = 0;
						for (int n = -2; n <= 2; n++) {
							vertical[a] = extend_5->GetPixel(i + m, j + n).R;
							a++;
						}
						temp = 0;
						for (int o = 0; o < 5; o++) {
							for (int p = o; p < 5; p++) {
								if (vertical[o] > vertical[p]) {
									temp = vertical[p];
									vertical[p] = vertical[o];
									vertical[o] = temp;
								}
							}
						}
						horizontal[b] = vertical[2];
						b++;
					}
					temp = 0;
					for (int o = 0; o < 5; o++) {
						for (int p = o; p < 5; p++) {
							if (horizontal[o] > horizontal[p]) {
								temp = horizontal[p];
								horizontal[p] = horizontal[o];
								horizontal[o] = temp;
							}
						}
					}
					vertical_first = horizontal[2];


					horizontal[5] = { 0 }, vertical[5] = { 0 }, a = 0, b = 0, temp = 0;
					int horizontal_first = 0;
					for (int n = -2; n <= 2; n++) {
						a = 0;
						for (int m = -2; m <= 2; m++) {
							horizontal[a] = extend_5->GetPixel(i + m, j + n).R;
							a++;
						}
						temp = 0;
						for (int o = 0; o < 5; o++) {
							for (int p = o; p < 5; p++) {
								if (horizontal[o] > horizontal[p]) {
									temp = horizontal[p];
									horizontal[p] = horizontal[o];
									horizontal[o] = temp;
								}
							}
						}
						vertical[b] = horizontal[2];
						b++;
					}
					temp = 0;
					for (int o = 0; o < 5; o++) {
						for (int p = o; p < 5; p++) {
							if (vertical[o] > vertical[p]) {
								temp = vertical[p];
								vertical[p] = vertical[o];
								vertical[o] = temp;
							}
						}
					}
					horizontal_first = vertical[2];

					int set = (horizontal_first + vertical_first) / 2;

					Pseudo_5->SetPixel(i - 2, j - 2, Color::FromArgb(set, set, set));
				}
			}
			Display = Pseudo_5;
			pictureBox_show->Image = Pseudo_5;
			SNR2();
		}
	}
	// Median filter square
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ extend_3 = gcnew Bitmap(Display->Width + 2, Display->Height + 2);
		for (int i = 0; i < extend_3->Width; i++) {
			for (int j = 0; j < extend_3->Height; j++) {
				if ((i >= 1) && (j >= 1) && (i < extend_3->Width - 1) && (j < extend_3->Height - 1)) {
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, j - 1));
				}
				else if ((i < 1) && (j >= 1) && (j < extend_3->Height - 1)) {								//放大圖圖形左邊
					extend_3->SetPixel(i, j, Display->GetPixel(0, j - 1));
				}
				else if ((j >= 1) && (j < extend_3->Height - 1) && (i >= extend_3->Width - 1)) {		//放大圖圖形右邊
					extend_3->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j - 1));
				}
				else if ((i >= 1) && (i < extend_3->Width - 1) && (j < 1)) {								//放大圖圖形上面
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, 0));
				}
				else if ((i >= 1) && (i < extend_3->Width - 1) && (j >= extend_3->Height - 1)) {		//放大圖圖形下面
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_3->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		Bitmap^ extend_5 = gcnew Bitmap(Display->Width + 4, Display->Height + 4);
		for (int i = 0; i < extend_5->Width; i++) {
			for (int j = 0; j < extend_5->Height; j++) {
				if ((i >= 2) && (j >= 2) && (i < extend_5->Width - 2) && (j < extend_5->Height - 2)) {
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, j - 2));
				}
				else if ((i < 2) && (j >= 2) && (j < extend_5->Height - 2)) {								//放大圖圖形左邊
					extend_5->SetPixel(i, j, Display->GetPixel(0, j - 2));
				}
				else if ((j >= 2) && (j < extend_5->Height - 2) && (i >= extend_5->Width - 2)) {		//放大圖圖形右邊
					extend_5->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j - 2));
				}
				else if ((i >= 2) && (i < extend_5->Width - 2) && (j < 2)) {								//放大圖圖形上面
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, 0));
				}
				else if ((i >= 2) && (i < extend_5->Width - 2) && (j >= extend_5->Height - 2)) {		//放大圖圖形下面
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_5->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		
		if (radioButton1->Checked == true) {
			Bitmap^ median_square_3 = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 1; i < extend_3->Width - 1; i++) {
				for (int j = 1; j < extend_3->Height - 1; j++) {
					int row[9] = { 0 }, a = 0;
					for (int m = -1; m <= 1; m++) {
						for (int n = -1; n <= 1; n++) {
							row[a] = extend_3->GetPixel(i + m, j + n).R;
							a++;
						}
					}
					int temp = 0;
					for (int o = 0; o < 9; o++) {
						for (int p = o; p < 9; p++) {
							if (row[o] > row[p]) {
								temp = row[p];
								row[p] = row[o];
								row[o] = temp;
							}
						}
					}
					median_square_3->SetPixel(i - 1, j - 1, Color::FromArgb(row[4], row[4], row[4]));
				}
			}		
			Display = median_square_3;
			pictureBox_show->Image = Display;
			SNR2();
		}
		else if (radioButton2->Checked == true) {
			Bitmap^ median_square_5 = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 2; i < extend_5->Width - 2; i++) {
				for (int j = 2; j < extend_5->Height - 2; j++) {
					int row[25] = { 0 }, a = 0;
					for (int m = -2; m <= 2; m++) {
						for (int n = -2; n <= 2; n++) {
							row[a] = extend_5->GetPixel(i + m, j + n).R;
							a++;
						}
					}
					int temp = 0;
					for (int o = 0; o < 25; o++) {
						for (int p = o; p < 25; p++) {
							if (row[o] > row[p]) {
								temp = row[p];
								row[p] = row[o];
								row[o] = temp;
							}
						}
					}
					median_square_5->SetPixel(i - 2, j - 2, Color::FromArgb(row[12], row[12], row[12]));
				}
			}
			Display = median_square_5;
			pictureBox_show->Image = Display;
			SNR2();
		}
	}
	// Median filter cross
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ extend_3 = gcnew Bitmap(Display->Width + 2, Display->Height + 2);
		for (int i = 0; i < extend_3->Width; i++) {
			for (int j = 0; j < extend_3->Height; j++) {
				if ((i >= 1) && (j >= 1) && (i < extend_3->Width - 1) && (j < extend_3->Height - 1)) {
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, j - 1));
				}
				else if ((i < 1) && (j >= 1) && (j < extend_3->Height - 1)) {								//放大圖圖形左邊
					extend_3->SetPixel(i, j, Display->GetPixel(0, j - 1));
				}
				else if ((j >= 1) && (j < extend_3->Height - 1) && (i >= extend_3->Width - 1)) {		//放大圖圖形右邊
					extend_3->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j - 1));
				}
				else if ((i >= 1) && (i < extend_3->Width - 1) && (j < 1)) {								//放大圖圖形上面
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, 0));
				}
				else if ((i >= 1) && (i < extend_3->Width - 1) && (j >= extend_3->Height - 1)) {		//放大圖圖形下面
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_3->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		Bitmap^ extend_5 = gcnew Bitmap(Display->Width + 4, Display->Height + 4);
		for (int i = 0; i < extend_5->Width; i++) {
			for (int j = 0; j < extend_5->Height; j++) {
				if ((i >= 2) && (j >= 2) && (i < extend_5->Width - 2) && (j < extend_5->Height - 2)) {
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, j - 2));
				}
				else if ((i < 2) && (j >= 2) && (j < extend_5->Height - 2)) {								//放大圖圖形左邊
					extend_5->SetPixel(i, j, Display->GetPixel(0, j - 2));
				}
				else if ((j >= 2) && (j < extend_5->Height - 2) && (i >= extend_5->Width - 2)) {		//放大圖圖形右邊
					extend_5->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j - 2));
				}
				else if ((i >= 2) && (i < extend_5->Width - 2) && (j < 2)) {								//放大圖圖形上面
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, 0));
				}
				else if ((i >= 2) && (i < extend_5->Width - 2) && (j >= extend_5->Height - 2)) {		//放大圖圖形下面
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_5->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		if (radioButton1->Checked == true) {
			Bitmap^ median_cross_3 = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 1; i < extend_3->Width - 1; i++) {
				for (int j = 1; j < extend_3->Height - 1; j++) {
					int row[5] = { 0 };
					row[0] = extend_3->GetPixel(i, j - 1).R;
					row[1] = extend_3->GetPixel(i, j).R;
					row[2] = extend_3->GetPixel(i, j + 1).R;
					row[3] = extend_3->GetPixel(i - 1, j).R;
					row[4] = extend_3->GetPixel(i + 1, j).R;
					int temp = 0;
					for (int o = 0; o < 5; o++) {
						for (int p = o; p < 5; p++) {
							if (row[o] > row[p]) {
								temp = row[p];
								row[p] = row[o];
								row[o] = temp;
							}
						}
					}
					median_cross_3->SetPixel(i - 1, j - 1, Color::FromArgb(row[2], row[2], row[2]));
				}
			}
			Display = median_cross_3;
			pictureBox_show->Image = Display;
			SNR2();
		}
		else if (radioButton2->Checked == true) {
			Bitmap^ median_cross_5 = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 2; i < extend_5->Width - 2; i++) {
				for (int j = 2; j < extend_5->Height - 2; j++) {
					int row[9] = { 0 };
					row[0] = extend_5->GetPixel(i, j).R;
					row[1] = extend_5->GetPixel(i, j - 1).R;
					row[2] = extend_5->GetPixel(i, j + 1).R;
					row[3] = extend_5->GetPixel(i - 1, j).R;
					row[4] = extend_5->GetPixel(i + 1, j).R;
					row[5] = extend_5->GetPixel(i, j - 2).R;
					row[6] = extend_5->GetPixel(i, j + 2).R;
					row[7] = extend_5->GetPixel(i - 2, j).R;
					row[8] = extend_5->GetPixel(i + 2, j).R;
					int temp = 0;
					for (int o = 0; o < 9; o++) {
						for (int p = o; p < 9; p++) {
							if (row[o] > row[p]) {
								temp = row[p];
								row[p] = row[o];
								row[o] = temp;
							}
						}
					}
					median_cross_5->SetPixel(i - 2, j - 2, Color::FromArgb(row[4], row[4], row[4]));
				}
			}
			Display = median_cross_5;
			pictureBox_show->Image = Display;
			SNR2();
		}
	}
	// Low pass
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true) {
			float mask[9] = { 1,2,1,2,4,2,1,2,1 };
			Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 0; i < Display->Width; i++) {
				for (int j = 0; j < Display->Height; j++) {
					Color set = Display->GetPixel(i, j);
					process->SetPixel(i, j, set);
				}
			}

			Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
			for (int i = 0; i < New->Width; i++) {
				for (int j = 0; j < New->Height; j++) {
					if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
						Color set = process->GetPixel(process->Width - 1, j - 1);
						New->SetPixel(i, j, set);
					}
					else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
						Color set = process->GetPixel(0, j - 1);
						New->SetPixel(i, j, set);
					}
					else if ((j != 0) && (j != New->Height - 1)) {
						Color set = process->GetPixel(i - 1, j - 1);
						New->SetPixel(i, j, set);
					}
				}
			}
			for (int j = 0; j < New->Height; j += New->Height - 1) {
				for (int i = 0; i < New->Width; i++) {
					if (j == 0) {
						Color set = New->GetPixel(i, New->Height - 2);
						New->SetPixel(i, j, set);
					}
					else {
						Color set = New->GetPixel(i, 1);
						New->SetPixel(i, j, set);
					}

				}
			}

			int R, G, B;
			float sum1 = 0, sum2 = 0, sum3 = 0;
			int n = 0;
			for (int i = 1; i <= (New->Width - 2); i++) {
				for (int j = 1; j <= (New->Height - 2); j++) {
					for (int x = (i - 1); x <= (i + 1); x++) {
						for (int y = (j - 1); y <= (j + 1); y++) {
							sum1 += mask[n] * (New->GetPixel(x, y).R) / 16;
							sum2 += mask[n] * (New->GetPixel(x, y).G) / 16;
							sum3 += mask[n] * (New->GetPixel(x, y).B) / 16;
							n++;
						}
					}
					Color set = Color::FromArgb((int)sum1, (int)sum2, (int)sum3);
					sum1 = 0; sum2 = 0; sum3 = 0; n = 0;
					process->SetPixel(i - 1, j - 1, set);
				}
			}
			Display = process;
			pictureBox_show->Image = Display;
			SNR2();
		}
	}
	// High pass
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}

		Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(process->Width - 1, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(0, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((j != 0) && (j != New->Height - 1)) {
					Color set = process->GetPixel(i - 1, j - 1);
					New->SetPixel(i, j, set);
				}
			}
		}
		for (int j = 0; j < New->Height; j += New->Height - 1) {
			for (int i = 0; i < New->Width; i++) {
				if (j == 0) {
					Color set = New->GetPixel(i, New->Height - 2);
					New->SetPixel(i, j, set);
				}
				else {
					Color set = New->GetPixel(i, 1);
					New->SetPixel(i, j, set);
				}

			}
		}


		float sum1 = 0;
		float Max, Min;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if ((x == i) && (y == j)) {
							sum1 += (8 * Convert::ToDouble(New->GetPixel(x, y).R) / 9);
						}
						else {
							sum1 += -((New->GetPixel(x, y).R) / 9);
						}
					}
				}
				if (i == 1 && j == 1) {
					Max = sum1;
					Min = sum1;
				}
				if (sum1 >= Max) {
					Max = sum1;
				}
				else if (sum1 < Min) {
					Min = sum1;
				}
				sum1 = 0;
			}
		}


		sum1 = 0;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if ((x == i) && (y == j)) {
							sum1 += (8 * Convert::ToDouble(New->GetPixel(x, y).R) / 9);

						}
						else {
							sum1 += -((New->GetPixel(x, y).R) / 9);

						}
					}
				}
				sum1 = ((sum1 - Min) / (Max - Min)) * 255;
				Color set = Color::FromArgb((int)sum1, (int)sum1, (int)sum1);
				sum1 = 0;
				process->SetPixel(i - 1, j - 1, set);
			}
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();


	}
	// Hight boost
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}

		Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(process->Width - 1, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(0, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((j != 0) && (j != New->Height - 1)) {
					Color set = process->GetPixel(i - 1, j - 1);
					New->SetPixel(i, j, set);
				}
			}
		}
		for (int j = 0; j < New->Height; j += New->Height - 1) {
			for (int i = 0; i < New->Width; i++) {
				if (j == 0) {
					Color set = New->GetPixel(i, New->Height - 2);
					New->SetPixel(i, j, set);
				}
				else {
					Color set = New->GetPixel(i, 1);
					New->SetPixel(i, j, set);
				}

			}
		}

		float sum1 = 0;
		float Max, Min;
		float alpha;
		alpha = Convert::ToDouble(numericUpDown1->Value);
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if ((x == i) && (y == j)) {
							sum1 += ((9 * alpha - 1) * (New->GetPixel(x, y).R) / 9);
						}
						else {
							sum1 += -((New->GetPixel(x, y).R) / 9);
						}
					}
				}
				if (i == 1 && j == 1) {
					Max = sum1;
					Min = sum1;
				}
				if (sum1 >= Max) {
					Max = sum1;
				}
				else if (sum1 < Min) {
					Min = sum1;
				}
				sum1 = 0;
			}
		}


		sum1 = 0;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if ((x == i) && (y == j)) {
							sum1 += ((9 * alpha - 1) * (New->GetPixel(x, y).R) / 9);

						}
						else {
							sum1 += -((New->GetPixel(x, y).R) / 9);

						}
					}
				}
				sum1 = ((sum1 - Min) / (Max - Min)) * 255;
				Color set = Color::FromArgb((int)sum1, (int)sum1, (int)sum1);
				sum1 = 0;
				process->SetPixel(i - 1, j - 1, set);
			}
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();

	}
	// outlier
	public: void clasigma() {
		sigma = 0;
		//計算圖片標準差
		long long sum_pixel = 0, avg_all = 0;
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				sum_pixel = sum_pixel + Display->GetPixel(i, j).R;
			}
		}
		avg_all = sum_pixel / (Display->Width * Display->Height);
		long long sum = 0;
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				sum = sum + pow((Display->GetPixel(i, j).R - avg_all), 2);
			}
		}
		sigma = sqrt(sum / (Display->Width * Display->Height));
	}
	
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		clasigma();
		Bitmap^ extend_3 = gcnew Bitmap(Display->Width + 2, Display->Height + 2);
		for (int i = 0; i < extend_3->Width; i++) {
			for (int j = 0; j < extend_3->Height; j++) {
				if ((i >= 1) && (j >= 1) && (i < extend_3->Width - 1) && (j < extend_3->Height - 1)) {
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, j - 1));
				}
				else if ((i < 1) && (j >= 1) && (j < extend_3->Height - 1)) {								//放大圖圖形左邊
					extend_3->SetPixel(i, j, Display->GetPixel(0, j - 1));
				}
				else if ((j >= 1) && (j < extend_3->Height - 1) && (i >= extend_3->Width - 1)) {		//放大圖圖形右邊
					extend_3->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j - 1));
				}
				else if ((i >= 1) && (i < extend_3->Width - 1) && (j < 1)) {								//放大圖圖形上面
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, 0));
				}
				else if ((i >= 1) && (i < extend_3->Width - 1) && (j >= extend_3->Height - 1)) {		//放大圖圖形下面
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_3->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		Bitmap^ extend_5 = gcnew Bitmap(Display->Width + 4, Display->Height + 4);
		for (int i = 0; i < extend_5->Width; i++) {
			for (int j = 0; j < extend_5->Height; j++) {
				if ((i >= 2) && (j >= 2) && (i < extend_5->Width - 2) && (j < extend_5->Height - 2)) {
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, j - 2));
				}
				else if ((i < 2) && (j >= 2) && (j < extend_5->Height - 2)) {								//放大圖圖形左邊
					extend_5->SetPixel(i, j, Display->GetPixel(0, j - 2));
				}
				else if ((j >= 2) && (j < extend_5->Height - 2) && (i >= extend_5->Width - 2)) {		//放大圖圖形右邊
					extend_5->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j - 2));
				}
				else if ((i >= 2) && (i < extend_5->Width - 2) && (j < 2)) {								//放大圖圖形上面
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, 0));
				}
				else if ((i >= 2) && (i < extend_5->Width - 2) && (j >= extend_5->Height - 2)) {		//放大圖圖形下面
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_5->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		if (radioButton1->Checked == true) {
			Bitmap^ outlier_3 = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 1; i < extend_3->Width - 1; i++) {
				for (int j = 1; j < extend_3->Height - 1; j++) {
					int sum = 0;
					for (int m = -1; m <= 1; m++) {
						for (int n = -1; n <= 1; n++) {
							sum = sum + extend_3->GetPixel(i + m, j + n).R;
						}
					}
					int Average = round(sum - extend_3->GetPixel(i, j).R) / 8;
					if (abs(extend_3->GetPixel(i, j).R - Average) > sigma) {
						outlier_3->SetPixel(i - 1, j - 1, Color::FromArgb(Average, Average, Average));		//中間值跟平均大於標準差，則為平均
					}
					else {
						outlier_3->SetPixel(i - 1, j - 1, extend_3->GetPixel(i, j));						//中間值跟平均小於標準差，則為間中值
					}
				}
			}
			Display = outlier_3;
			pictureBox_show->Image = outlier_3;
			SNR2();
		}
		else if (radioButton2->Checked == true) {
			Bitmap^ outlier_5 = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 2; i < extend_5->Width - 2; i++) {
				for (int j = 2; j < extend_5->Height - 2; j++) {
					int sum = 0;
					for (int m = -2; m <= 2; m++) {
						for (int n = -2; n <= 2; n++) {
							sum = sum + extend_5->GetPixel(i + m, j + n).R;
						}
					}
					int Average = round(sum - extend_5->GetPixel(i, j).R) / 24;
					if (abs(extend_5->GetPixel(i, j).R - Average) >= sigma) {
						outlier_5->SetPixel(i - 2, j - 2, Color::FromArgb(Average, Average, Average));
					}
					else {
						outlier_5->SetPixel(i - 2, j - 2, extend_5->GetPixel(i, j));
					}
				}
			}
			Display = outlier_5;
			pictureBox_show->Image = Display;
			SNR2();
		}
	}
	// Noise
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}
		unsigned v;
		v = (unsigned)time(NULL);
		srand(v);
		for (int i = 0; i < 2500; i++) {
			Color set = Color::FromArgb(0, 0, 0);
			process->SetPixel((rand() % 256), (rand() % 256), set);
		}
		for (int i = 0; i < 2500; i++) {
			Color set = Color::FromArgb(255, 255, 255);
			process->SetPixel((rand() % 256), (rand() % 256), set);
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();
	}
	// X gradient
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ extend_2 = gcnew Bitmap(Display->Width + 1, Display->Height + 1);
		for (int i = 0; i < extend_2->Width; i++) {
			for (int j = 0; j < extend_2->Height; j++) {
				if ((i >= 0) && (j >= 0) && (i < extend_2->Width - 1) && (j < extend_2->Height - 1)) {
					extend_2->SetPixel(i, j, Display->GetPixel(i, j));
				}
				else if ((j >= 0) && (j < extend_2->Height - 1) && (i >= extend_2->Width - 1)) {		//放大圖圖形右邊
					extend_2->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j));
				}
				else if ((i >= 0) && (i < extend_2->Width - 1) && (j >= extend_2->Height - 1)) {		//放大圖圖形下面
					extend_2->SetPixel(i, j, Display->GetPixel(i, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_2->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		float mask_1[4] = { -1,0,0,1 };
			int Max_1 = 0, min_1 = 255;
			Bitmap^ Robert_Dx = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 0; i < extend_2->Width - 1; i++) {
				for (int j = 0; j < extend_2->Height - 1; j++) {
					float row[4] = { 0 };
					int	a = 0;
					for (int m = 0; m <= 1; m++) {
						for (int n = 0; n <= 1; n++) {
							row[a] = extend_2->GetPixel(i + m, j + n).R;
							a++;
						}
					}
					float sum = 0;
					for (int q = 0; q < 4; q++) {
						sum = sum + round(row[q] * mask_1[q] );
					}
					if (min_1 > sum) { min_1 = sum; }
					if (Max_1 < sum) { Max_1 = sum; }
				}
			}
			for (int i = 0; i < extend_2->Width - 1; i++) {
				for (int j = 0; j < extend_2->Height - 1; j++) {
					float row[4] = { 0 };
					int	a = 0;
					for (int m = 0; m <= 1; m++) {
						for (int n = 0; n <= 1; n++) {
							row[a] = extend_2->GetPixel(i + m, j + n).R;
							a++;
						}
					}
					float sum = 0;
					for (int q = 0; q < 4; q++) {
						sum = sum + round(row[q] * mask_1[q]);
					}
					int adjust = round((255 * (sum - min_1) / (Max_1 - min_1)));
					Robert_Dx->SetPixel(i, j, Color::FromArgb((int)adjust, (int)adjust, (int)adjust));
				}
			}
			Display = Robert_Dx;
			pictureBox_show->Image = Display;
			SNR2();
	}
	// Y gradient
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ extend_2 = gcnew Bitmap(Display->Width + 1, Display->Height + 1);
		for (int i = 0; i < extend_2->Width; i++) {
			for (int j = 0; j < extend_2->Height; j++) {
				if ((i >= 0) && (j >= 0) && (i < extend_2->Width - 1) && (j < extend_2->Height - 1)) {
					extend_2->SetPixel(i, j, Display->GetPixel(i, j));
				}
				else if ((j >= 0) && (j < extend_2->Height - 1) && (i >= extend_2->Width - 1)) {		//放大圖圖形右邊
					extend_2->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j));
				}
				else if ((i >= 0) && (i < extend_2->Width - 1) && (j >= extend_2->Height - 1)) {		//放大圖圖形下面
					extend_2->SetPixel(i, j, Display->GetPixel(i, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_2->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		int Max_2 = 0, min_2 = 255;
		float mask_2[4] = { 0,1,-1,0 };
		Bitmap^ Robert_Dy = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < extend_2->Width - 1; i++) {
			for (int j = 0; j < extend_2->Height - 1; j++) {
				float row[4] = { 0 };
				int	a = 0;
				for (int m = 0; m <= 1; m++) {
					for (int n = 0; n <= 1; n++) {
						row[a] = extend_2->GetPixel(i + m, j + n).R;
						a++;
					}
				}
				float sum = 0;
				for (int q = 0; q < 4; q++) {
					sum = sum + round(row[q] * mask_2[q]);
				}
				if (min_2 > sum) { min_2 = sum; }
				if (Max_2 < sum) { Max_2 = sum; }
			}
		}
		for (int i = 0; i < extend_2->Width - 1; i++) {
			for (int j = 0; j < extend_2->Height - 1; j++) {
				float row[4] = { 0 };
				int	a = 0;
				for (int m = 0; m <= 1; m++) {
					for (int n = 0; n <= 1; n++) {
						row[a] = extend_2->GetPixel(i + m, j + n).R;
						a++;
					}
				}
				float sum = 0;
				for (int q = 0; q < 4; q++) {
					sum = sum + round(row[q] * mask_2[q]);
				}
				int adjust = round((255 * (sum - min_2) / (Max_2 - min_2)));
				Robert_Dy->SetPixel(i, j, Color::FromArgb((int)adjust, (int)adjust, (int)adjust));
			}
		}
		Display = Robert_Dy;
		pictureBox_show->Image = Display;
		SNR2();
	}
	// gradient
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		// float mask_1[4] = { -1,0,0,1 };
		// float mask_2[4] = { 0,1,-1,0 };
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}

		Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(process->Width - 1, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(0, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((j != 0) && (j != New->Height - 1)) {
					Color set = process->GetPixel(i - 1, j - 1);
					New->SetPixel(i, j, set);
				}
			}
		}
		for (int j = 0; j < New->Height; j += New->Height - 1) {
			for (int i = 0; i < New->Width; i++) {
				if (j == 0) {
					Color set = New->GetPixel(i, New->Height - 2);
					New->SetPixel(i, j, set);
				}
				else {
					Color set = New->GetPixel(i, 1);
					New->SetPixel(i, j, set);
				}

			}
		}

		float sum1 = 0, sum2 = 0, sum3 = 0;
		float Max, Min;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= i; x++) {
					if ((x == i)) {
						sum1 += (New->GetPixel(x, j).R);
					}
					else {
						sum1 += -(New->GetPixel(x, j).R);
					}
				}
				for (int y = (j + 1); y >= j; y--) {
					if ((y == j)) {
						sum2 += (New->GetPixel(i, y).R);
					}
					else {
						sum2 += -(New->GetPixel(i, y).R);
					}
				}
				sum3 = abs(sum1) + abs(sum2);

				if (i == 1 && j == 1) {
					Max = sum3;
					Min = sum3;
				}
				if (sum3 >= Max) {
					Max = sum3;
				}
				else if (sum3 < Min) {
					Min = sum3;
				}
				sum1 = 0, sum2 = 0, sum3 = 0;
			}
		}


		sum1 = 0, sum2 = 0, sum3 = 0;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= i; x++) {
					if ((x == i)) {
						sum1 += (New->GetPixel(x, j).R);
					}
					else {
						sum1 += -(New->GetPixel(x, j).R);
					}
				}
				for (int y = (j + 1); y >= j; y--) {
					if ((y == j)) {
						sum2 += (New->GetPixel(i, y).R);
					}
					else {
						sum2 += -(New->GetPixel(i, y).R);
					}
				}
				sum3 = abs(sum1) + abs(sum2);
				sum3 = ((sum3 - Min) / (Max - Min)) * 255;
				Color set = Color::FromArgb((int)sum3, (int)sum3, (int)sum3);
				sum1 = 0, sum2 = 0, sum3 = 0;
				process->SetPixel(i - 1, j - 1, set);
			}
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();
	}
	// Xsobel
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}

		Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(process->Width - 1, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(0, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((j != 0) && (j != New->Height - 1)) {
					Color set = process->GetPixel(i - 1, j - 1);
					New->SetPixel(i, j, set);
				}
			}
		}
		for (int j = 0; j < New->Height; j += New->Height - 1) {
			for (int i = 0; i < New->Width; i++) {
				if (j == 0) {
					Color set = New->GetPixel(i, New->Height - 2);
					New->SetPixel(i, j, set);
				}
				else {
					Color set = New->GetPixel(i, 1);
					New->SetPixel(i, j, set);
				}

			}
		}

		float sum1 = 0;
		float Max, Min;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (x == (i - 1)) {
							if (y == j) {
								sum1 += -2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (x == (i + 1)) {
							if (y == j) {
								sum1 += 2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}
					}
				}
				if (i == 1 && j == 1) {
					Max = sum1;
					Min = sum1;
				}
				if (sum1 >= Max) {
					Max = sum1;
				}
				else if (sum1 < Min) {
					Min = sum1;
				}
				sum1 = 0;
			}
		}


		sum1 = 0;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (x == (i - 1)) {
							if (y == j) {
								sum1 += -2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (x == (i + 1)) {
							if (y == j) {
								sum1 += 2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}
					}
				}
				sum1 = ((sum1 - Min) / (Max - Min)) * 255;
				Color set = Color::FromArgb((int)sum1, (int)sum1, (int)sum1);
				sum1 = 0;
				process->SetPixel(i - 1, j - 1, set);
			}
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();
	}
	// Y sobel
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}

		Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(process->Width - 1, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(0, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((j != 0) && (j != New->Height - 1)) {
					Color set = process->GetPixel(i - 1, j - 1);
					New->SetPixel(i, j, set);
				}
			}
		}
		for (int j = 0; j < New->Height; j += New->Height - 1) {
			for (int i = 0; i < New->Width; i++) {
				if (j == 0) {
					Color set = New->GetPixel(i, New->Height - 2);
					New->SetPixel(i, j, set);
				}
				else {
					Color set = New->GetPixel(i, 1);
					New->SetPixel(i, j, set);
				}

			}
		}

		float sum1 = 0;
		float Max, Min;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (y == (j - 1)) {
							if (x == i) {
								sum1 += -2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (y == (j + 1)) {
							if (x == i) {
								sum1 += 2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}
					}
				}
				if (i == 1 && j == 1) {
					Max = sum1;
					Min = sum1;
				}
				if (sum1 >= Max) {
					Max = sum1;
				}
				else if (sum1 < Min) {
					Min = sum1;
				}
				sum1 = 0;
			}
		}


		sum1 = 0;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (y == (j - 1)) {
							if (x == i) {
								sum1 += -2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (y == (j + 1)) {
							if (x == i) {
								sum1 += 2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}
					}
				}
				sum1 = ((sum1 - Min) / (Max - Min)) * 255;
				Color set = Color::FromArgb((int)sum1, (int)sum1, (int)sum1);
				sum1 = 0;
				process->SetPixel(i - 1, j - 1, set);
			}
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();
	}
	// Sobel
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}

		Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(process->Width - 1, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(0, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((j != 0) && (j != New->Height - 1)) {
					Color set = process->GetPixel(i - 1, j - 1);
					New->SetPixel(i, j, set);
				}
			}
		}
		for (int j = 0; j < New->Height; j += New->Height - 1) {
			for (int i = 0; i < New->Width; i++) {
				if (j == 0) {
					Color set = New->GetPixel(i, New->Height - 2);
					New->SetPixel(i, j, set);
				}
				else {
					Color set = New->GetPixel(i, 1);
					New->SetPixel(i, j, set);
				}

			}
		}

		float sum1 = 0, sum2 = 0, sum3 = 0;
		float Max, Min;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (y == (j - 1)) {
							if (x == i) {
								sum1 += -2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (y == (j + 1)) {
							if (x == i) {
								sum1 += 2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}
						if (x == (i - 1)) {
							if (y == j) {
								sum2 += -2 * (New->GetPixel(x, y).R);
							}
							else {
								sum2 += -(New->GetPixel(x, y).R);
							}
						}
						else if (x == (i + 1)) {
							if (y == j) {
								sum2 += 2 * (New->GetPixel(x, y).R);
							}
							else {
								sum2 += (New->GetPixel(x, y).R);
							}
						}
					}
				}

				sum3 = abs(sum1) + abs(sum2);

				if (i == 1 && j == 1) {
					Max = sum3;
					Min = sum3;
				}
				if (sum3 >= Max) {
					Max = sum3;
				}
				else if (sum3 < Min) {
					Min = sum3;
				}
				sum1 = 0, sum2 = 0, sum3 = 0;
			}
		}


		sum1 = 0, sum2 = 0, sum3 = 0;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (y == (j - 1)) {
							if (x == i) {
								sum1 += -2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (y == (j + 1)) {
							if (x == i) {
								sum1 += 2 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}

						if (x == (i - 1)) {
							if (y == j) {
								sum2 += -2 * (New->GetPixel(x, y).R);
							}
							else {
								sum2 += -(New->GetPixel(x, y).R);
							}
						}
						else if (x == (i + 1)) {
							if (y == j) {
								sum2 += 2 * (New->GetPixel(x, y).R);
							}
							else {
								sum2 += (New->GetPixel(x, y).R);
							}
						}
					}
				}

				sum3 = round(sqrt(pow(sum1, 2) + pow(sum2, 2)));

				sum3 = ((sum3 - Min) / (Max - Min)) * 255;
				Color set = Color::FromArgb((int)sum3, (int)sum3, (int)sum3);
				sum1 = 0, sum2 = 0, sum3 = 0;
				process->SetPixel(i - 1, j - 1, set);
			}
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();
	}
	// X prewitt
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}

		Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(process->Width - 1, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(0, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((j != 0) && (j != New->Height - 1)) {
					Color set = process->GetPixel(i - 1, j - 1);
					New->SetPixel(i, j, set);
				}
			}
		}
		for (int j = 0; j < New->Height; j += New->Height - 1) {
			for (int i = 0; i < New->Width; i++) {
				if (j == 0) {
					Color set = New->GetPixel(i, New->Height - 2);
					New->SetPixel(i, j, set);
				}
				else {
					Color set = New->GetPixel(i, 1);
					New->SetPixel(i, j, set);
				}

			}
		}

		float sum1 = 0;
		float Max, Min;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (x == (i - 1)) {
							if (y == j) {
								sum1 += -1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (x == (i + 1)) {
							if (y == j) {
								sum1 += 1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}
					}
				}
				if (i == 1 && j == 1) {
					Max = sum1;
					Min = sum1;
				}
				if (sum1 >= Max) {
					Max = sum1;
				}
				else if (sum1 < Min) {
					Min = sum1;
				}
				sum1 = 0;
			}
		}


		sum1 = 0;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (x == (i - 1)) {
							if (y == j) {
								sum1 += -1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (x == (i + 1)) {
							if (y == j) {
								sum1 += 1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}
					}
				}
				sum1 = ((sum1 - Min) / (Max - Min)) * 255;
				Color set = Color::FromArgb((int)sum1, (int)sum1, (int)sum1);
				sum1 = 0;
				process->SetPixel(i - 1, j - 1, set);
			}
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();
	}
	// Y prewitt
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}

		Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(process->Width - 1, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(0, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((j != 0) && (j != New->Height - 1)) {
					Color set = process->GetPixel(i - 1, j - 1);
					New->SetPixel(i, j, set);
				}
			}
		}
		for (int j = 0; j < New->Height; j += New->Height - 1) {
			for (int i = 0; i < New->Width; i++) {
				if (j == 0) {
					Color set = New->GetPixel(i, New->Height - 2);
					New->SetPixel(i, j, set);
				}
				else {
					Color set = New->GetPixel(i, 1);
					New->SetPixel(i, j, set);
				}

			}
		}

		float sum1 = 0;
		float Max, Min;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (y == (j - 1)) {
							if (x == i) {
								sum1 += -1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (y == (j + 1)) {
							if (x == i) {
								sum1 += 1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}
					}
				}
				if (i == 1 && j == 1) {
					Max = sum1;
					Min = sum1;
				}
				if (sum1 >= Max) {
					Max = sum1;
				}
				else if (sum1 < Min) {
					Min = sum1;
				}
				sum1 = 0;
			}
		}


		sum1 = 0;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (y == (j - 1)) {
							if (x == i) {
								sum1 += -1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (y == (j + 1)) {
							if (x == i) {
								sum1 += 1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}
					}
				}
				sum1 = ((sum1 - Min) / (Max - Min)) * 255;
				Color set = Color::FromArgb((int)sum1, (int)sum1, (int)sum1);
				sum1 = 0;
				process->SetPixel(i - 1, j - 1, set);
			}
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();
	}
	// Prewitt
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}

		Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(process->Width - 1, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(0, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((j != 0) && (j != New->Height - 1)) {
					Color set = process->GetPixel(i - 1, j - 1);
					New->SetPixel(i, j, set);
				}
			}
		}
		for (int j = 0; j < New->Height; j += New->Height - 1) {
			for (int i = 0; i < New->Width; i++) {
				if (j == 0) {
					Color set = New->GetPixel(i, New->Height - 2);
					New->SetPixel(i, j, set);
				}
				else {
					Color set = New->GetPixel(i, 1);
					New->SetPixel(i, j, set);
				}

			}
		}

		float sum1 = 0, sum2 = 0, sum3 = 0;
		float Max, Min;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (y == (j - 1)) {
							if (x == i) {
								sum1 += -1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (y == (j + 1)) {
							if (x == i) {
								sum1 += 1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}
						if (x == (i - 1)) {
							if (y == j) {
								sum2 += -1 * (New->GetPixel(x, y).R);
							}
							else {
								sum2 += -(New->GetPixel(x, y).R);
							}
						}
						else if (x == (i + 1)) {
							if (y == j) {
								sum2 += 1 * (New->GetPixel(x, y).R);
							}
							else {
								sum2 += (New->GetPixel(x, y).R);
							}
						}
					}
				}

				sum3 = abs(sum1) + abs(sum2);

				if (i == 1 && j == 1) {
					Max = sum3;
					Min = sum3;
				}
				if (sum3 >= Max) {
					Max = sum3;
				}
				else if (sum3 < Min) {
					Min = sum3;
				}
				sum1 = 0, sum2 = 0, sum3 = 0;
			}
		}


		sum1 = 0, sum2 = 0, sum3 = 0;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (y == (j - 1)) {
							if (x == i) {
								sum1 += -1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -(New->GetPixel(x, y).R);
							}
						}
						else if (y == (j + 1)) {
							if (x == i) {
								sum1 += 1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += (New->GetPixel(x, y).R);
							}
						}

						if (x == (i - 1)) {
							if (y == j) {
								sum2 += -1 * (New->GetPixel(x, y).R);
							}
							else {
								sum2 += -(New->GetPixel(x, y).R);
							}
						}
						else if (x == (i + 1)) {
							if (y == j) {
								sum2 += 1 * (New->GetPixel(x, y).R);
							}
							else {
								sum2 += (New->GetPixel(x, y).R);
							}
						}
					}
				}

				sum3 = abs(sum1) + abs(sum2);

				sum3 = ((sum3 - Min) / (Max - Min)) * 255;
				Color set = Color::FromArgb((int)sum3, (int)sum3, (int)sum3);
				sum1 = 0, sum2 = 0, sum3 = 0;
				process->SetPixel(i - 1, j - 1, set);
			}
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();
	}
	// Laplacian 
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ process = gcnew Bitmap(Display->Width, Display->Height);
		for (int i = 0; i < Display->Width; i++) {
			for (int j = 0; j < Display->Height; j++) {
				Color set = Display->GetPixel(i, j);
				process->SetPixel(i, j, set);
			}
		}

		Bitmap^ New = gcnew Bitmap(process->Width + 2, process->Height + 2);
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				if ((i == 0) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(process->Width - 1, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((i == New->Width - 1) && (j >= 1) && (j < New->Height - 1)) {
					Color set = process->GetPixel(0, j - 1);
					New->SetPixel(i, j, set);
				}
				else if ((j != 0) && (j != New->Height - 1)) {
					Color set = process->GetPixel(i - 1, j - 1);
					New->SetPixel(i, j, set);
				}
			}
		}
		for (int j = 0; j < New->Height; j += New->Height - 1) {
			for (int i = 0; i < New->Width; i++) {
				if (j == 0) {
					Color set = New->GetPixel(i, New->Height - 2);
					New->SetPixel(i, j, set);
				}
				else {
					Color set = New->GetPixel(i, 1);
					New->SetPixel(i, j, set);
				}

			}
		}

		float sum1 = 0;
		float Max, Min;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (x == i) {
							if (y == j) {
								sum1 += 4 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -1 * (New->GetPixel(x, y).R);
							}
						}
						else {
							if (y == j) {
								sum1 += -1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += 0 * (New->GetPixel(x, y).R);
							}
						}

					}
				}
				if (i == 1 && j == 1) {
					Max = sum1;
					Min = sum1;
				}
				if (sum1 >= Max) {
					Max = sum1;
				}
				else if (sum1 < Min) {
					Min = sum1;
				}
				sum1 = 0;
			}
		}

		sum1 = 0;
		for (int i = 1; i <= (New->Width - 2); i++) {
			for (int j = 1; j <= (New->Height - 2); j++) {
				for (int x = (i - 1); x <= (i + 1); x++) {
					for (int y = (j - 1); y <= (j + 1); y++) {
						if (x == i) {
							if (y == j) {
								sum1 += 4 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += -1 * (New->GetPixel(x, y).R);
							}
						}
						else {
							if (y == j) {
								sum1 += -1 * (New->GetPixel(x, y).R);
							}
							else {
								sum1 += 0 * (New->GetPixel(x, y).R);
							}
						}
					}
				}
				sum1 = ((sum1 - Min) / (Max - Min)) * 255;
				Color set = Color::FromArgb((int)sum1, (int)sum1, (int)sum1);
				sum1 = 0;
				process->SetPixel(i - 1, j - 1, set);
			}
		}
		Display = process;
		pictureBox_show->Image = Display;
		SNR2();
	}
	// edge crisping
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ extend_3 = gcnew Bitmap(Display->Width + 2, Display->Height + 2);
		for (int i = 0; i < extend_3->Width; i++) {
			for (int j = 0; j < extend_3->Height; j++) {
				if ((i >= 1) && (j >= 1) && (i < extend_3->Width - 1) && (j < extend_3->Height - 1)) {
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, j - 1));
				}
				else if ((i < 1) && (j >= 1) && (j < extend_3->Height - 1)) {								//放大圖圖形左邊
					extend_3->SetPixel(i, j, Display->GetPixel(0, j - 1));
				}
				else if ((j >= 1) && (j < extend_3->Height - 1) && (i >= extend_3->Width - 1)) {		//放大圖圖形右邊
					extend_3->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j - 1));
				}
				else if ((i >= 1) && (i < extend_3->Width - 1) && (j < 1)) {								//放大圖圖形上面
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, 0));
				}
				else if ((i >= 1) && (i < extend_3->Width - 1) && (j >= extend_3->Height - 1)) {		//放大圖圖形下面
					extend_3->SetPixel(i, j, Display->GetPixel(i - 1, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_3->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		Bitmap^ extend_5 = gcnew Bitmap(Display->Width + 4, Display->Height + 4);
		for (int i = 0; i < extend_5->Width; i++) {
			for (int j = 0; j < extend_5->Height; j++) {
				if ((i >= 2) && (j >= 2) && (i < extend_5->Width - 2) && (j < extend_5->Height - 2)) {
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, j - 2));
				}
				else if ((i < 2) && (j >= 2) && (j < extend_5->Height - 2)) {								//放大圖圖形左邊
					extend_5->SetPixel(i, j, Display->GetPixel(0, j - 2));
				}
				else if ((j >= 2) && (j < extend_5->Height - 2) && (i >= extend_5->Width - 2)) {		//放大圖圖形右邊
					extend_5->SetPixel(i, j, Display->GetPixel(Display->Width - 1, j - 2));
				}
				else if ((i >= 2) && (i < extend_5->Width - 2) && (j < 2)) {								//放大圖圖形上面
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, 0));
				}
				else if ((i >= 2) && (i < extend_5->Width - 2) && (j >= extend_5->Height - 2)) {		//放大圖圖形下面
					extend_5->SetPixel(i, j, Display->GetPixel(i - 2, Display->Height - 1));
				}
				else {																						//剩四個角隨便填入最左上角的pixel值，若一個一個寫頗麻煩
					extend_5->SetPixel(i, j, Display->GetPixel(0, 0));
				}
			}
		}
		if (radioButton1->Checked == true) {
			float mask_3[9] = { -1,-1,-1,-1,9,-1,-1,-1,-1 };
			Bitmap^ highpass_3 = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 1; i < extend_3->Width - 1; i++) {
				for (int j = 1; j < extend_3->Height - 1; j++) {
					float row[9] = { 0 };
					int	a = 0;
					for (int m = -1; m <= 1; m++) {
						for (int n = -1; n <= 1; n++) {
							row[a] = extend_3->GetPixel(i + m, j + n).R;
							a++;
						}
					}
					float sum = 0;
					for (int q = 0; q < 9; q++) {
						sum = sum + round(row[q] * mask_3[q]);
					}
					if (sum < 0) { sum = 0; }
					if (sum > 255) { sum = 255; }
					highpass_3->SetPixel(i - 1, j - 1, Color::FromArgb((int)sum, (int)sum, (int)sum));
				}
			}
			Display = highpass_3;
			pictureBox_show->Image = Display;
			SNR2();
		}
		else if (radioButton2->Checked == true) {
			float mask_5[25] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,25,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
			Bitmap^ highpass_5 = gcnew Bitmap(Display->Width, Display->Height);
			for (int i = 2; i < extend_5->Width - 2; i++) {
				for (int j = 2; j < extend_5->Height - 2; j++) {
					float row[25] = { 0 };
					int	a = 0;
					for (int m = -2; m <= 2; m++) {
						for (int n = -2; n <= 2; n++) {
							row[a] = extend_5->GetPixel(i + m, j + n).R;
							a++;
						}
					}
					float sum = 0;
					for (int q = 0; q < 25; q++) {
						sum = sum + round(row[q] * mask_5[q]);
					}
					if (sum < 0) { sum = 0; }
					if (sum > 255) { sum = 255; }
					highpass_5->SetPixel(i - 2, j - 2, Color::FromArgb((int)sum, (int)sum, (int)sum));
				}
			}
			Display = highpass_5;
			pictureBox_show->Image = Display;
			SNR2();
		}
	}

	// Video
	private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		Video^ video = gcnew Video;
		video->Show();
	}
	



	// Exit
	private: System::Void saveFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Environment::Exit(0);
	}


};

}
