#pragma once
#include "CustomersData.h"

namespace G4STOCKMANAGEMENTSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for DASHBOARD
	/// </summary>
	public ref class DASHBOARD : public System::Windows::Forms::Form
	{
		SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\stock.mdf;Integrated Security=True;Connect Timeout=30");
	public:
		DASHBOARD(void)
		{
			InitializeComponent();

			displayCCustomersData();
			displayAllUsers();
			displayAllCustomers();
			displayAllProducts();
			displayDailyIncome();
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

		void displayCCustomersData() {
			CustomersData^ cData = gcnew CustomersData();

			List<CustomersData^>^ listData = cData->AllCustomersData();
			Table_Customers->DataSource = listData;

		}

		void displayAllUsers() {
			
			if (checkConnection())
			{
				try
				{
					connection->Open();

					String^ selectData = "SELECT COUNT(id) FROM users WHERE status = @status";

					SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

					cmd->Parameters->AddWithValue("@status", "Active");

					SqlDataReader^ reader = cmd->ExecuteReader();

					if (reader->Read())
					{
						int count = Convert::ToInt32(reader[0]);
						Lbl_Users->Text = count.ToString();
					}

				}
				catch(Exception^ ex)
				{
					MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally
				{
					connection->Close();
				}
			}
		}

		void displayAllCustomers() {

			if (checkConnection())
			{
				try
				{
					connection->Open();

					String^ selectData = "SELECT COUNT(id) FROM customers";

					SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

					SqlDataReader^ reader = cmd->ExecuteReader();

					if (reader->Read())
					{
						int count = Convert::ToInt32(reader[0]);
						Lbl_Customers->Text = count.ToString();
					}

				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally
				{
					connection->Close();
				}
			}
		}

		void displayAllProducts() {

			if (checkConnection())
			{
				try
				{
					connection->Open();

					String^ selectData = "SELECT COUNT(id) FROM products";

					SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

					SqlDataReader^ reader = cmd->ExecuteReader();

					if (reader->Read())
					{
						int count = Convert::ToInt32(reader[0]);
						Lbl_AllProducts->Text = count.ToString();
					}

				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally
				{
					connection->Close();
				}
			}
		}

		void displayDailyIncome() {

			if (checkConnection())
			{
				try
				{
					connection->Open();

					String^ selectData = "SELECT SUM(total_price) FROM customers WHERE order_date = @date";

					SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

					DateTime today = DateTime::Today;
					String^ getToday = today.ToString("yyyy-MM-dd");

					cmd->Parameters->AddWithValue("@date", getToday);

					SqlDataReader^ reader = cmd->ExecuteReader();

					if (reader->Read())
					{
						System::Object^ value = reader[0];
						if (value != DBNull::Value) 
						{
							int count = Convert::ToInt32(reader[0]);
							Lbl_DailyIncome->Text = "P" + count.ToString("0.00");
						}
					}
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally
				{
					connection->Close();
				}
			}
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























	private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ kryptonPanel1;
	private: System::Windows::Forms::Label^ Lbl_Users;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ kryptonPanel2;
	private: System::Windows::Forms::Label^ Lbl_Customers;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ kryptonPanel3;
private: System::Windows::Forms::Label^ Lbl_AllProducts;



	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ Lbl_DailyIncome;


	private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ kryptonPanel4;
	private: System::Windows::Forms::Panel^ panel1;





	private: System::Windows::Forms::Label^ label9;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ Table_Customers;













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
			this->kryptonPanel1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
			this->Lbl_Users = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->kryptonPanel2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
			this->Lbl_Customers = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->kryptonPanel3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
			this->Lbl_AllProducts = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Lbl_DailyIncome = (gcnew System::Windows::Forms::Label());
			this->kryptonPanel4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Table_Customers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Customers))->BeginInit();
			this->SuspendLayout();
			// 
			// kryptonPanel1
			// 
			this->kryptonPanel1->Controls->Add(this->Lbl_Users);
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
			// Lbl_Users
			// 
			this->Lbl_Users->AutoSize = true;
			this->Lbl_Users->BackColor = System::Drawing::Color::Transparent;
			this->Lbl_Users->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F));
			this->Lbl_Users->Location = System::Drawing::Point(23, 64);
			this->Lbl_Users->Name = L"Lbl_Users";
			this->Lbl_Users->Size = System::Drawing::Size(21, 22);
			this->Lbl_Users->TabIndex = 0;
			this->Lbl_Users->Text = L"0";
			this->Lbl_Users->Click += gcnew System::EventHandler(this, &DASHBOARD::Lbl_Users_Click);
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
			this->kryptonPanel2->Controls->Add(this->Lbl_Customers);
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
			// Lbl_Customers
			// 
			this->Lbl_Customers->AutoSize = true;
			this->Lbl_Customers->BackColor = System::Drawing::Color::Transparent;
			this->Lbl_Customers->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F));
			this->Lbl_Customers->Location = System::Drawing::Point(23, 64);
			this->Lbl_Customers->Name = L"Lbl_Customers";
			this->Lbl_Customers->Size = System::Drawing::Size(21, 22);
			this->Lbl_Customers->TabIndex = 5;
			this->Lbl_Customers->Text = L"0";
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
			this->kryptonPanel3->Controls->Add(this->Lbl_AllProducts);
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
			// Lbl_AllProducts
			// 
			this->Lbl_AllProducts->AutoSize = true;
			this->Lbl_AllProducts->BackColor = System::Drawing::Color::Transparent;
			this->Lbl_AllProducts->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F));
			this->Lbl_AllProducts->Location = System::Drawing::Point(23, 64);
			this->Lbl_AllProducts->Name = L"Lbl_AllProducts";
			this->Lbl_AllProducts->Size = System::Drawing::Size(21, 22);
			this->Lbl_AllProducts->TabIndex = 6;
			this->Lbl_AllProducts->Text = L"0";
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
			this->label3->Location = System::Drawing::Point(11, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"All Products";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Daily Income";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(109, 55);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(48, 44);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// Lbl_DailyIncome
			// 
			this->Lbl_DailyIncome->AutoSize = true;
			this->Lbl_DailyIncome->BackColor = System::Drawing::Color::Transparent;
			this->Lbl_DailyIncome->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Lbl_DailyIncome->Location = System::Drawing::Point(11, 64);
			this->Lbl_DailyIncome->Name = L"Lbl_DailyIncome";
			this->Lbl_DailyIncome->Size = System::Drawing::Size(21, 22);
			this->Lbl_DailyIncome->TabIndex = 7;
			this->Lbl_DailyIncome->Text = L"0";
			this->Lbl_DailyIncome->Click += gcnew System::EventHandler(this, &DASHBOARD::Lbl_DailyIncome_Click);
			// 
			// kryptonPanel4
			// 
			this->kryptonPanel4->Controls->Add(this->pictureBox4);
			this->kryptonPanel4->Controls->Add(this->Lbl_DailyIncome);
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
			this->panel1->Controls->Add(this->Table_Customers);
			this->panel1->Location = System::Drawing::Point(20, 180);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(764, 410);
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
			// Table_Customers
			// 
			this->Table_Customers->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Table_Customers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_Customers->Location = System::Drawing::Point(16, 49);
			this->Table_Customers->Name = L"Table_Customers";
			this->Table_Customers->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Table_Customers->RowHeadersVisible = false;
			this->Table_Customers->Size = System::Drawing::Size(723, 344);
			this->Table_Customers->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
			this->Table_Customers->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
			this->Table_Customers->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
			this->Table_Customers->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
			this->Table_Customers->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
			this->Table_Customers->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_Customers->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_Customers->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_Customers->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_Customers->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Table_Customers->TabIndex = 24;
			// 
			// DASHBOARD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(809, 605);
			this->Controls->Add(this->kryptonPanel3);
			this->Controls->Add(this->kryptonPanel2);
			this->Controls->Add(this->kryptonPanel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->kryptonPanel4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DASHBOARD";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DASHBOARD";
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Customers))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void Lbl_Users_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Lbl_DailyIncome_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
