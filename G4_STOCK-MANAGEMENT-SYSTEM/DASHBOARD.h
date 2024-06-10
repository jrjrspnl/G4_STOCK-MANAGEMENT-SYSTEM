#pragma once

namespace G4STOCKMANAGEMENTSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DASHBOARD
	/// </summary>
	public ref class DASHBOARD : public System::Windows::Forms::Form
	{
	public:
		DASHBOARD(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DASHBOARD()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

















	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView1;





	private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ kryptonPanel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ kryptonPanel2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ kryptonPanel3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label8;
	private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ kryptonPanel4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Role;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::Label^ label9;












	protected:

	protected:


	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DASHBOARD::typeid));
			this->kryptonDataGridView1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Role = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->kryptonPanel1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->kryptonPanel2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->kryptonPanel3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->kryptonPanel4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonPanel1))->BeginInit();
			this->kryptonPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonPanel2))->BeginInit();
			this->kryptonPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonPanel3))->BeginInit();
			this->kryptonPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonPanel4))->BeginInit();
			this->kryptonPanel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// kryptonDataGridView1
			// 
			this->kryptonDataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->kryptonDataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID,
					this->Username, this->Password, this->Role, this->Date
			});
			this->kryptonDataGridView1->Location = System::Drawing::Point(41, 292);
			this->kryptonDataGridView1->Name = L"kryptonDataGridView1";
			this->kryptonDataGridView1->Size = System::Drawing::Size(722, 284);
			this->kryptonDataGridView1->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
			this->kryptonDataGridView1->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
			this->kryptonDataGridView1->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
			this->kryptonDataGridView1->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
			this->kryptonDataGridView1->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
			this->kryptonDataGridView1->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->kryptonDataGridView1->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->kryptonDataGridView1->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->kryptonDataGridView1->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->kryptonDataGridView1->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonDataGridView1->TabIndex = 16;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 135;
			// 
			// Username
			// 
			this->Username->HeaderText = L"Username";
			this->Username->Name = L"Username";
			this->Username->Width = 135;
			// 
			// Password
			// 
			this->Password->HeaderText = L"Password";
			this->Password->Name = L"Password";
			this->Password->Width = 135;
			// 
			// Role
			// 
			this->Role->HeaderText = L"Role";
			this->Role->Name = L"Role";
			this->Role->Width = 135;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->Width = 143;
			// 
			// kryptonPanel1
			// 
			this->kryptonPanel1->Controls->Add(this->label5);
			this->kryptonPanel1->Controls->Add(this->pictureBox1);
			this->kryptonPanel1->Controls->Add(this->label1);
			this->kryptonPanel1->Location = System::Drawing::Point(20, 40);
			this->kryptonPanel1->Name = L"kryptonPanel1";
			this->kryptonPanel1->Size = System::Drawing::Size(170, 112);
			this->kryptonPanel1->StateCommon->Color1 = System::Drawing::Color::White;
			this->kryptonPanel1->StateCommon->Color2 = System::Drawing::Color::White;
			this->kryptonPanel1->StateCommon->ImageAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Local;
			this->kryptonPanel1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 28);
			this->label5->TabIndex = 0;
			this->label5->Text = L"100";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(101, 53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(54, 50);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Users";
			// 
			// kryptonPanel2
			// 
			this->kryptonPanel2->Controls->Add(this->label6);
			this->kryptonPanel2->Controls->Add(this->pictureBox2);
			this->kryptonPanel2->Controls->Add(this->label2);
			this->kryptonPanel2->Location = System::Drawing::Point(219, 40);
			this->kryptonPanel2->Name = L"kryptonPanel2";
			this->kryptonPanel2->Size = System::Drawing::Size(170, 112);
			this->kryptonPanel2->StateCommon->Color1 = System::Drawing::Color::White;
			this->kryptonPanel2->StateCommon->Color2 = System::Drawing::Color::White;
			this->kryptonPanel2->StateCommon->ImageAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Local;
			this->kryptonPanel2->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 28);
			this->label6->TabIndex = 5;
			this->label6->Text = L"5";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(100, 53);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(54, 50);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Customers";
			// 
			// kryptonPanel3
			// 
			this->kryptonPanel3->Controls->Add(this->label7);
			this->kryptonPanel3->Controls->Add(this->pictureBox3);
			this->kryptonPanel3->Controls->Add(this->label3);
			this->kryptonPanel3->Location = System::Drawing::Point(417, 40);
			this->kryptonPanel3->Name = L"kryptonPanel3";
			this->kryptonPanel3->Size = System::Drawing::Size(170, 112);
			this->kryptonPanel3->StateCommon->Color1 = System::Drawing::Color::White;
			this->kryptonPanel3->StateCommon->Color2 = System::Drawing::Color::White;
			this->kryptonPanel3->StateCommon->ImageAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Local;
			this->kryptonPanel3->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 59);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 28);
			this->label7->TabIndex = 6;
			this->label7->Text = L"500";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(101, 53);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(54, 50);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Daily Income";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Total Income";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(105, 53);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 50);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(17, 59);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 28);
			this->label8->TabIndex = 7;
			this->label8->Text = L"2000";
			// 
			// kryptonPanel4
			// 
			this->kryptonPanel4->Controls->Add(this->label8);
			this->kryptonPanel4->Controls->Add(this->pictureBox4);
			this->kryptonPanel4->Controls->Add(this->label4);
			this->kryptonPanel4->Location = System::Drawing::Point(614, 40);
			this->kryptonPanel4->Name = L"kryptonPanel4";
			this->kryptonPanel4->Size = System::Drawing::Size(170, 112);
			this->kryptonPanel4->StateCommon->Color1 = System::Drawing::Color::White;
			this->kryptonPanel4->StateCommon->Color2 = System::Drawing::Color::White;
			this->kryptonPanel4->StateCommon->ImageAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Local;
			this->kryptonPanel4->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label9);
			this->panel1->Location = System::Drawing::Point(24, 243);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(764, 347);
			this->panel1->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(19, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 23);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Today\'s Customers";
			// 
			// DASHBOARD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(809, 605);
			this->Controls->Add(this->kryptonPanel4);
			this->Controls->Add(this->kryptonDataGridView1);
			this->Controls->Add(this->kryptonPanel3);
			this->Controls->Add(this->kryptonPanel2);
			this->Controls->Add(this->kryptonPanel1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DASHBOARD";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DASHBOARD";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonPanel1))->EndInit();
			this->kryptonPanel1->ResumeLayout(false);
			this->kryptonPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonPanel2))->EndInit();
			this->kryptonPanel2->ResumeLayout(false);
			this->kryptonPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonPanel3))->EndInit();
			this->kryptonPanel3->ResumeLayout(false);
			this->kryptonPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonPanel4))->EndInit();
			this->kryptonPanel4->ResumeLayout(false);
			this->kryptonPanel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
};
}
