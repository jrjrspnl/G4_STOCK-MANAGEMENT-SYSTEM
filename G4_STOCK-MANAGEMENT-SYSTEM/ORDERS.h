#pragma once
#include "ProductsData.h"
#include "OrdersData.h"

namespace G4STOCKMANAGEMENTSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Data::SqlClient;
    using namespace System::Drawing::Printing;
    using namespace System::Drawing::Text;


	/// <summary>
	/// Summary for ORDERS
	/// </summary>
    public ref class ORDERS : public System::Windows::Forms::Form
    {
        SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\stock.mdf;Integrated Security=True;Connect Timeout=30");
    public:
        ORDERS(void)
        {
            InitializeComponent();
            AllAvailableProducts();
            AllCategoriesData();
            AllOrdersData();
            displayTotalPrice();

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

        void AllAvailableProducts() {

            ProductsData^ pData = gcnew ProductsData();
            List<ProductsData^>^ listData = pData->AllAvailableProducts();
            Table_AvailableProd->DataSource = listData;

        }

        void AllCategoriesData() {
            if (checkConnection())
            {
                try
                {
                    connection->Open();

              
                    System::String^ selectData = "SELECT DISTINCT category FROM products WHERE status = 'Available'";

                    SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);
                    SqlDataReader^ reader = cmd->ExecuteReader();

                    Cbox_Cat->Items->Clear();
                    while (reader->Read())
                    {
                        System::String^ item = reader->GetString(0);
                        Cbox_Cat->Items->Add(item);
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

        void AllOrdersData() {

            OrdersData^ oData = gcnew OrdersData();
            List<OrdersData^>^ listData =oData->AllOrdersData();
            Table_Orders->DataSource = listData;
        }


    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~ORDERS()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Panel^ panel3;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_Receipt;
    protected:

    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_Pay;


    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TextBox^ Txt_Amount;


    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label11;




















    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ Lbl_Price;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_OrderClear;



    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_OrderDelete;


    private: System::Windows::Forms::Label^ Lbl_ProductName;

    private: System::Windows::Forms::Label^ label5;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_OrderAdd;
    private: ComponentFactory::Krypton::Toolkit::KryptonNumericUpDown^ Num_Quantity;



    private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ Cbox_ProdID;



    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ Cbox_Cat;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ Lbl_TotalPrice;
    private: System::Windows::Forms::Label^ Lbl_Change;
    private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ Table_Orders;
    private: System::Windows::Forms::Label^ label6;
    private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ Table_AvailableProd;
private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;





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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ORDERS::typeid));
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->Table_Orders = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
            this->Lbl_TotalPrice = (gcnew System::Windows::Forms::Label());
            this->Btn_Receipt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_Pay = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Lbl_Change = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->Txt_Amount = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->Table_AvailableProd = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
            this->Lbl_Price = (gcnew System::Windows::Forms::Label());
            this->Btn_OrderClear = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_OrderDelete = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Lbl_ProductName = (gcnew System::Windows::Forms::Label());
            this->Btn_OrderAdd = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Num_Quantity = (gcnew ComponentFactory::Krypton::Toolkit::KryptonNumericUpDown());
            this->Cbox_ProdID = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->Cbox_Cat = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
            this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Orders))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_AvailableProd))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_ProdID))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_Cat))->BeginInit();
            this->SuspendLayout();
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::White;
            this->panel3->Controls->Add(this->Table_Orders);
            this->panel3->Controls->Add(this->Lbl_TotalPrice);
            this->panel3->Controls->Add(this->Btn_Receipt);
            this->panel3->Controls->Add(this->Btn_Pay);
            this->panel3->Controls->Add(this->Lbl_Change);
            this->panel3->Controls->Add(this->label14);
            this->panel3->Controls->Add(this->label12);
            this->panel3->Controls->Add(this->Txt_Amount);
            this->panel3->Controls->Add(this->label10);
            this->panel3->Controls->Add(this->label8);
            this->panel3->Controls->Add(this->label11);
            this->panel3->Location = System::Drawing::Point(478, 12);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(546, 428);
            this->panel3->TabIndex = 29;
            // 
            // Table_Orders
            // 
            this->Table_Orders->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->Table_Orders->Location = System::Drawing::Point(14, 44);
            this->Table_Orders->Name = L"Table_Orders";
            this->Table_Orders->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->Table_Orders->RowHeadersVisible = false;
            this->Table_Orders->Size = System::Drawing::Size(519, 180);
            this->Table_Orders->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
            this->Table_Orders->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
            this->Table_Orders->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
            this->Table_Orders->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
            this->Table_Orders->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
            this->Table_Orders->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Orders->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Orders->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Orders->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Orders->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Table_Orders->TabIndex = 36;
            this->Table_Orders->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ORDERS::Table_Orders_CellClick);
            // 
            // Lbl_TotalPrice
            // 
            this->Lbl_TotalPrice->AutoSize = true;
            this->Lbl_TotalPrice->BackColor = System::Drawing::Color::White;
            this->Lbl_TotalPrice->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Lbl_TotalPrice->Location = System::Drawing::Point(16, 273);
            this->Lbl_TotalPrice->Name = L"Lbl_TotalPrice";
            this->Lbl_TotalPrice->Size = System::Drawing::Size(33, 17);
            this->Lbl_TotalPrice->TabIndex = 35;
            this->Lbl_TotalPrice->Text = L"0.00";
            // 
            // Btn_Receipt
            // 
            this->Btn_Receipt->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->Btn_Receipt->Location = System::Drawing::Point(319, 330);
            this->Btn_Receipt->Name = L"Btn_Receipt";
            this->Btn_Receipt->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
            this->Btn_Receipt->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
            this->Btn_Receipt->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
            this->Btn_Receipt->OverrideDefault->Border->Color2 = System::Drawing::Color::DodgerBlue;
            this->Btn_Receipt->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_Receipt->Size = System::Drawing::Size(150, 32);
            this->Btn_Receipt->StateCommon->Back->Color1 = System::Drawing::Color::DodgerBlue;
            this->Btn_Receipt->StateCommon->Back->Color2 = System::Drawing::Color::DodgerBlue;
            this->Btn_Receipt->StateCommon->Border->Color1 = System::Drawing::Color::DodgerBlue;
            this->Btn_Receipt->StateCommon->Border->Color2 = System::Drawing::Color::DodgerBlue;
            this->Btn_Receipt->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_Receipt->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_Receipt->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_Receipt->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_Receipt->TabIndex = 29;
            this->Btn_Receipt->Values->Text = L"Receipt";
            this->Btn_Receipt->Click += gcnew System::EventHandler(this, &ORDERS::Btn_Receipt_Click);
            // 
            // Btn_Pay
            // 
            this->Btn_Pay->Location = System::Drawing::Point(319, 273);
            this->Btn_Pay->Name = L"Btn_Pay";
            this->Btn_Pay->OverrideDefault->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->OverrideDefault->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->OverrideDefault->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->OverrideDefault->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_Pay->OverrideFocus->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->OverrideFocus->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->OverrideFocus->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->OverrideFocus->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_Pay->Size = System::Drawing::Size(150, 32);
            this->Btn_Pay->StateCommon->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateCommon->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateCommon->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateCommon->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_Pay->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_Pay->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_Pay->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_Pay->StateDisabled->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateDisabled->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateDisabled->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateDisabled->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_Pay->StateNormal->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateNormal->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateNormal->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateNormal->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_Pay->StatePressed->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StatePressed->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StatePressed->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StatePressed->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_Pay->StatePressed->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Btn_Pay->StateTracking->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateTracking->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateTracking->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateTracking->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_Pay->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_Pay->TabIndex = 29;
            this->Btn_Pay->Values->Text = L"Pay Now";
            this->Btn_Pay->Click += gcnew System::EventHandler(this, &ORDERS::Btn_Pay_Click);
            // 
            // Lbl_Change
            // 
            this->Lbl_Change->AutoSize = true;
            this->Lbl_Change->BackColor = System::Drawing::Color::White;
            this->Lbl_Change->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Lbl_Change->Location = System::Drawing::Point(16, 372);
            this->Lbl_Change->Name = L"Lbl_Change";
            this->Lbl_Change->Size = System::Drawing::Size(33, 17);
            this->Lbl_Change->TabIndex = 34;
            this->Lbl_Change->Text = L"0.00";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->BackColor = System::Drawing::Color::White;
            this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(11, 352);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(63, 16);
            this->label14->TabIndex = 33;
            this->label14->Text = L"Change:";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::White;
            this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(11, 299);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(61, 16);
            this->label12->TabIndex = 32;
            this->label12->Text = L"Amount:";
            // 
            // Txt_Amount
            // 
            this->Txt_Amount->Location = System::Drawing::Point(14, 320);
            this->Txt_Amount->Name = L"Txt_Amount";
            this->Txt_Amount->Size = System::Drawing::Size(159, 20);
            this->Txt_Amount->TabIndex = 31;
            this->Txt_Amount->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ORDERS::Txt_Amount_KeyDown);
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::White;
            this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(11, 320);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(22, 17);
            this->label10->TabIndex = 30;
            this->label10->Text = L"10";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(10, 10);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(71, 23);
            this->label8->TabIndex = 19;
            this->label8->Text = L"Orders";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::White;
            this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(11, 250);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(78, 16);
            this->label11->TabIndex = 29;
            this->label11->Text = L"Total Price:";
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::White;
            this->panel4->Controls->Add(this->label6);
            this->panel4->Controls->Add(this->Table_AvailableProd);
            this->panel4->Controls->Add(this->Lbl_Price);
            this->panel4->Controls->Add(this->Btn_OrderClear);
            this->panel4->Controls->Add(this->Btn_OrderDelete);
            this->panel4->Controls->Add(this->Lbl_ProductName);
            this->panel4->Controls->Add(this->Btn_OrderAdd);
            this->panel4->Controls->Add(this->Num_Quantity);
            this->panel4->Controls->Add(this->Cbox_ProdID);
            this->panel4->Controls->Add(this->label4);
            this->panel4->Controls->Add(this->label3);
            this->panel4->Controls->Add(this->label2);
            this->panel4->Controls->Add(this->Cbox_Cat);
            this->panel4->Controls->Add(this->label1);
            this->panel4->Controls->Add(this->label5);
            this->panel4->Location = System::Drawing::Point(12, 12);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(448, 428);
            this->panel4->TabIndex = 27;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(9, 13);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(185, 23);
            this->label6->TabIndex = 37;
            this->label6->Text = L"Available Products";
            // 
            // Table_AvailableProd
            // 
            this->Table_AvailableProd->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->Table_AvailableProd->Location = System::Drawing::Point(10, 44);
            this->Table_AvailableProd->Name = L"Table_AvailableProd";
            this->Table_AvailableProd->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->Table_AvailableProd->RowHeadersVisible = false;
            this->Table_AvailableProd->Size = System::Drawing::Size(425, 180);
            this->Table_AvailableProd->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
            this->Table_AvailableProd->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
            this->Table_AvailableProd->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
            this->Table_AvailableProd->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
            this->Table_AvailableProd->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
            this->Table_AvailableProd->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_AvailableProd->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_AvailableProd->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_AvailableProd->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_AvailableProd->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Table_AvailableProd->TabIndex = 37;
            // 
            // Lbl_Price
            // 
            this->Lbl_Price->AutoSize = true;
            this->Lbl_Price->BackColor = System::Drawing::Color::White;
            this->Lbl_Price->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Lbl_Price->Location = System::Drawing::Point(339, 329);
            this->Lbl_Price->Name = L"Lbl_Price";
            this->Lbl_Price->Size = System::Drawing::Size(0, 17);
            this->Lbl_Price->TabIndex = 28;
            // 
            // Btn_OrderClear
            // 
            this->Btn_OrderClear->Location = System::Drawing::Point(307, 372);
            this->Btn_OrderClear->Name = L"Btn_OrderClear";
            this->Btn_OrderClear->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_OrderClear->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_OrderClear->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_OrderClear->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_OrderClear->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderClear->Size = System::Drawing::Size(85, 40);
            this->Btn_OrderClear->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_OrderClear->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_OrderClear->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_OrderClear->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_OrderClear->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderClear->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_OrderClear->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_OrderClear->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_OrderClear->TabIndex = 15;
            this->Btn_OrderClear->Values->Text = L"CLEAR";
            this->Btn_OrderClear->Click += gcnew System::EventHandler(this, &ORDERS::Btn_OrderClear_Click);
            // 
            // Btn_OrderDelete
            // 
            this->Btn_OrderDelete->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->Btn_OrderDelete->Location = System::Drawing::Point(179, 372);
            this->Btn_OrderDelete->Name = L"Btn_OrderDelete";
            this->Btn_OrderDelete->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_OrderDelete->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_OrderDelete->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_OrderDelete->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_OrderDelete->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderDelete->Size = System::Drawing::Size(85, 40);
            this->Btn_OrderDelete->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_OrderDelete->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_OrderDelete->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_OrderDelete->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_OrderDelete->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderDelete->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_OrderDelete->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_OrderDelete->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_OrderDelete->TabIndex = 16;
            this->Btn_OrderDelete->Values->Text = L"Delete";
            this->Btn_OrderDelete->Click += gcnew System::EventHandler(this, &ORDERS::Btn_OrderDelete_Click);
            // 
            // Lbl_ProductName
            // 
            this->Lbl_ProductName->AutoSize = true;
            this->Lbl_ProductName->BackColor = System::Drawing::Color::White;
            this->Lbl_ProductName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Lbl_ProductName->Location = System::Drawing::Point(229, 329);
            this->Lbl_ProductName->Name = L"Lbl_ProductName";
            this->Lbl_ProductName->Size = System::Drawing::Size(0, 17);
            this->Lbl_ProductName->TabIndex = 27;
            // 
            // Btn_OrderAdd
            // 
            this->Btn_OrderAdd->Location = System::Drawing::Point(50, 372);
            this->Btn_OrderAdd->Name = L"Btn_OrderAdd";
            this->Btn_OrderAdd->OverrideDefault->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->OverrideDefault->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->OverrideDefault->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->OverrideDefault->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderAdd->OverrideFocus->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->OverrideFocus->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->OverrideFocus->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->OverrideFocus->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderAdd->Size = System::Drawing::Size(85, 40);
            this->Btn_OrderAdd->StateCommon->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateCommon->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateCommon->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateCommon->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderAdd->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_OrderAdd->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_OrderAdd->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_OrderAdd->StateDisabled->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateDisabled->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateDisabled->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateDisabled->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderAdd->StateNormal->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateNormal->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateNormal->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateNormal->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderAdd->StatePressed->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StatePressed->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StatePressed->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StatePressed->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderAdd->StatePressed->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Btn_OrderAdd->StateTracking->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateTracking->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateTracking->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateTracking->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_OrderAdd->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_OrderAdd->TabIndex = 17;
            this->Btn_OrderAdd->Values->Text = L"Add";
            this->Btn_OrderAdd->Click += gcnew System::EventHandler(this, &ORDERS::Btn_OrderAdd_Click);
            // 
            // Num_Quantity
            // 
            this->Num_Quantity->Location = System::Drawing::Point(232, 270);
            this->Num_Quantity->Name = L"Num_Quantity";
            this->Num_Quantity->Size = System::Drawing::Size(177, 26);
            this->Num_Quantity->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Num_Quantity->StateActive->Border->Color1 = System::Drawing::Color::LightGray;
            this->Num_Quantity->StateActive->Border->Color2 = System::Drawing::Color::LightGray;
            this->Num_Quantity->StateActive->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Num_Quantity->StateActive->Border->Rounding = 5;
            this->Num_Quantity->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Num_Quantity->TabIndex = 25;
            this->Num_Quantity->ValueChanged += gcnew System::EventHandler(this, &ORDERS::Num_Quantity_ValueChanged);
            // 
            // Cbox_ProdID
            // 
            this->Cbox_ProdID->DropDownWidth = 117;
            this->Cbox_ProdID->Location = System::Drawing::Point(26, 325);
            this->Cbox_ProdID->Name = L"Cbox_ProdID";
            this->Cbox_ProdID->Size = System::Drawing::Size(177, 25);
            this->Cbox_ProdID->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Cbox_ProdID->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->Cbox_ProdID->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->Cbox_ProdID->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Cbox_ProdID->StateActive->ComboBox->Border->Rounding = 5;
            this->Cbox_ProdID->TabIndex = 23;
            this->Cbox_ProdID->SelectedIndexChanged += gcnew System::EventHandler(this, &ORDERS::Cbox_ProdID_SelectedIndexChanged);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::White;
            this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(23, 306);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(77, 16);
            this->label4->TabIndex = 22;
            this->label4->Text = L"Product ID:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::White;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(337, 306);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(43, 16);
            this->label3->TabIndex = 21;
            this->label3->Text = L"Price:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::White;
            this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(229, 306);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(60, 16);
            this->label2->TabIndex = 20;
            this->label2->Text = L"Product:";
            // 
            // Cbox_Cat
            // 
            this->Cbox_Cat->DropDownWidth = 117;
            this->Cbox_Cat->Location = System::Drawing::Point(25, 271);
            this->Cbox_Cat->Name = L"Cbox_Cat";
            this->Cbox_Cat->Size = System::Drawing::Size(177, 25);
            this->Cbox_Cat->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Cbox_Cat->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->Cbox_Cat->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->Cbox_Cat->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Cbox_Cat->StateActive->ComboBox->Border->Rounding = 5;
            this->Cbox_Cat->TabIndex = 19;
            this->Cbox_Cat->SelectedIndexChanged += gcnew System::EventHandler(this, &ORDERS::Cbox_Cat_SelectedIndexChanged);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::White;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(23, 252);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(72, 16);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Category:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(229, 251);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(67, 16);
            this->label5->TabIndex = 26;
            this->label5->Text = L"Quantity:";
            // 
            // printDocument1
            // 
            this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &ORDERS::printDocument1_BeginPrint);
            this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &ORDERS::printDocument1_PrintPage);
            // 
            // printPreviewDialog1
            // 
            this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
            this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
            this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
            this->printPreviewDialog1->Enabled = true;
            this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
            this->printPreviewDialog1->Name = L"printPreviewDialog1";
            this->printPreviewDialog1->Visible = false;
            // 
            // ORDERS
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::WhiteSmoke;
            this->ClientSize = System::Drawing::Size(1036, 452);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel4);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"ORDERS";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"ORDERS";
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Orders))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_AvailableProd))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_ProdID))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_Cat))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void Cbox_Cat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

        Cbox_ProdID->SelectedIndex = -1;
        Cbox_ProdID->Items->Clear();
        Lbl_ProductName->Text = "";
        Lbl_Price->Text = "";

        System::String^ selectedValue = dynamic_cast<System::String^>(Cbox_Cat->SelectedItem);

        if (selectedValue != nullptr)
        {
            if (checkConnection()) {

                try
                {
                    connection->Open();

                    System::String^ selectData = String::Format("SELECT * FROM products WHERE category = '{0}' AND status = @status", selectedValue);

                    SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

                    cmd->Parameters->AddWithValue("@status", "Available");
                    SqlDataReader^ reader = cmd->ExecuteReader();
                    while (reader->Read())
                    {
                        System::String^ value = reader["prod_id"]->ToString();
                        Cbox_ProdID->Items->Add(value);
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
    }
    private: System::Void Cbox_ProdID_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        System::String^ selectedValue = dynamic_cast<System::String^>(Cbox_ProdID->SelectedItem);


        if (checkConnection()) {
            if (selectedValue != nullptr) {
                try {
                    connection->Open();

                    System::String^ selectData = "SELECT * FROM products WHERE prod_id = '" + selectedValue + "' AND status = @status";
                    SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

                    cmd->Parameters->AddWithValue("@status", "Available");
                    SqlDataReader^ reader = cmd->ExecuteReader();

                    while (reader->Read()) {
                        System::String^ prodName = reader["prod_name"]->ToString();
                        float prodPrice = Convert::ToSingle(reader["price"]);

                        Lbl_ProductName->Text = prodName;
                        Lbl_Price->Text = prodPrice.ToString("0.00");

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
    }

    private: float totalPrice = 0;
    public: void displayTotalPrice()
    {
        idGenerator();

        if (checkConnection())
        {
            try
            {
                connection->Open();

                System::String^ selectData = "SELECT SUM(total_price) FROM orders WHERE customer_id = @cID";

                SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

                cmd->Parameters->AddWithValue("@cID", idGen);

                System::Object^ result = cmd->ExecuteScalar();

                if (result != DBNull::Value)
                {
                    totalPrice = Convert::ToSingle(result);

                    Lbl_TotalPrice->Text = totalPrice.ToString("0.00");
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

    private: System::Void Btn_OrderAdd_Click(System::Object^ sender, System::EventArgs^ e) {
        idGenerator();
        if (Cbox_Cat->SelectedIndex == -1 || Cbox_ProdID->SelectedIndex == -1 || Lbl_ProductName->Text == "" || Lbl_Price->Text == "" || Num_Quantity->Value == static_cast<System::Decimal>(0)) {
            MessageBox::Show("Please select item first", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else
        {
            if (checkConnection())
            {
                SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\stock.mdf;Integrated Security=True;Connect Timeout=30");
                SqlTransaction^ transaction;

                try
                {
                    connection->Open();
                    transaction = connection->BeginTransaction();

                    float getPrice = 0;
                    int currentStock = 0;

                    System::String^ selectOrder = "SELECT * FROM products WHERE prod_id = @prodID";

                    SqlCommand^ getOrder = gcnew SqlCommand(selectOrder, connection, transaction);
                    getOrder->Parameters->AddWithValue("@prodID", Cbox_ProdID->SelectedItem);

                    SqlDataReader^ reader = getOrder->ExecuteReader();

                    if (reader->Read()) {
                        System::Object^ rawValue = reader["price"];
                        System::Object^ stockValue = reader["stock"];

                        if (rawValue != DBNull::Value) {
                            getPrice = Convert::ToSingle(rawValue);
                        }
                        if (stockValue != DBNull::Value) {
                            currentStock = Convert::ToInt32(stockValue);
                        }
                    }

                    reader->Close();

                    int quantityOrdered = (int)Num_Quantity->Value;

                    // Check if there's enough stock
                    if (quantityOrdered > currentStock) {
                        throw gcnew Exception("Not enough stock available.");
                    }

                    System::String^ insertData = "INSERT INTO orders (customer_id, prod_id, prod_name, category, qty, orig_price, total_price, order_date) VALUES(@cID, @prodID, @prodName, @cat, @qty, @origPrice, @totalPrice, @date)";
                    SqlCommand^ cmd = gcnew SqlCommand(insertData, connection, transaction);

                    cmd->Parameters->AddWithValue("@cID", idGen);
                    cmd->Parameters->AddWithValue("@prodID", Cbox_ProdID->SelectedItem);
                    cmd->Parameters->AddWithValue("@prodName", Lbl_ProductName->Text->Trim());
                    cmd->Parameters->AddWithValue("@cat", Cbox_Cat->SelectedItem);
                    cmd->Parameters->AddWithValue("@qty", Num_Quantity->Value);
                    cmd->Parameters->AddWithValue("@origPrice", getPrice);

                    float totalP = (getPrice * quantityOrdered);

                    cmd->Parameters->AddWithValue("@totalPrice", totalP);

                    DateTime today = DateTime::Today;
                    DateTime dateOnly = DateTime(today.Year, today.Month, 1);
                    cmd->Parameters->AddWithValue("@date", dateOnly);

                    cmd->ExecuteNonQuery();

                    // Update the product stock
                    int newStock = currentStock - quantityOrdered;
                    System::String^ updateStock = "UPDATE products SET stock = @newStock WHERE prod_id = @prodID";
                    SqlCommand^ updateCmd = gcnew SqlCommand(updateStock, connection, transaction);
                    updateCmd->Parameters->AddWithValue("@newStock", newStock);
                    updateCmd->Parameters->AddWithValue("@prodID", Cbox_ProdID->SelectedItem);
                    updateCmd->ExecuteNonQuery();

                    // If the new stock is zero, update the product status to "Unavailable"
                    if (newStock == 0) {
                        System::String^ updateStatus = "UPDATE products SET status = 'Not available' WHERE prod_id = @prodID";
                        SqlCommand^ updateStatusCmd = gcnew SqlCommand(updateStatus, connection, transaction);
                        updateStatusCmd->Parameters->AddWithValue("@prodID", Cbox_ProdID->SelectedItem);
                        updateStatusCmd->ExecuteNonQuery();
                    }

                    transaction->Commit();
                    MessageBox::Show("Added Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                catch (Exception^ ex)
                {
                    if (transaction != nullptr) {
                        transaction->Rollback();
                    }
                    MessageBox::Show("Error: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
                finally
                {
                    connection->Close();
                }
            }
        }
        AllAvailableProducts();
        AllOrdersData();
        displayTotalPrice();
    }

    private: int idGen;

    public:void idGenerator() {
        SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\stock.mdf;Integrated Security=True;Connect Timeout=30");

        {
            connection->Open();
            System::String^ selectData = "SELECT MAX(customer_id) FROM customers";
            SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

            System::Object^ result = cmd->ExecuteScalar();

            if (result != DBNull::Value) {
                int temp = Convert::ToInt32(result);

                if (temp == 0) {
                    idGen = 1;
                }
                else {
                    idGen = temp + 1;
                }
            }
            else {
                idGen = 1;
            }
        }
    }

    private: int prodID = 0;

    private: System::Void Btn_OrderDelete_Click(System::Object^ sender, System::EventArgs^ e) {

        if (prodID == 0)
        {
            MessageBox::Show("Please select item first", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else
        {
            System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete PRODUCT ID: " + prodID + "?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

            if (result == System::Windows::Forms::DialogResult::Yes)
            {
                if (checkConnection())
                {
                    try
                    {
                        connection->Open();

                        System::String^ deleteData = "DELETE FROM orders WHERE id = @id";

                        SqlCommand^ cmd = gcnew SqlCommand(deleteData, connection);

                        cmd->Parameters->AddWithValue("@id", prodID);

                        cmd->ExecuteNonQuery();
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
            AllOrdersData();
            displayTotalPrice();
        }
    }
private: System::Void Table_Orders_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  
        DataGridViewRow^ row = Table_Orders->Rows[e->RowIndex];

        prodID = (int)row->Cells[0]->Value;

}
       private: void deleteAllOrders() {
           if (checkConnection()) {
               try {
                   connection->Open();

                   System::String^ deleteData = "DELETE FROM orders";

                   SqlCommand^ cmd = gcnew SqlCommand(deleteData, connection);

                   cmd->ExecuteNonQuery();
               }
               catch (Exception^ ex) {
                   MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
               }
               finally {
                   connection->Close();
               }
           }
       }

   public: void clearFields() {
       Cbox_Cat->SelectedIndex = -1;
       Cbox_ProdID->SelectedIndex = -1;
       Lbl_ProductName->Text = "";
       Num_Quantity->Value = 0;
       Lbl_Change->Text = "0.00";
       Lbl_Price->Text = "";
       Txt_Amount->Text = "";
       Lbl_TotalPrice->Text = "0.00";

       deleteAllOrders();

       // Refresh the DataGridView
       AllOrdersData();
       displayTotalPrice();
   }
private: System::Void Btn_OrderClear_Click(System::Object^ sender, System::EventArgs^ e) {
    clearFields();

}
private: System::Void Btn_Pay_Click(System::Object^ sender, System::EventArgs^ e) {
    idGenerator();

    if (Txt_Amount->Text == "" || Table_Orders->Rows->Count == 0) {
        MessageBox::Show("Please order first!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        float enteredAmount;
        try {
            enteredAmount = Convert::ToSingle(Txt_Amount->Text);
        }
        catch (Exception^) {
            MessageBox::Show("Invalid amount entered!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        if (enteredAmount < totalPrice) {
            MessageBox::Show("Entered amount is not enough to cover the total price!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
            Lbl_Change->Text = "Insufficient funds";
            return;
        }

        if (MessageBox::Show("Are you sure you want to pay your Orders?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
            if (checkConnection()) {
                try {
                    connection->Open();

                    System::String^ insertData = "INSERT INTO customers (customer_id, total_price, amount, change, order_date) VALUES (@cID, @totalPrice, @amount, @change, @date)";

                    SqlCommand^ cmd = gcnew SqlCommand(insertData, connection);

                    cmd->Parameters->AddWithValue("@cID", idGen);
                    cmd->Parameters->AddWithValue("@totalPrice", Lbl_TotalPrice->Text);
                    cmd->Parameters->AddWithValue("@amount", Txt_Amount->Text);

                    float change = enteredAmount - totalPrice;
                    cmd->Parameters->AddWithValue("@change", change.ToString("0.00"));

                    DateTime now = DateTime::Now;
                    cmd->Parameters->AddWithValue("@date", now.ToString("yyyy-MM-dd HH:mm:ss"));

                    cmd->ExecuteNonQuery();
                    MessageBox::Show("Paid Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                catch (Exception^ ex) {
                    MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
                finally {
                    connection->Close();
                }
            }
        }
        displayTotalPrice();
    }
}



private: System::Void Txt_Amount_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
    if (e->KeyCode == Keys::Enter) {
        try {
            float getAmount = Convert::ToSingle(Txt_Amount->Text);
            float getChange = (getAmount - totalPrice);

            if (getChange < 0) {
                Lbl_Change->Text = "Insufficient funds";
            }
            else {
                Lbl_Change->Text = getChange.ToString("0.00");
            }
        }
        catch (Exception^) {
            MessageBox::Show("Invalid amount entered!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
            Txt_Amount->Text = "";
            Lbl_Change->Text = "";
        }
    }
}



   private: int rowIndex = 0;

private: System::Void Btn_Receipt_Click(System::Object^ sender, System::EventArgs^ e) {
    if (Txt_Amount->Text == "" || Table_Orders->Rows->Count == 0)
    {
        MessageBox::Show("Please order first!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else
    {
        printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &ORDERS::printDocument1_BeginPrint);
        printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &ORDERS::printDocument1_PrintPage);

        // Use PrintPreviewDialog for previewing before printing
        printPreviewDialog1->Document = printDocument1;
        printPreviewDialog1->ShowDialog();
    }
}

private: System::Void printDocument1_BeginPrint(System::Object^ sender, System::Drawing::Printing::PrintEventArgs^ e) {

    rowIndex = 0;

}

private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e)
{
    displayTotalPrice();

    float y = 0;
    int count = 0;
    int colWidth = 80;
    int headerMargin = 13;
    int tableMargin = 30;

    System::Drawing::Font^ font = gcnew System::Drawing::Font("Tahoma", 9);
    System::Drawing::Font^ bold = gcnew System::Drawing::Font("Tahoma", 9, FontStyle::Bold);
    System::Drawing::Font^ headerFont = gcnew System::Drawing::Font("Tahoma", 15, FontStyle::Bold);
    System::Drawing::Font^ labelFont = gcnew System::Drawing::Font("Tahoma", 14, FontStyle::Bold);

    float margin = static_cast<float>(e->MarginBounds.Top);

    StringFormat^ alignCenter = gcnew StringFormat();
    alignCenter->Alignment = StringAlignment::Center;
    alignCenter->LineAlignment = StringAlignment::Center;

    String^ headerText = "BSCS's 1C Stock Management System";
    y = margin + count * headerFont->GetHeight(e->Graphics) + headerMargin;
    e->Graphics->DrawString(headerText, headerFont, Brushes::Black, static_cast<float>(e->MarginBounds.Left + Table_Orders->ColumnCount / 2 * colWidth), y, alignCenter);

    count++;

    y += tableMargin;

    array<String^>^ header = { "ID","CID", "PID", "PName", "Category", "OrigPrice", "QTY", "TotalPrice", "Date" };

    for (int q = 0; q < header->Length; q++)
    {
        y = margin + count * bold->GetHeight(e->Graphics) + tableMargin;
        e->Graphics->DrawString(header[q], bold, Brushes::Black, static_cast<float>(e->MarginBounds.Left + q * colWidth), y, alignCenter);
    }
    count++;

    float rSpace = static_cast<float>(e->MarginBounds.Bottom) - y;
    int rowIndex = 0;

    while (rowIndex < Table_Orders->Rows->Count)
    {
        DataGridViewRow^ row = Table_Orders->Rows[rowIndex];

        for (int q = 0; q < Table_Orders->ColumnCount; q++)
        {
            System::Object^ cellValue = row->Cells[q]->Value;
            System::String^ cell = (cellValue != nullptr) ? cellValue->ToString() : System::String::Empty;

            y = margin + count * font->GetHeight(e->Graphics) + tableMargin;
            e->Graphics->DrawString(cell, font, Brushes::Black, static_cast<float>(e->MarginBounds.Left + q * colWidth), y, alignCenter);
        }
        count++;
        rowIndex++;

        if (y + font->GetHeight(e->Graphics) >= e->MarginBounds.Bottom)
        {
            e->HasMorePages = true;
            return;
        }
    }

    int labelMargin = static_cast<int>(Math::Min(rSpace, 200.0f));
    DateTime now = DateTime::Now;

    float labelX = e->MarginBounds.Right - e->Graphics->MeasureString("--------------------------------------------------------", labelFont).Width;

    y = e->MarginBounds.Bottom - labelMargin - labelFont->GetHeight(e->Graphics);
    e->Graphics->DrawString("Total Price: \tP" + totalPrice + "\nAmount: \tP" + Txt_Amount->Text->Trim() + "\n\t\t------------------------\nChange: \tP" + Lbl_Change->Text->Trim(), labelFont, Brushes::Black, labelX, y);

    labelMargin = static_cast<int>(Math::Min(rSpace, -40.0f));

    String^ labelText = now.ToString("yyyy-MM-dd");
    y = e->MarginBounds.Bottom - labelMargin - labelFont->GetHeight(e->Graphics);
    e->Graphics->DrawString(labelText, labelFont, Brushes::Black, e->MarginBounds.Right - e->Graphics->MeasureString("------------------", labelFont).Width, y);
    }
private: System::Void Num_Quantity_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
       
