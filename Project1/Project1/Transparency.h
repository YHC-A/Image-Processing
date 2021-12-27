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
	/// Transparent 的摘要
	/// </summary>
	public ref class Transparent : public System::Windows::Forms::Form
	{
	public:
		Transparent(void)
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
		~Transparent()
		{
			if (components)
			{
				delete components;
			}
		}
	public: static Bitmap^ source, ^ Display, ^ source_Gray;
	public:Bitmap^ src1, ^ src2;										//設全域變數
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	protected:
	private: System::Windows::Forms::ToolStrip^ toolStrip1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public: System::Windows::Forms::PictureBox^ pictureBox2;
	private:
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TrackBar^ trackBar1;











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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1241, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(434, 88);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(341, 320);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(21, 88);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(341, 320);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(828, 84);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(341, 324);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(429, 34);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Upper layer : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(16, 34);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(267, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Bottim layer : Origin picture";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(823, 34);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(224, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Transparency :            %";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->Location = System::Drawing::Point(982, 31);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 34);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Transparent::textBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 25);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(1241, 449);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(828, 415);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(341, 56);
			this->trackBar1->TabIndex = 11;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Transparent::trackBar1_Scroll);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(571, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 37);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Choose image";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Transparent::button2_Click);
			// 
			// Transparent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1241, 474);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->toolStrip1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Transparent";
			this->Text = L"Transparency";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:void LoadPcxFile(String^ path, PCXHEAD% Pcxdata, PCXPALETTE% Palette) {
		Pcxdata.filePath = path;
		FileStream^ fs = gcnew FileStream(path, FileMode::Open);
		BinaryReader^ br = gcnew BinaryReader(fs);
		int b1, b2;						
		int row = 0, col = 0;			
		int color_num;
		int red, green, blue;			
		short RGB[256][3];			
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
			case 16: {														  
				Pcxdata.Colormap = gcnew Bitmap(160, 160);					
				Color CM_Color;					   							
				Graphics^ CM_graph = Graphics::FromImage(Pcxdata.Colormap);   
				for (row = 0; row < 4; row++) {
					for (col = 0; col < 4; col++) {
						red = br->ReadByte();
						green = br->ReadByte();
						blue = br->ReadByte();
						CM_Color = Color::FromArgb(red, green, blue);		  
						SolidBrush^ bsh = gcnew	SolidBrush(CM_Color);         
						Rectangle rectangle((col * 40), (row * 40), 40, 40);  
						CM_graph->FillRectangle(bsh, rectangle);			  
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


		Palette.P_Colormap = gcnew Bitmap(256, 256);
		Color p_color;
		Graphics^ pcolor_grah = Graphics::FromImage(Palette.P_Colormap);		
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

		Palette.palette = gcnew Bitmap(Pcxdata.width, Pcxdata.height);
		Graphics^ palette_graph = Graphics::FromImage(Palette.palette);
		int x = 0, y = 0;
		int check;	
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
				x++;												
				if (x == Pcxdata.width) {
					x = 0;
					y++;	
				}
				if (y == Pcxdata.height)
				{
					break;
				}

			}

		}
		fs->Close();
	}

	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->groupBox1->Visible = true;
		OpenFileDialog^ openfiledialog = gcnew OpenFileDialog;
		if (openfiledialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			cli::array<Char>^ dot = gcnew cli::array<Char>{'.'};														   //將檔名以字元陣列型式呈現							
			cli::array<String^>^ format = openfiledialog->FileName->Split(dot, StringSplitOptions::RemoveEmptyEntries);    //分割字元字串(Filename.pcx)

			if (format[1] == "pcx") {
				PCXHEAD Pcx_head;
				PCXPALETTE Pcx_palette;
				LoadPcxFile(openfiledialog->FileName, Pcx_head, Pcx_palette);
				src1 = Pcx_palette.palette;
				pictureBox1->Image = src1;
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->groupBox1->Visible = true;
		OpenFileDialog^ openfiledialog = gcnew OpenFileDialog;
		if (openfiledialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			cli::array<Char>^ dot = gcnew cli::array<Char>{'.'};														   //將檔名以字元陣列型式呈現							
			cli::array<String^>^ format = openfiledialog->FileName->Split(dot, StringSplitOptions::RemoveEmptyEntries);    //分割字元字串(Filename.pcx)

			if (format[1] == "pcx") {
				PCXHEAD Pcx_head;
				PCXPALETTE Pcx_palette;
				LoadPcxFile(openfiledialog->FileName, Pcx_head, Pcx_palette);
				src1 = Pcx_palette.palette;
				pictureBox1->Image = src1;
			}
		}
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		float value = System::Convert::ToInt32(textBox1->Text);
		if (value > 100 || value < 0) {
			MessageBox::Show("請輸入0~100之間的整數!");
		}
		else {
			if (pictureBox1->Image == nullptr || pictureBox2->Image == nullptr) {
				MessageBox::Show("請選擇圖片!");
			}
			else {
				float v = (value) / 100.0;												//浮點數記得除數要到小數
				Bitmap^ substract_img = gcnew Bitmap(src1->Width, src1->Height);
				float R, G, B;
				for (int i = 0; i < (src1->Width); i++) {
					for (int j = 0; j < (src1->Height); j++) {
						R = abs((1 - v) * (src1->GetPixel(i, j).R) + v * (src2->GetPixel(i, j).R));			//記得取絕對值，RGB值大於等於零
						G = abs((1 - v) * (src1->GetPixel(i, j).G) + v * (src2->GetPixel(i, j).G));			//此採用兩張圖各佔比例來呈現
						B = abs((1 - v) * (src1->GetPixel(i, j).B) + v * (src2->GetPixel(i, j).B));
						substract_img->SetPixel(i, j, Color::FromArgb(R, G, B));
					}
				}
				pictureBox3->Image = substract_img;
			}
			
		}
	}

	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		float value = trackBar1->Value;
		this->textBox1->Text = String::Concat(trackBar1->Value);
		if (value > 100 || value < 0) {
			MessageBox::Show("請輸入0~100之間的整數!");
		}
		else {
			if (pictureBox1->Image == nullptr || pictureBox2->Image == nullptr) {
				MessageBox::Show("請選擇圖片!");
			}
			else {
				float v = (value) / 100.0;												//浮點數記得除數要到小數
				Bitmap^ substract_img = gcnew Bitmap(src1->Width, src1->Height);
				float R, G, B;
				for (int i = 0; i < (src1->Width); i++) {
					for (int j = 0; j < (src1->Height); j++) {
						R = abs((1 - v) * (src1->GetPixel(i, j).R) + v * (src2->GetPixel(i, j).R));			//記得取絕對值，RGB值大於等於零
						G = abs((1 - v) * (src1->GetPixel(i, j).G) + v * (src2->GetPixel(i, j).G));			//此採用兩張圖各佔比例來呈現
						B = abs((1 - v) * (src1->GetPixel(i, j).B) + v * (src2->GetPixel(i, j).B));
						substract_img->SetPixel(i, j, Color::FromArgb(R, G, B));
					}
				}
				pictureBox3->Image = substract_img;
			}

		}
	}


	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		float value;
		if (textBox1->Text == "") {
			value = 0;
		}
		else {
			value = System::Convert::ToInt32(textBox1->Text);
		}
		this->trackBar1->Value = value;
		if (value > 100 || value < 0) {
			MessageBox::Show("請輸入0~100之間的整數!");
		}
		else {
			if (pictureBox1->Image == nullptr || pictureBox2->Image == nullptr) {
				MessageBox::Show("請選擇圖片!");
			}
			else {
				float v = (value) / 100.0;												//浮點數記得除數要到小數
				Bitmap^ substract_img = gcnew Bitmap(src1->Width, src1->Height);
				float R, G, B;
				for (int i = 0; i < (src1->Width); i++) {
					for (int j = 0; j < (src1->Height); j++) {
						R = abs((1 - v) * (src1->GetPixel(i, j).R) + v * (src2->GetPixel(i, j).R));			//記得取絕對值，RGB值大於等於零
						G = abs((1 - v) * (src1->GetPixel(i, j).G) + v * (src2->GetPixel(i, j).G));			//此採用兩張圖各佔比例來呈現
						B = abs((1 - v) * (src1->GetPixel(i, j).B) + v * (src2->GetPixel(i, j).B));
						substract_img->SetPixel(i, j, Color::FromArgb(R, G, B));
					}
				}
				pictureBox3->Image = substract_img;
			}

		}
	}
};
}
