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
	/// substraction 的摘要
	/// </summary>
	public ref class Overlap : public System::Windows::Forms::Form
	{
	public:
		Overlap(void)
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
		~Overlap()
		{
			if (components)
			{
				delete components;
			}
		}

	public: static Bitmap^ source1, ^ source2;
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			Bitmap^ Colormap2;
		};

		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(529, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"圖片(二)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(32, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"圖片(一)：";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(431, 90);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(477, 391);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(35, 90);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(477, 401);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(866, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"相減結果：";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(871, 90);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(480, 422);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1368, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(871, 40);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 45);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Result";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Overlap::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(35, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(195, 45);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Image 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Overlap::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(431, 40);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(195, 45);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Image 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Overlap::button3_Click);
			// 
			// Overlap
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1368, 501);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Overlap";
			this->Text = L"substraction";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:void LOADPCXDATA(String^ path, PCXHEAD% pcxdata, PCXPALETTE% Palette) {

		FileStream^ fs = gcnew FileStream(path, FileMode::Open);
		BinaryReader^ br = gcnew BinaryReader(fs);
		int row = 0, column = 0, color_number; //用在調色盤和colormap//
		int red, green, blue;	//用在調色盤和colormap//
		short int RGB[256][3];

		//讀取檔頭開始...//
		for (br->BaseStream->Position = 0; br->BaseStream->Position < 74; ) {
			int c1, c2;	//計算用//

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
					pcxdata.Encoding = "R L E";
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
				//Bitmap(長,寬)單位為像素，因為我下面自己設定顏色顯示一格是40*40，所以長寬是160*160//
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
						Rectangle rectangle((column * 40), (row * 40), 40, 40);//初始x,y座標，長度和寬度數值//
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
		

		Color get3;
		Palette.Colormap2 = gcnew Bitmap(256, 256);
		Graphics^ CM2_graphics = Graphics::FromImage(Palette.Colormap2);
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









	private: System::Void 圖檔一ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			PCXHEAD pcx_head;
			PCXPALETTE pcx_palette;
			LOADPCXDATA(openFileDialog1->FileName, pcx_head, pcx_palette);
			source1 = pcx_palette.palette;
			pictureBox1->Image = source1;
		}

	}
	private: System::Void 圖檔二ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			PCXHEAD pcx_head;
			PCXPALETTE pcx_palette;
			LOADPCXDATA(openFileDialog1->FileName, pcx_head, pcx_palette);
			source2 = pcx_palette.palette;
			pictureBox2->Image = source2;
		}

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ result = gcnew Bitmap(source1->Width, source2->Height);
		int R, G, B;
		for (int j = 0; j < source1->Height; j++) {
			for (int i = 0; i < source1->Width; i++) {
				R = abs(source1->GetPixel(i, j).R - source2->GetPixel(i, j).R);
				G = abs(source1->GetPixel(i, j).G - source2->GetPixel(i, j).G);
				B = abs(source1->GetPixel(i, j).B - source2->GetPixel(i, j).B);
				Color set = Color::FromArgb(R, G, B);
				result->SetPixel(i, j, set);
			}
		}
		pictureBox3->Image = result;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			PCXHEAD pcx_head;
			PCXPALETTE pcx_palette;
			LOADPCXDATA(openFileDialog1->FileName, pcx_head, pcx_palette);
			source1 = pcx_palette.palette;
			pictureBox1->Image = source1;
		}

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			PCXHEAD pcx_head;
			PCXPALETTE pcx_palette;
			LOADPCXDATA(openFileDialog1->FileName, pcx_head, pcx_palette);
			source2 = pcx_palette.palette;
			pictureBox2->Image = source2;
		}

	}

};
}
