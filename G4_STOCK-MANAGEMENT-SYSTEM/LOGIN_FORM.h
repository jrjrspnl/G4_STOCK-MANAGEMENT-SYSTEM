#pragma once

#include "ADMIN_DB.h"
#include "CASHIER_DB.h"


namespace G4STOCKMANAGEMENTSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LOGIN_FORM
	/// </summary>
	public ref class LOGIN_FORM : public System::Windows::Forms::Form
	{
		SqlConnection^ connection = gcnew SqlConnection("Data Source = (localdb)\\MSSQLLocalDB;AttachDbFilename = C:\\Users\\Jerwin\\Documents\\stock.mdf;Integrated Security = True;Encrypt = False");
	public:
		LOGIN_FORM(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		bool checkConnection()
		{
			if (connection->State == ConnectionState::Closed)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LOGIN_FORM()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Panel^ panel2;











	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_Login;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::CheckBox^ Check_ShowPass;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ Txt_Username;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ Txt_Password;












	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LOGIN_FORM::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Check_ShowPass = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Txt_Username = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->Btn_Login = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->Txt_Password = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Check_ShowPass);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->Txt_Username);
			this->panel2->Controls->Add(this->Btn_Login);
			this->panel2->Controls->Add(this->Txt_Password);
			this->panel2->Location = System::Drawing::Point(760, 15);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(472, 660);
			this->panel2->TabIndex = 4;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LOGIN_FORM::panel2_Paint);
			// 
			// Check_ShowPass
			// 
			this->Check_ShowPass->AutoSize = true;
			this->Check_ShowPass->Location = System::Drawing::Point(373, 440);
			this->Check_ShowPass->Margin = System::Windows::Forms::Padding(4);
			this->Check_ShowPass->Name = L"Check_ShowPass";
			this->Check_ShowPass->Size = System::Drawing::Size(18, 17);
			this->Check_ShowPass->TabIndex = 11;
			this->Check_ShowPass->UseVisualStyleBackColor = true;
			this->Check_ShowPass->CheckedChanged += gcnew System::EventHandler(this, &LOGIN_FORM::Check_ShowPass_CheckedChanged);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(412, 10);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(49, 34);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &LOGIN_FORM::pictureBox3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(163, 118);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(157, 123);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(167, 48);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 47);
			this->label3->TabIndex = 5;
			this->label3->Text = L"LOGIN";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(64, 390);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(64, 289);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Username:";
			// 
			// Txt_Username
			// 
			this->Txt_Username->Location = System::Drawing::Point(68, 324);
			this->Txt_Username->Margin = System::Windows::Forms::Padding(4);
			this->Txt_Username->Multiline = true;
			this->Txt_Username->Name = L"Txt_Username";
			this->Txt_Username->Size = System::Drawing::Size(345, 58);
			this->Txt_Username->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->Txt_Username->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Txt_Username->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Txt_Username->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Txt_Username->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->Txt_Username->StateCommon->Border->Rounding = 20;
			this->Txt_Username->StateCommon->Border->Width = 1;
			this->Txt_Username->StateCommon->Content->Color1 = System::Drawing::Color::DimGray;
			this->Txt_Username->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Txt_Username->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 2, 10, 0);
			this->Txt_Username->TabIndex = 0;
			this->Txt_Username->Text = L"Enter Username";
			this->Txt_Username->TextChanged += gcnew System::EventHandler(this, &LOGIN_FORM::Txt_Username_TextChanged);
			this->Txt_Username->Enter += gcnew System::EventHandler(this, &LOGIN_FORM::Txt_Username_Enter);
			this->Txt_Username->Leave += gcnew System::EventHandler(this, &LOGIN_FORM::Txt_Username_Leave);
			// 
			// Btn_Login
			// 
			this->Btn_Login->Location = System::Drawing::Point(168, 506);
			this->Btn_Login->Margin = System::Windows::Forms::Padding(4);
			this->Btn_Login->Name = L"Btn_Login";
			this->Btn_Login->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_Login->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Login->OverrideDefault->Back->ColorAngle = 45;
			this->Btn_Login->OverrideDefault->Border->Color1 = System::Drawing::Color::Transparent;
			this->Btn_Login->OverrideDefault->Border->Color2 = System::Drawing::Color::Transparent;
			this->Btn_Login->OverrideDefault->Border->ColorAngle = 45;
			this->Btn_Login->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Btn_Login->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->Btn_Login->OverrideDefault->Border->Rounding = 20;
			this->Btn_Login->OverrideDefault->Border->Width = 1;
			this->Btn_Login->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->Btn_Login->Size = System::Drawing::Size(156, 54);
			this->Btn_Login->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_Login->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Login->StateCommon->Back->ColorAngle = 45;
			this->Btn_Login->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_Login->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Login->StateCommon->Border->ColorAngle = 45;
			this->Btn_Login->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Btn_Login->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->Btn_Login->StateCommon->Border->Rounding = 20;
			this->Btn_Login->StateCommon->Border->Width = 1;
			this->Btn_Login->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Btn_Login->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->Btn_Login->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_Login->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Login->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Login->StatePressed->Back->ColorAngle = 135;
			this->Btn_Login->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Login->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Login->StatePressed->Border->ColorAngle = 135;
			this->Btn_Login->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Btn_Login->StatePressed->Border->Rounding = 20;
			this->Btn_Login->StatePressed->Border->Width = 1;
			this->Btn_Login->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Login->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_Login->StateTracking->Back->ColorAngle = 45;
			this->Btn_Login->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Login->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_Login->StateTracking->Border->ColorAngle = 45;
			this->Btn_Login->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Btn_Login->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->Btn_Login->StateTracking->Border->Rounding = 20;
			this->Btn_Login->StateTracking->Border->Width = 1;
			this->Btn_Login->TabIndex = 2;
			this->Btn_Login->Values->Text = L"LOGIN";
			this->Btn_Login->Click += gcnew System::EventHandler(this, &LOGIN_FORM::Btn_Login_Click);
			// 
			// Txt_Password
			// 
			this->Txt_Password->Location = System::Drawing::Point(68, 423);
			this->Txt_Password->Margin = System::Windows::Forms::Padding(4);
			this->Txt_Password->Multiline = true;
			this->Txt_Password->Name = L"Txt_Password";
			this->Txt_Password->PasswordChar = '*';
			this->Txt_Password->Size = System::Drawing::Size(345, 58);
			this->Txt_Password->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->Txt_Password->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Txt_Password->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Txt_Password->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Txt_Password->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->Txt_Password->StateCommon->Border->Rounding = 20;
			this->Txt_Password->StateCommon->Border->Width = 1;
			this->Txt_Password->StateCommon->Content->Color1 = System::Drawing::Color::DimGray;
			this->Txt_Password->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Txt_Password->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 2, 10, 0);
			this->Txt_Password->TabIndex = 0;
			this->Txt_Password->Text = L"*************";
			this->Txt_Password->WordWrap = false;
			this->Txt_Password->TextChanged += gcnew System::EventHandler(this, &LOGIN_FORM::Txt_Password_TextChanged);
			this->Txt_Password->Enter += gcnew System::EventHandler(this, &LOGIN_FORM::Txt_Password_Enter);
			this->Txt_Password->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LOGIN_FORM::Txt_Password_KeyPress);
			this->Txt_Password->Leave += gcnew System::EventHandler(this, &LOGIN_FORM::Txt_Password_Leave);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(16, 15);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(747, 660);
			this->panel1->TabIndex = 3;
			// 
			// LOGIN_FORM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1248, 689);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LOGIN_FORM";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LOGIN_FORM";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void Txt_Username_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (Txt_Username->Text == "Enter Username") {
			Txt_Username->Text = "";
			Txt_Username->ForeColor = System::Drawing::Color::Black;
		}
	}
