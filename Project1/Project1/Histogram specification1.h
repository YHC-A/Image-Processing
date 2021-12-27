#pragma once
#include <cmath>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// HistogramSpecification 的摘要
	/// </summary>
	public ref class HistogramSpecification : public System::Windows::Forms::Form
	{
	public:
		HistogramSpecification(void)
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
		~HistogramSpecification()
		{
			if (components)
			{
				delete components;
			}
		}
	public: static Bitmap^ source;
	public:Bitmap^ scr2;
	public: Bitmap^ scr1, ^ scr1_gray;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;

	private:


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container^ components;

		//宣告標頭檔中的變數
		ref struct PCXHEAD {
			String^ filePath;//檔案路徑
			String^ fileName;//檔案名稱
			String^ Manufacturer;			//要顯示出來因此用 String^宣告
			short int Version;
			String^ Encoding;
			short int BitsPerPixel;
			short int Xmin;
			short int Ymin;
			short int Xmax;
			short int Ymax;
			short int Hdpi;
			short int Vdpi;
			Bitmap^ Colormap;				//讀取colormap影像資料
			unsigned char Reserved;
			unsigned char Nplanes;
			short int BytesPerLine;
			String^ PaletteInfo;
			short int HscreenSize;
			short int VscreenSize;
			short int width;				//宣告圖片的長寬
			short int height;
		};
		ref struct PCXPALETTE {
			Bitmap^ palette;				//將2D array著色的影像資料
			Bitmap^ P_Colormap;				//讀取調色盤需要的影像資料
		};


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HistogramSpecification::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(29, 39);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(347, 325);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(29, 372);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(347, 325);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(29, 705);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(347, 311);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(409, 39);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::Gray;
			series1->Legend = L"Legend1";
			series1->Name = L"Gray";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)));
			series2->Legend = L"Legend1";
			series2->Name = L"CDF";
			series2->YAxisType = System::Windows::Forms::DataVisualization::Charting::AxisType::Secondary;
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(391, 325);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(409, 372);
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
			this->chart2->Size = System::Drawing::Size(391, 325);
			this->chart2->TabIndex = 4;
			this->chart2->Text = L"chart2";
			this->chart2->Visible = false;
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(409, 705);
			this->chart3->Margin = System::Windows::Forms::Padding(4);
			this->chart3->Name = L"chart3";
			series5->ChartArea = L"ChartArea1";
			series5->Color = System::Drawing::Color::Gray;
			series5->Legend = L"Legend1";
			series5->Name = L"Gray";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)));
			series6->Legend = L"Legend1";
			series6->Name = L"CDF";
			series6->YAxisType = System::Windows::Forms::DataVisualization::Charting::AxisType::Secondary;
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Size = System::Drawing::Size(391, 311);
			this->chart3->TabIndex = 5;
			this->chart3->Text = L"chart3";
			this->chart3->Visible = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripButton1 });
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(831, 32);
			this->toolStrip1->TabIndex = 6;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->toolStripButton1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			//this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(68, 29);
			this->toolStripButton1->Text = L"File";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &HistogramSpecification::toolStripButton1_Click);
			// 
			// HistogramSpecification
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(831, 1050);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"HistogramSpecification";
			this->Text = L"HistogramSpecification";
			this->Load += gcnew System::EventHandler(this, &HistogramSpecification::HistogramSpecification_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:void LoadPcxFile(String^ path, PCXHEAD% Pcxdata, PCXPALETTE% Palette) {
		Pcxdata.filePath = path;
		FileStream^ fs = gcnew FileStream(path, FileMode::Open);
		BinaryReader^ br = gcnew BinaryReader(fs);
		int b1, b2;						//宣告讀出圖片的binary值
		int row = 0, col = 0;			//使用於colormap和調色盤
		int color_num;
		int red, green, blue;			//使用於colormap和調色盤
		short RGB[256][3];				//宣告2D array存取palette顏色
		for (br->BaseStream->Position = 0; br->BaseStream->Position < 74; ) {			//注意二進位讀檔本身會自動往下一位讀取，無須再++
			switch (br->BaseStream->Position)
			{
			case 0: {
				if (br->ReadByte() == 10) {
					Pcxdata.Manufacturer = "Zsoft.pcx";
				}
				else
				{
					Pcxdata.Manufacturer = "Error!!!";
				}
				break;
			}
			case 1: {
				Pcxdata.Version = br->ReadByte();
				break;
			}
			case 2: {
				if (br->ReadByte() == 1) {
					Pcxdata.Encoding = "RLE";
				}
				break;
			}
			case 3: {
				Pcxdata.BitsPerPixel = br->ReadByte();
				break;
			}
			case 4: {
				b1 = br->ReadByte();
				b2 = br->ReadByte();
				Pcxdata.Xmin = b1 + b2 * 256;

				b1 = br->ReadByte();
				b2 = br->ReadByte();
				Pcxdata.Ymin = b1 + b2 * 256;

				b1 = br->ReadByte();
				b2 = br->ReadByte();
				Pcxdata.Xmax = b1 + b2 * 256;

				b1 = br->ReadByte();
				b2 = br->ReadByte();
				Pcxdata.Ymax = b1 + b2 * 256;
				break;
			}
			case 12: {
				b1 = br->ReadByte();
				b2 = br->ReadByte();
				Pcxdata.Hdpi = b1 + b2 * 256;
				break;
			}
			case 14: {
				b1 = br->ReadByte();
				b2 = br->ReadByte();
				Pcxdata.Vdpi = b1 + b2 * 256;
				break;
			}
			case 16: {														  //標頭檔裡有48byte給16種顏色
				Pcxdata.Colormap = gcnew Bitmap(160, 160);					  //設定一Bitmap(200*200)像素單位,每個顏色各佔(50*50),共16個顏色
				Color CM_Color;					   							  //以color class命名colormap顏色,宣告 Color class 的變數
				Graphics^ CM_graph = Graphics::FromImage(Pcxdata.Colormap);   //建立一張新的影像用於顯示colormap
				for (row = 0; row < 4; row++) {
					for (col = 0; col < 4; col++) {
						red = br->ReadByte();
						green = br->ReadByte();
						blue = br->ReadByte();
						CM_Color = Color::FromArgb(red, green, blue);		  //取得RGB資料存於CM_Color物件中
						SolidBrush^ bsh = gcnew	SolidBrush(CM_Color);         //建立使用於colormap的筆刷物件,並使用CM_Color資料
						Rectangle rectangle((col * 40), (row * 40), 40, 40);  //建立矩形, Rectangle struct
						CM_graph->FillRectangle(bsh, rectangle);			  //將colormap影像上色
					}
				}
			}
			case 64: {
				Pcxdata.Reserved = br->ReadByte();
				break;
			}
			case 65: {
				Pcxdata.Nplanes = br->ReadByte();
				break;
			}
			case 66: {
				b1 = br->ReadByte();
				b2 = br->ReadByte();
				Pcxdata.BytesPerLine = b1 + b2 * 256;
				break;
			}
			case 68: {
				b1 = br->ReadByte();
				b2 = br->ReadByte();
				if ((b1 + b2 * 256) == 1)
				{
					Pcxdata.PaletteInfo = "Color / BW";
				}
				else {
					Pcxdata.PaletteInfo = "Grayscale";
				}
				break;
			}
			case 70: {
				b1 = br->ReadByte();
				b2 = br->ReadByte();
				Pcxdata.HscreenSize = b1 + b2 * 256;
				break;
			}
			case 72: {
				b1 = br->ReadByte();
				b2 = br->ReadByte();
				Pcxdata.VscreenSize = b1 + b2 * 256;
				break;
			}
			}
			Pcxdata.width = Pcxdata.Xmax - Pcxdata.Xmin + 1;
			Pcxdata.height = Pcxdata.Ymax - Pcxdata.Ymin + 1;
		}
		//the end of the head file


		//讀取palette顏色......
		Palette.P_Colormap = gcnew Bitmap(256, 256);
		Color p_color;
		Graphics^ pcolor_grah = Graphics::FromImage(Palette.P_Colormap);		//用於顯示 palette 圖樣
		SolidBrush^ bsh;
		br->BaseStream->Position = (br->BaseStream->Length) - 768;

		for (row = 0; row < 16; row++) {
			for (col = 0; col < 16; col++) {
				RGB[color_num][0] = br->ReadByte();
				RGB[color_num][1] = br->ReadByte();
				RGB[color_num][2] = br->ReadByte();
				p_color = Color::FromArgb(RGB[color_num][0], RGB[color_num][1], RGB[color_num][2]);		//顏色資訊取完丟給 p_color
				bsh = gcnew SolidBrush(p_color);
				Rectangle rectangle((col * 16), (row * 16), 16, 16);
				pcolor_grah->FillRectangle(bsh, rectangle);
				color_num++;
			}
		}

		//讀取 2D array 及著色......
		Palette.palette = gcnew Bitmap(Pcxdata.width, Pcxdata.height);
		Graphics^ palette_graph = Graphics::FromImage(Palette.palette);
		int x = 0, y = 0;
		int check;						//宣告一個讀取中的變數
		br->BaseStream->Position = 128;
		while (y < Pcxdata.height) {																	//為一列一列掃
			if (((check = br->ReadByte()) & 0xc0) == 0xc0) {
				int duplicate_count;
				duplicate_count = (check & 0x3F);
				check = br->ReadByte();																	//check發現前面byte為重複資訊,因此讀取下一個byte
				Color duplicate_color = Color::FromArgb(RGB[check][0], RGB[check][1], RGB[check][2]);	//此時的check為下一個byte
				for (; duplicate_count > 0; duplicate_count--) {										//當重複次數大於0, 給出該重複的顏色
					Palette.palette->SetPixel(x, y, duplicate_color);
					x++;
					if (x == Pcxdata.width) {
						x = 0;
						y++;
					}
					if (y == Pcxdata.height) {
						break;
					}
				}
			}
			else {
				Color this_color = Color::FromArgb(RGB[check][0], RGB[check][1], RGB[check][2]);
				Palette.palette->SetPixel(x, y, this_color);
				x++;														//原因
				if (x == Pcxdata.width) {
					x = 0;
					y++;													//原因
				}
				if (y == Pcxdata.height)
				{
					break;
				}

			}

		}
		fs->Close();
	}
	private: System::Void HistogramSpecification_Load(System::Object^ sender, System::EventArgs^ e) {
		// origin image
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
		scr1_gray = Gray;
		this->pictureBox1->Image = scr1_gray;
		//原圖直方圖
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
		//原圖CDF
		this->chart1->Series["CDF"]->Points->Clear();
		float Probabily_1[256] = { 0 };
		float sum_1 = 0, total_P1[256] = { 0 };
		for (int i = 0; i < 255; i++)
		{
			Probabily_1[i] = gray[i] / (float(Gray->Width) * float(Gray->Height));
			sum_1 += Probabily_1[i];
			total_P1[i] = sum_1;
		}
		for (int k = 0; k < 255; k++)
		{
			this->chart1->Series["CDF"]->Points->AddXY(k, total_P1[k]);
		}
	}

		   //=======================================================================================開啟第二張圖片
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e)
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
		unsigned int gray[256] = { 0 };
		for (int i = 0; i < Gray->Width; i++) {
			for (int j = 0; j < Gray->Height; j++)
			{
				gray[Gray->GetPixel(i, j).R]++;
			}
		}
		float Probabily_1[256] = { 0 };
		float sum_1 = 0, total_P1[256] = { 0 };
		for (int i = 0; i < 255; i++)
		{
			Probabily_1[i] = gray[i] / (float(Gray->Width) * float(Gray->Height));
			sum_1 += Probabily_1[i];
			total_P1[i] = sum_1;
		}
		this->pictureBox2->Visible = true;
		this->pictureBox3->Visible = true;
		this->chart2->Visible = true;
		this->chart3->Visible = true;
		OpenFileDialog^ openfiledialog = gcnew OpenFileDialog;
		if (openfiledialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			cli::array<Char>^ dot = gcnew cli::array<Char>{'.'};														   //將檔名以字元陣列型式呈現							
			cli::array<String^>^ format = openfiledialog->FileName->Split(dot, StringSplitOptions::RemoveEmptyEntries);    //分割字元字串(Filename.pcx)

			if (format[1] == "pcx") {
				PCXHEAD Pcx_head;
				PCXPALETTE Pcx_palette;
				LoadPcxFile(openfiledialog->FileName, Pcx_head, Pcx_palette);
				scr2 = Pcx_palette.palette;
			}
		}
		//顯示第二張灰階圖
		Bitmap^ Gray2 = gcnew Bitmap(scr2->Width, scr2->Height);
		for (int i = 0; i < (scr2->Width); i++) {
			for (int j = 0; j < (scr2->Height); j++) {
				Color pixel = scr2->GetPixel(i, j);
				int r, g, b, gs;
				r = pixel.R;
				g = pixel.G;
				b = pixel.B;
				gs = 0.3 * r + 0.3 * g + 0.4 * b;
				Color paint = Color::FromArgb(gs, gs, gs);
				Gray2->SetPixel(i, j, paint);
			}
		}
		this->pictureBox2->Image = Gray2;
		//第二張圖的直方圖
		this->chart2->Series["Gray"]->Points->Clear();
		unsigned int gray2[256] = { 0 };
		for (int i = 0; i < Gray2->Width; i++) {
			for (int j = 0; j < Gray2->Height; j++)
			{
				gray2[Gray2->GetPixel(i, j).R]++;
			}
		}
		for (int k = 0; k < 256; k++)
		{
			this->chart2->Series["Gray"]->Points->AddXY(k, gray2[k]);
		}
		//第二張圖的CDF
		this->chart2->Series["CDF"]->Points->Clear();
		float Probabily_2[256] = { 0 };
		float sum_2 = 0, total_P2[256] = { 0 };
		for (int i = 0; i < 255; i++)
		{
			Probabily_2[i] = gray2[i] / (float(Gray2->Width) * float(Gray2->Height));
			sum_2 += Probabily_2[i];
			total_P2[i] = sum_2;
		}
		for (int k = 0; k < 255; k++)
		{
			this->chart2->Series["CDF"]->Points->AddXY(k, total_P2[k]);
		}

		//=======================================================================================變成新圖
		//計算要轉換的像素 https://blog.csdn.net/u012372584/article/details/18231617
		int map[256] = { 0 };
		for (int i = 0; i < 256; i++) {
			float min = 1;
			float check;
			for (int j = 0; j < 256; j++) {
				check = abs(total_P1[i] - total_P2[j]);						//因為離散，所以找最接近的機率和pixel值，使被映射的圖貼近欲映射的圖  http://fourier.eng.hmc.edu/e161/lectures/contrast_transform/node3.html
				if (check < min) {
					min = check;											//最接近的機率
					map[i] = j;												//最接近的pixel值，i是input image 的pixel值，j是output image的pixel值
				}
			}
		}
		//結合成新圖
		Bitmap^ match = gcnew Bitmap(256, 256);
		for (int i = 0; i < scr1_gray->Width; i++) {
			for (int j = 0; j < scr1_gray->Height; j++) {
				int value = map[scr1_gray->GetPixel(i, j).R];
				Color set = Color::FromArgb(value, value, value);
				match->SetPixel(i, j, set);
			}
		}
		pictureBox3->Image = match;
		//新圖的直方圖
		this->chart3->Series["Gray"]->Points->Clear();
		unsigned int gray3[256] = { 0 };
		for (int i = 0; i < match->Width; i++) {
			for (int j = 0; j < match->Height; j++)
			{
				gray3[match->GetPixel(i, j).R]++;
			}
		}
		for (int k = 0; k < 256; k++)
		{
			this->chart3->Series["Gray"]->Points->AddXY(k, gray3[k]);
		}
		//新圖的CDF
		this->chart3->Series["CDF"]->Points->Clear();
		float Probabily_3[256] = { 0 };
		float sum_3 = 0, total_P3[256] = { 0 };
		for (int i = 0; i < 255; i++)
		{
			Probabily_3[i] = gray3[i] / (float(match->Width) * float(match->Height));
			sum_3 += Probabily_3[i];
			total_P3[i] = sum_3;
		}
		for (int k = 0; k < 255; k++)
		{
			this->chart3->Series["CDF"]->Points->AddXY(k, total_P3[k]);
		}

	}
	};
}
