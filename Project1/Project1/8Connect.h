#pragma once
#include <cmath>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// My8Connected 的摘要
	/// </summary>
	public ref class Connected8 : public System::Windows::Forms::Form
	{
	public:
		Connected8(void)
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
		~Connected8()
		{
			if (components)
			{
				delete components;
			}
		}

	public: static Bitmap^ scr_gray;

	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(371, 12);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"8-Connected";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(16, 12);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Original Image";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(371, 41);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(260, 260);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 41);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(347, 316);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// Connected8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 360);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Connected8";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"My8Connected";
			this->Load += gcnew System::EventHandler(this, &Connected8::My8Connected_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void My8Connected_Load(System::Object^ sender, System::EventArgs^ e) {
		// otsu
		unsigned int gray[256] = { 0 };
		for (int i = 0; i < scr_gray->Width; i++) {
			for (int j = 0; j < scr_gray->Height; j++) {
				gray[scr_gray->GetPixel(i, j).R]++;
			}
		}

		int T, i;						//以 T 將histogram分為兩個class，i計算用 ，小於等於T與大於T
		float W1, W2;					//分為兩個class各自占的權重
		float total_1, total_2;			//兩個class各自所含的pixel總數
		float value_1, value_2;			//兩個class各自所算的pixel值乘上其數量
		float mean_1, mean_2;			//兩個class各自的平均值
		float variance_1, variance_2;	//兩class各自的變異量
		float minVariance, min_T;
		for (T = 0; T < 256; T++) {		//閥值變化
			total_1 = 0, total_2 = 0;
			for (i = 0; i <= T; i++) {
				total_1 += gray[i];
			}
			total_2 = (scr_gray->Width * scr_gray->Height) - total_1;

			W1 = (total_1) / ((scr_gray->Width) * (scr_gray->Height));
			W2 = (total_2) / ((scr_gray->Width) * (scr_gray->Height));

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
		Bitmap^ Otsu = gcnew Bitmap(scr_gray->Width, scr_gray->Height);
		for (int i = 0; i < (scr_gray->Width); i++) {
			for (int j = 0; j < (scr_gray->Height); j++) {
				int value = scr_gray->GetPixel(i, j).R;
				if ((value < min_T)) {
					Otsu->SetPixel(i, j, Color::FromArgb(0, 0, 0));
				}
				else {
					Otsu->SetPixel(i, j, Color::FromArgb(255, 255, 255));
				}
			}
		}
		pictureBox1->Image = Otsu;


		// 8-Connected ====================================
		long long label[256][256] = { 0 };
		long long num = 1;
		//Set table
		long long table[2000] = { 0 };
		for (int i = 0; i < 2000; i++) {
			table[i] = i;
		}
		for (int j = 0; j < Otsu->Height; j++) {
			for (int i = 0; i < Otsu->Width; i++) {
				int pixel = Otsu->GetPixel(i, j).R;
				while (i == 0 && j == 0) {								//左上角點的判斷
					if (pixel == 0) {
						label[i][j] = 0;
						break;
					}
					else {
						label[i][j] = num;
						table[num] = label[i][j];
						break;
					}
				}
				while (i != 0 && j == 0) {								//最上面一行的判斷
					if (pixel == 0) {
						label[i][j] = 0;
						break;
					}
					else {
						if (Otsu->GetPixel(i - 1, j).R == 0) {
							num++;
							label[i][j] = num;
							table[num] = label[i][j];
						}
						else if (pixel == Otsu->GetPixel(i - 1, j).R) {
							label[i][j] = label[i - 1][j];
						}
						break;
					}
				}
				while (i == 0 && j != 0) {								//最左邊一行的判斷
					if (pixel == 0) {
						label[i][j] = 0;
						break;
					}
					else {
						if (Otsu->GetPixel(i, j - 1).R == 0) {
							num++;
							label[i][j] = num;
							table[num] = label[i][j];
						}
						else if (pixel == Otsu->GetPixel(i, j - 1).R) {
							label[i][j] = label[i][j - 1];
						}
						break;
					}
				}

				while (i == Otsu->Width - 1 && j != 0) {				//最右邊一行的判斷
					if (pixel == 0) {
						label[i][j] = 0;
						break;
					}
					else {
						if (Otsu->GetPixel(i, j - 1).R == 0) {
							num++;
							label[i][j] = num;
							table[num] = label[i][j];
						}
						else if (pixel == Otsu->GetPixel(i, j - 1).R) {
							label[i][j] = label[i][j - 1];
						}
						break;
					}
				}
				while (i != 0 && i != Otsu->Width - 1 && j != 0) {								//中間區塊的判斷
					if (pixel == 0) {
						label[i][j] = 0;
						break;
					}
					else {
						int left = Otsu->GetPixel(i - 1, j).R;
						int top = Otsu->GetPixel(i, j - 1).R;
						int top_left = Otsu->GetPixel(i - 1, j - 1).R;
						int top_right = Otsu->GetPixel(i + 1, j - 1).R;
						if (left == 0 && top == 0 && top_left == 0 && top_right == 0) {
							num++;
							label[i][j] = num;
							table[num] = label[i][j];
						}
						else {
							int compare[4] = { 0 };
							compare[0] = label[i - 1][j];
							compare[1] = label[i][j - 1];
							compare[2] = label[i - 1][j - 1];
							compare[3] = label[i + 1][j - 1];
							int temp = 0;
							for (int o = 0; o < 4; o++) {
								for (int p = o; p < 4; p++) {
									if (compare[o] > compare[p]) {
										temp = compare[p];
										compare[p] = compare[o];
										compare[o] = temp;
									}
								}
							}
							int min;
							for (int m = 0; m < 4; m++) {
								if (compare[m] != 0) {
									min = compare[m];
									break;
								}
							}
							for (int m = 3; m >= 0; m--) {
								if (compare[m] != 0) {
									table[compare[m]] = min;
								}
							}
							label[i][j] = min;
							label[i - 1][j] = table[label[i - 1][j]];
							label[i][j - 1] = table[label[i][j - 1]];
							label[i - 1][j - 1] = table[label[i - 1][j - 1]];
							label[i + 1][j - 1] = table[label[i + 1][j - 1]];
						}
						break;
					}
				}
			}
		}

		for (int times = 0; times < 50; times++) {
			for (int j = 0; j < Otsu->Height; j++) {
				for (int i = 0; i < Otsu->Width; i++) {
					while (i == 0 && j == 0) {
						if (label[i][j] == 0) {
							break;
						}
						else {
							label[i][j] = table[label[i][j]];
							break;
						}
					}

					while (i != 0 && j == 0) {
						if (label[i][j] == 0) {
							break;
						}
						else {
							label[i][j] = table[label[i][j]];
							break;
						}
					}

					while (i == 0 && j != 0) {
						if (label[i][j] == 0) {
							break;
						}
						else {
							label[i][j] = table[label[i][j]];
							label[i][j - 1] = table[label[i][j - 1]];
							label[i + 1][j - 1] = table[label[i + 1][j - 1]];
							int compare[3] = { 0 };
							compare[0] = label[i][j];
							compare[1] = label[i][j - 1];
							compare[2] = label[i + 1][j - 1];
							int temp = 0;
							for (int o = 0; o < 3; o++) {
								for (int p = o; p < 3; p++) {
									if (compare[o] > compare[p]) {
										temp = compare[p];
										compare[p] = compare[o];
										compare[o] = temp;
									}
								}
							}
							int min;
							for (int m = 0; m < 3; m++) {
								if (compare[m] != 0) {
									min = compare[m];
									break;
								}
							}
							for (int m = 2; m >= 0; m--) {
								if (compare[m] != 0) {
									table[compare[m]] = min;
								}
							}

							break;
						}
					}

					while (i == 255 && j != 0) {
						if (label[i][j] == 0) {
							break;
						}
						else {
							label[i][j] = table[label[i][j]];
							label[i - 1][j] = table[label[i - 1][j]];
							label[i - 1][j - 1] = table[label[i - 1][j - 1]];
							label[i][j - 1] = table[label[i][j - 1]];

							int compare[4] = { 0 };
							compare[0] = label[i][j];
							compare[1] = label[i - 1][j];
							compare[2] = label[i - 1][j - 1];
							compare[3] = label[i][j - 1];
							int temp = 0;
							for (int o = 0; o < 4; o++) {
								for (int p = o; p < 4; p++) {
									if (compare[o] > compare[p]) {
										temp = compare[p];
										compare[p] = compare[o];
										compare[o] = temp;
									}
								}
							}
							int min;
							for (int m = 0; m < 4; m++) {
								if (compare[m] != 0) {
									min = compare[m];
									break;
								}
							}
							for (int m = 3; m >= 0; m--) {
								if (compare[m] != 0) {
									table[compare[m]] = min;
								}
							}

							break;
						}
					}

					while (i != 0 && j != 0 && i != 255) {
						if (label[i][j] == 0) {
							break;
						}
						else {
							label[i][j] = table[label[i][j]];
							label[i - 1][j] = table[label[i - 1][j]];
							label[i - 1][j - 1] = table[label[i - 1][j - 1]];
							label[i][j - 1] = table[label[i][j - 1]];
							label[i + 1][j - 1] = table[label[i + 1][j - 1]];

							int compare[4] = { 0 };
							compare[0] = label[i - 1][j];
							compare[1] = label[i - 1][j - 1];
							compare[2] = label[i][j - 1];
							compare[3] = label[i + 1][j - 1];
							int temp = 0;
							for (int o = 0; o < 4; o++) {
								for (int p = o; p < 4; p++) {
									if (compare[o] > compare[p]) {
										temp = compare[p];
										compare[p] = compare[o];
										compare[o] = temp;
									}
								}
							}
							int min;
							for (int m = 0; m < 4; m++) {
								if (compare[m] != 0) {
									min = compare[m];
									break;
								}
							}
							for (int m = 3; m >= 0; m--) {
								if (compare[m] != 0) {
									table[compare[m]] = min;
								}
							}

							break;
						}
					}
				}
			}
		}

		Bitmap^ scan_8 = gcnew Bitmap(Otsu->Width, Otsu->Height);
		for (int j = 0; j < Otsu->Height; j++) {
			for (int i = 0; i < Otsu->Width; i++) {
				if (label[i][j] == 0) {
					scan_8->SetPixel(i, j, Color::FromArgb(0, 0, 0));
				}
				else if (label[i][j] % 10 == 0) {
					scan_8->SetPixel(i, j, Color::FromArgb(255, 0, 0));
				}
				else if (label[i][j] % 10 == 1) {
					scan_8->SetPixel(i, j, Color::FromArgb(0, 255, 0));
				}
				else if (label[i][j] % 10 == 2) {
					scan_8->SetPixel(i, j, Color::FromArgb(0, 0, 255));
				}
				else if (label[i][j] % 10 == 3) {
					scan_8->SetPixel(i, j, Color::FromArgb(250, 160, 250));
				}
				else if (label[i][j] % 10 == 4) {
					scan_8->SetPixel(i, j, Color::FromArgb(70, 130, 200));
				}
				else if (label[i][j] % 10 == 5) {
					scan_8->SetPixel(i, j, Color::FromArgb(230, 140, 100));
				}
				else if (label[i][j] % 10 == 6) {
					scan_8->SetPixel(i, j, Color::FromArgb(190, 30, 190));
				}
				else if (label[i][j] % 10 == 7) {
					scan_8->SetPixel(i, j, Color::FromArgb(10, 150, 0));
				}
				else if (label[i][j] % 10 == 8) {
					scan_8->SetPixel(i, j, Color::FromArgb(230, 130, 0));
				}
				else if (label[i][j] % 10 == 9) {
					scan_8->SetPixel(i, j, Color::FromArgb(255, 0, 0));
				}
			}
		}
		pictureBox2->Image = scan_8;
	}
	};
}