private: System::Void Txt_Username_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (Txt_Username->Text == "") {
		Txt_Username->Text = "Enter Username";
		Txt_Username->ForeColor = System::Drawing::Color::Silver;
	}
}
private: System::Void Txt_Password_Enter(System::Object^ sender, System::EventArgs^ e) {
	 if (Txt_Password->Text == "*************") {
		Txt_Password->Text = "";
		Txt_Password->ForeColor = System::Drawing::Color::Black;
		Txt_Password->UseSystemPasswordChar = Check_ShowPass->Checked;
	}
}
private: System::Void Txt_Password_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (Txt_Password->Text == "") {
		Txt_Password->UseSystemPasswordChar = true;
		Txt_Password->Text = "*************";
		Txt_Password->ForeColor = System::Drawing::Color::Silver;
	}
}
private: System::Void Check_ShowPass_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Txt_Password->Text != "Enter Password") { 
		Txt_Password->UseSystemPasswordChar = Check_ShowPass->Checked;
	}
}
	private: System::Void Btn_Login_Click(System::Object^ sender, System::EventArgs^ e) {

		if (Txt_Username->Text == "Enter Username" || Txt_Password->Text == "*************") {
			MessageBox::Show("Please enter your username and password!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (checkConnection()) {
			try {
				connection->Open();

				System::String^ selectData = "SELECT COUNT (*) FROM users WHERE username = @usern AND password = @pass AND status = @status";
				SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);
				cmd->Parameters->AddWithValue("@usern", Txt_Username->Text->Trim());
				cmd->Parameters->AddWithValue("@pass", Txt_Password->Text->Trim());
				cmd->Parameters->AddWithValue("@status","Active");

				int rowCount = (int)cmd->ExecuteScalar();

				if (rowCount > 0) {

					System::String^ selectRole= "SELECT role FROM users WHERE username = @usern AND password = @pass";

					SqlCommand^ getRole = gcnew SqlCommand(selectRole, connection); {
						getRole->Parameters->AddWithValue("@usern", Txt_Username->Text->Trim());
						getRole->Parameters->AddWithValue("@pass", Txt_Password->Text->Trim());

						System::String^ userRole = (System::String^)getRole->ExecuteScalar();

						MessageBox::Show("Login Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

						if (userRole == "Admin") {
							Txt_Username->Focus();
							this->Hide();
							ADMIN_DB^ obj1 = gcnew ADMIN_DB(this);
							obj1->ShowDialog();
						}
						else if (userRole == "Employee") {
							Txt_Username->Focus();
							this->Hide();
							CASHIER_DB^ ob1 = gcnew CASHIER_DB(this);
							ob1->ShowDialog();
												
						}		
						Txt_Username->Text = "";
						Txt_Password->Text = "*************";
						Txt_Password->ForeColor = System::Drawing::Color::Silver;
						Txt_Password->UseSystemPasswordChar = false;
					}
				}
				else {
					MessageBox::Show("Incorrect password or username!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
					Txt_Username->Text = "Enter Username";
					Txt_Username->ForeColor = System::Drawing::Color::Silver;
					Txt_Password->Text = "*************";
					Txt_Password->ForeColor = System::Drawing::Color::Silver;
					Txt_Password->UseSystemPasswordChar = false;
					Txt_Username->Focus();
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				connection->Close();
			}
		}
	}
	
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {

		Application::Exit();
	}
private: System::Void Txt_Username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txt_Password_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)13) {  // 13 is the Enter key code
		Btn_Login_Click(sender, e);  // Call the Login button click event
	}
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Txt_Password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}





