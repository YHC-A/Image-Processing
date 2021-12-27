#pragma once
#include <iostream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Cut 的摘要
	/// </summary>
	public ref class Cut : public System::Windows::Forms::Form
	{
	public:
		Cut(void)
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
		~Cut()
		{
			if (components)
			{
				delete components;
			}
		}
	public: static Bitmap^ scr;
	public: int X1, X2, Y1, Y2;

	public: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::RadioButton^ radioButton1;

	private: System::Windows::Forms::RadioButton^ radioButton3;

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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox1->Location = System::Drawing::Point(16, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(341, 320);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Cut::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Cut::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Cut::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Cut::pictureBox1_MouseUp);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(560, 15);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(341, 320);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->radioButton1->Location = System::Drawing::Point(412, 84);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(90, 24);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"長方形";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->radioButton3->Location = System::Drawing::Point(412, 132);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(90, 24);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->Text = L"橢圓形";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// Cut
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(920, 351);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Cut";
			this->Text = L"Cut";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool mousemove = false;
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (radioButton1->Checked == true || radioButton3->Checked == true) {
			X1 = e->X;
			Y1 = e->Y;
			mousemove = true;
		}
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (radioButton1->Checked == true) {
			X2 = e->X;
			Y2 = e->Y;
			int Xmax, Xmin, Ymax, Ymin;
			Bitmap^ cut = gcnew Bitmap(abs(X1 - X2) + 1, abs(Y1 - Y2) + 1);
			Xmax = fmax(X1, X2);
			Xmin = fmin(X1, X2);
			Ymax = fmax(Y1, Y2);
			Ymin = fmin(Y1, Y2);
			for (int i = Xmin; i < Xmax; i++) {
				for (int j = Ymin; j < Ymax; j++) {
					cut->SetPixel(i - Xmin, j - Ymin, scr->GetPixel(i, j));
				}
			}
			this->pictureBox2->Image = cut;
		}
		if (radioButton3->Checked == true) {
			X2 = e->X;
			Y2 = e->Y;
			int Xmax, Xmin, Ymax, Ymin;
			Bitmap^ cut = gcnew Bitmap(abs(X1 - X2) + 1, abs(Y1 - Y2) + 1);
			Xmax = fmax(X1, X2);
			Xmin = fmin(X1, X2);
			Ymax = fmax(Y1, Y2);
			Ymin = fmin(Y1, Y2);
			for (int i = Xmin; i < Xmax; i++) {
				for (int j = Ymin; j < Ymax; j++) {
					float Xcenter = (Xmax + Xmin) / 2;
					float Ycenter = (Ymax + Ymin) / 2;
					float surround = pow(i - Xcenter, 2) / pow(Xmax - Xcenter, 2) + pow(j - Ycenter, 2) / pow(Ymax - Ycenter, 2);
					if (surround <= 1) {
						cut->SetPixel(i - Xmin, j - Ymin, scr->GetPixel(i, j));
					}
				}
			}
			pictureBox2->Image = cut;
		}
		//畫矩形的部分
		mousemove = false;
		Refresh();						//delete 圖形
		this->pictureBox1->Image = scr;
	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		if (radioButton1->Checked == true) {
			Pen^ pen = gcnew Pen(Color::White, 1.0F);
			pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;	
			Rectangle Mouserec;									
			Mouserec.X = Math::Min(X1, X2);						
			Mouserec.Y = Math::Min(Y1, Y2);					
			Mouserec.Width = Math::Abs(X1 - X2);		
			Mouserec.Height = Math::Abs(Y1 - Y2);

			e->Graphics->DrawRectangle(pen, Mouserec);			
		}
		if (radioButton3->Checked == true) {
			Pen^ pen = gcnew Pen(Color::White, 1.0F);
			pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;	//dashstyle
			Rectangle Mouserec;										
			Mouserec.X = Math::Min(X1, X2);			
			Mouserec.Y = Math::Min(Y1, Y2);							
			Mouserec.Width = Math::Abs(X1 - X2);			
			Mouserec.Height = Math::Abs(Y1 - Y2);

			e->Graphics->DrawEllipse(pen, Mouserec);
		}
	}

	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (mousemove) {
			X2 = e->X;
			Y2 = e->Y;
			this->Refresh();					

		}
	}


	};
}
