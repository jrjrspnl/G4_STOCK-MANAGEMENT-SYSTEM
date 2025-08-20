#pragma once
#include <cliext\utility>
#include "CATEGORIES.h"
#include "ProductsData.h"
#using <System.Data.dll>

namespace G4STOCKMANAGEMENTSYSTEM {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    /// <summary>
    /// Summary for PRODUCTS
    /// </summary>
    public ref class PRODUCTS : public System::Windows::Forms::Form
    {
        SqlConnection^ connection = gcnew SqlConnection("Data Source = (localdb)\\MSSQLLocalDB;AttachDbFilename = C:\\Users\\Jerwin\\Documents\\stock.mdf;Integrated Security = True;Encrypt = False");
    public:
        PRODUCTS(void)
        {
            InitializeComponent();
            displayCategories();
            displayAllProducts();
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
        void displayAllProducts() {
            ProductsData^ uData = gcnew ProductsData();

            List<ProductsData^>^ listData = uData->displayAllProducts();
            Table_Products->DataSource = listData;

        }
    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~PRODUCTS()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:





    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Panel^ panel2;
    private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ Cbox_Cat;









    private: System::Windows::Forms::Label^ label3;
    private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ Cbox_Status;


    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label6;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ Txt_Price;

    private: System::Windows::Forms::Label^ label5;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ Txt_Stock;

    private: System::Windows::Forms::Label^ label2;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ Txt_ProdName;

    private: System::Windows::Forms::Label^ label1;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ Txt_ProdID;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_images;
    private: System::Windows::Forms::PictureBox^ Pbox_Image;




    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_DelProd;










    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_UpdateProd;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_ClearProd;




    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_AddProd;

    private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ Table_Products;

























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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PRODUCTS::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->Table_Products = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->Btn_DelProd = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_UpdateProd = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_ClearProd = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_images = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_AddProd = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Pbox_Image = (gcnew System::Windows::Forms::PictureBox());
            this->Cbox_Status = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->Txt_Price = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->Txt_Stock = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->Txt_ProdName = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->Txt_ProdID = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->Cbox_Cat = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Products))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pbox_Image))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_Status))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_Cat))->BeginInit();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::White;
            this->panel1->Controls->Add(this->Table_Products);
            this->panel1->Controls->Add(this->label9);
            this->panel1->Location = System::Drawing::Point(32, 299);
            this->panel1->Margin = System::Windows::Forms::Padding(4);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1019, 427);
            this->panel1->TabIndex = 18;
            // 
            // Table_Products
            // 
            this->Table_Products->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->Table_Products->Location = System::Drawing::Point(23, 60);
            this->Table_Products->Margin = System::Windows::Forms::Padding(4);
            this->Table_Products->Name = L"Table_Products";
            this->Table_Products->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->Table_Products->RowHeadersVisible = false;
            this->Table_Products->RowHeadersWidth = 51;
            this->Table_Products->Size = System::Drawing::Size(963, 350);
            this->Table_Products->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
            this->Table_Products->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
            this->Table_Products->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
            this->Table_Products->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
            this->Table_Products->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
            this->Table_Products->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Products->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Products->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Products->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Products->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Table_Products->TabIndex = 20;
            this->Table_Products->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PRODUCTS::Table_Products_CellClick);
            this->Table_Products->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PRODUCTS::Table_Products_CellContentClick);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(25, 16);
            this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(148, 28);
            this->label9->TabIndex = 15;
            this->label9->Text = L"All Products";
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::White;
            this->panel2->Controls->Add(this->Btn_DelProd);
            this->panel2->Controls->Add(this->Btn_UpdateProd);
            this->panel2->Controls->Add(this->Btn_ClearProd);
            this->panel2->Controls->Add(this->Btn_images);
            this->panel2->Controls->Add(this->Btn_AddProd);
            this->panel2->Controls->Add(this->Pbox_Image);
            this->panel2->Controls->Add(this->Cbox_Status);
            this->panel2->Controls->Add(this->Txt_Price);
            this->panel2->Controls->Add(this->Txt_Stock);
            this->panel2->Controls->Add(this->Txt_ProdName);
            this->panel2->Controls->Add(this->Txt_ProdID);
            this->panel2->Controls->Add(this->Cbox_Cat);
            this->panel2->Controls->Add(this->label3);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->label4);
            this->panel2->Controls->Add(this->label5);
            this->panel2->Controls->Add(this->label6);
            this->panel2->Location = System::Drawing::Point(32, 21);
            this->panel2->Margin = System::Windows::Forms::Padding(4);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1019, 256);
            this->panel2->TabIndex = 19;
            // 
            // Btn_DelProd
            // 
            this->Btn_DelProd->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->Btn_DelProd->Location = System::Drawing::Point(872, 73);
            this->Btn_DelProd->Margin = System::Windows::Forms::Padding(4);
            this->Btn_DelProd->Name = L"Btn_DelProd";
            this->Btn_DelProd->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_DelProd->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_DelProd->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_DelProd->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_DelProd->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_DelProd->Size = System::Drawing::Size(113, 49);
            this->Btn_DelProd->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_DelProd->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_DelProd->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_DelProd->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_DelProd->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_DelProd->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_DelProd->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_DelProd->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_DelProd->TabIndex = 21;
            this->Btn_DelProd->Values->Text = L"Delete";
            this->Btn_DelProd->Click += gcnew System::EventHandler(this, &PRODUCTS::Btn_DelProd_Click);
            // 
            // Btn_UpdateProd
            // 
            this->Btn_UpdateProd->Location = System::Drawing::Point(736, 148);
            this->Btn_UpdateProd->Margin = System::Windows::Forms::Padding(4);
            this->Btn_UpdateProd->Name = L"Btn_UpdateProd";
            this->Btn_UpdateProd->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_UpdateProd->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_UpdateProd->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_UpdateProd->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_UpdateProd->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_UpdateProd->Size = System::Drawing::Size(113, 49);
            this->Btn_UpdateProd->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_UpdateProd->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_UpdateProd->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_UpdateProd->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_UpdateProd->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_UpdateProd->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_UpdateProd->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_UpdateProd->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_UpdateProd->TabIndex = 23;
            this->Btn_UpdateProd->Values->Text = L"Update";
            this->Btn_UpdateProd->Click += gcnew System::EventHandler(this, &PRODUCTS::Btn_UpdateProd_Click);
            // 
            // Btn_ClearProd
            // 
            this->Btn_ClearProd->Location = System::Drawing::Point(872, 148);
            this->Btn_ClearProd->Margin = System::Windows::Forms::Padding(4);
            this->Btn_ClearProd->Name = L"Btn_ClearProd";
            this->Btn_ClearProd->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_ClearProd->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_ClearProd->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_ClearProd->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_ClearProd->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_ClearProd->Size = System::Drawing::Size(113, 49);
            this->Btn_ClearProd->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_ClearProd->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_ClearProd->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_ClearProd->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_ClearProd->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_ClearProd->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_ClearProd->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_ClearProd->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_ClearProd->TabIndex = 20;
            this->Btn_ClearProd->Values->Text = L"CLEAR";
            this->Btn_ClearProd->Click += gcnew System::EventHandler(this, &PRODUCTS::Btn_ClearProd_Click);
            // 
            // Btn_images
            // 
            this->Btn_images->Location = System::Drawing::Point(557, 174);
            this->Btn_images->Margin = System::Windows::Forms::Padding(4);
            this->Btn_images->Name = L"Btn_images";
            this->Btn_images->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_images->OverrideFocus->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->OverrideFocus->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->OverrideFocus->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->OverrideFocus->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_images->Size = System::Drawing::Size(113, 33);
            this->Btn_images->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Btn_images->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_images->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_images->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_images->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_images->TabIndex = 28;
            this->Btn_images->Values->Text = L"Import";
            this->Btn_images->Click += gcnew System::EventHandler(this, &PRODUCTS::Btn_images_Click);
            // 
            // Btn_AddProd
            // 
            this->Btn_AddProd->Location = System::Drawing::Point(736, 73);
            this->Btn_AddProd->Margin = System::Windows::Forms::Padding(4);
            this->Btn_AddProd->Name = L"Btn_AddProd";
            this->Btn_AddProd->OverrideDefault->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->OverrideDefault->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->OverrideDefault->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->OverrideDefault->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_AddProd->OverrideFocus->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->OverrideFocus->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->OverrideFocus->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->OverrideFocus->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_AddProd->Size = System::Drawing::Size(113, 49);
            this->Btn_AddProd->StateCommon->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateCommon->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateCommon->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateCommon->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_AddProd->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_AddProd->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_AddProd->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_AddProd->StateDisabled->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateDisabled->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateDisabled->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateDisabled->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_AddProd->StateNormal->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateNormal->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateNormal->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateNormal->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_AddProd->StatePressed->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StatePressed->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StatePressed->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StatePressed->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_AddProd->StatePressed->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Btn_AddProd->StateTracking->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateTracking->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateTracking->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateTracking->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_AddProd->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_AddProd->TabIndex = 22;
            this->Btn_AddProd->Values->Text = L"Add";
            this->Btn_AddProd->Click += gcnew System::EventHandler(this, &PRODUCTS::Btn_Add_Click);
            // 
            // Pbox_Image
            // 
            this->Pbox_Image->BackColor = System::Drawing::Color::Gainsboro;
            this->Pbox_Image->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pbox_Image.BackgroundImage")));
            this->Pbox_Image->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->Pbox_Image->Location = System::Drawing::Point(547, 52);
            this->Pbox_Image->Margin = System::Windows::Forms::Padding(4);
            this->Pbox_Image->Name = L"Pbox_Image";
            this->Pbox_Image->Size = System::Drawing::Size(133, 108);
            this->Pbox_Image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->Pbox_Image->TabIndex = 27;
            this->Pbox_Image->TabStop = false;
            // 
            // Cbox_Status
            // 
            this->Cbox_Status->DropDownWidth = 117;
            this->Cbox_Status->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
            this->Cbox_Status->Location = System::Drawing::Point(283, 187);
            this->Cbox_Status->Margin = System::Windows::Forms::Padding(4);
            this->Cbox_Status->Name = L"Cbox_Status";
            this->Cbox_Status->Size = System::Drawing::Size(208, 29);
            this->Cbox_Status->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Cbox_Status->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->Cbox_Status->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->Cbox_Status->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Cbox_Status->StateActive->ComboBox->Border->Rounding = 5;
            this->Cbox_Status->TabIndex = 26;
            // 
            // Txt_Price
            // 
            this->Txt_Price->Location = System::Drawing::Point(285, 52);
            this->Txt_Price->Margin = System::Windows::Forms::Padding(4);
            this->Txt_Price->Name = L"Txt_Price";
            this->Txt_Price->Size = System::Drawing::Size(208, 31);
            this->Txt_Price->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Txt_Price->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Txt_Price->StateCommon->Border->Rounding = 5;
            this->Txt_Price->TabIndex = 23;
            // 
            // Txt_Stock
            // 
            this->Txt_Stock->Location = System::Drawing::Point(284, 118);
            this->Txt_Stock->Margin = System::Windows::Forms::Padding(4);
            this->Txt_Stock->Name = L"Txt_Stock";
            this->Txt_Stock->Size = System::Drawing::Size(208, 31);
            this->Txt_Stock->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Txt_Stock->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Txt_Stock->StateCommon->Border->Rounding = 5;
            this->Txt_Stock->TabIndex = 19;
            // 
            // Txt_ProdName
            // 
            this->Txt_ProdName->Location = System::Drawing::Point(32, 186);
            this->Txt_ProdName->Margin = System::Windows::Forms::Padding(4);
            this->Txt_ProdName->Name = L"Txt_ProdName";
            this->Txt_ProdName->Size = System::Drawing::Size(208, 31);
            this->Txt_ProdName->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Txt_ProdName->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Txt_ProdName->StateCommon->Border->Rounding = 5;
            this->Txt_ProdName->TabIndex = 17;
            // 
            // Txt_ProdID
            // 
            this->Txt_ProdID->Location = System::Drawing::Point(32, 118);
            this->Txt_ProdID->Margin = System::Windows::Forms::Padding(4);
            this->Txt_ProdID->Name = L"Txt_ProdID";
            this->Txt_ProdID->Size = System::Drawing::Size(208, 31);
            this->Txt_ProdID->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Txt_ProdID->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Txt_ProdID->StateCommon->Border->Rounding = 5;
            this->Txt_ProdID->TabIndex = 15;
            // 
            // Cbox_Cat
            // 
            this->Cbox_Cat->DropDownWidth = 117;
            this->Cbox_Cat->Location = System::Drawing::Point(31, 52);
            this->Cbox_Cat->Margin = System::Windows::Forms::Padding(4);
            this->Cbox_Cat->Name = L"Cbox_Cat";
            this->Cbox_Cat->Size = System::Drawing::Size(209, 29);
            this->Cbox_Cat->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Cbox_Cat->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->Cbox_Cat->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->Cbox_Cat->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Cbox_Cat->StateActive->ComboBox->Border->Rounding = 5;
            this->Cbox_Cat->TabIndex = 10;
            this->Cbox_Cat->SelectedIndexChanged += gcnew System::EventHandler(this, &PRODUCTS::Cbox_Cat_SelectedIndexChanged);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::White;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(28, 28);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(90, 19);
            this->label3->TabIndex = 8;
            this->label3->Text = L"Category:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::White;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(29, 95);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(98, 19);
            this->label1->TabIndex = 16;
            this->label1->Text = L"Product ID:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::White;
            this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(29, 162);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(132, 19);
            this->label2->TabIndex = 18;
            this->label2->Text = L"Product Name:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::White;
            this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(280, 164);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(60, 19);
            this->label4->TabIndex = 25;
            this->label4->Text = L"Status:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::White;
            this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(281, 95);
            this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(59, 19);
            this->label5->TabIndex = 20;
            this->label5->Text = L"Stock:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::White;
            this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(283, 28);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(55, 19);
            this->label6->TabIndex = 24;
            this->label6->Text = L"Price:";
            // 
            // PRODUCTS
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::WhiteSmoke;
            this->ClientSize = System::Drawing::Size(1079, 745);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"PRODUCTS";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"PRODUCTS";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Products))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pbox_Image))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_Status))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_Cat))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
   private: int getID = 0;

    private: bool emptyFields() {
        if (Txt_ProdID->Text == "" ||
            Txt_ProdName->Text == "" ||
            Cbox_Cat->SelectedItem == nullptr || // Check if no category is selected
            Txt_Price->Text == "" ||
            Txt_Stock->Text == "" ||
            Cbox_Status->SelectedItem == nullptr || // Check if no status is selected
            Pbox_Image->Image == nullptr) {
            return true;
        }
        else {
            return false;
        }
    }

    public: void displayCategories() {
        if (checkConnection())
        {
            try
            {
                connection->Open();

                System::String^ selectData = "SELECT * FROM categories";

                SqlCommand^ cmd = gcnew SqlCommand(selectData, connection); {

                    SqlDataReader^ reader = cmd->ExecuteReader();

                    if (reader->HasRows) {
                    }
                    while (reader->Read()) {
                        Cbox_Cat->Items->Add(reader["category"]->ToString());
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

    private: System::Void Btn_Add_Click(System::Object^ sender, System::EventArgs^ e) {
        if (emptyFields()) {
            MessageBox::Show("Empty Fields", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            if (checkConnection()) {
                try {
                    connection->Open();

                    System::String^ selectData = "SELECT * FROM products WHERE prod_id = @prodID";
                    SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);
                    cmd->Parameters->AddWithValue("@prodID", Txt_ProdID->Text->Trim());

                    SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
                    DataTable^ table = gcnew DataTable();

                    adapter->Fill(table);

                    if (table->Rows->Count > 0) {
                        MessageBox::Show("PRODUCT ID: " + Txt_ProdID->Text->Trim() + " is existing already", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    }
                    else {
                        System::String^ baseDirectory = AppDomain::CurrentDomain->BaseDirectory;
                        System::String^ relativePath = System::IO::Path::Combine("Product_Directory", Txt_ProdID->Text->Trim() + ".jpg");
                        System::String^ fullPath = System::IO::Path::Combine(baseDirectory, relativePath);

                        System::String^ directoryPath = System::IO::Path::GetDirectoryName(fullPath);

                        if (!System::IO::Directory::Exists(directoryPath)) {
                            System::IO::Directory::CreateDirectory(directoryPath);
                        }

                        System::IO::File::Copy(Pbox_Image->ImageLocation, fullPath, true);

                        System::String^ insertData = "INSERT INTO products (prod_id, prod_name, category, price, stock, image_path, status, date_insert) VALUES (@prodID, @prodName, @cat, @price, @stock, @path, @status, @date)";

                        SqlCommand^ insertD = gcnew SqlCommand(insertData, connection);
                        insertD->Parameters->AddWithValue("@prodID", Txt_ProdID->Text->Trim());
                        insertD->Parameters->AddWithValue("@prodName", Txt_ProdName->Text->Trim());
                        insertD->Parameters->AddWithValue("@cat", Cbox_Cat->SelectedItem->ToString()->Trim());
                        insertD->Parameters->AddWithValue("@price", Txt_Price->Text->ToString()->Trim());
                        insertD->Parameters->AddWithValue("@stock", Txt_Stock->Text->ToString()->Trim());
                        insertD->Parameters->AddWithValue("@path", fullPath);
                        insertD->Parameters->AddWithValue("@status", Cbox_Status->SelectedItem->ToString()->Trim());

                        DateTime now = DateTime::Now;
                        insertD->Parameters->AddWithValue("@date", now.ToString("yyyy-MM-dd HH:mm:ss"));

                        insertD->ExecuteNonQuery();
                        clearFields();
                        displayAllProducts();
                        MessageBox::Show("Added Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
  private: System::Void Btn_images_Click(System::Object^ sender, System::EventArgs^ e) {
      try {
          OpenFileDialog^ dialog = gcnew OpenFileDialog();
          dialog->Filter = "Image Files(*.jpg; *.png)| *.jpg; *.png";
          System::String^ imagePath = "";

          if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
              imagePath = dialog->FileName;
              Pbox_Image->ImageLocation = imagePath;
          }
      }
      catch (Exception^ ex) {
          MessageBox::Show("Error: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
      }
  }



    public: void clearFields() {
        Txt_ProdID->Text = "";
        Txt_ProdName->Text = "";
        Cbox_Cat->SelectedIndex = -1;
        Txt_Price->Text = "";
        Txt_Stock->Text = "";
        Cbox_Status->SelectedIndex = -1;
        Cbox_Status->SelectedIndex = -1;
        Pbox_Image->Image = nullptr;

    }
    private: System::Void Btn_ClearProd_Click(System::Object^ sender, System::EventArgs^ e) {
        clearFields();
    }
    private: System::Void Table_Products_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

        if (e->RowIndex >= 0 && e->RowIndex < Table_Products->Rows->Count) {

            DataGridViewRow^ row = Table_Products->Rows[e->RowIndex];

            // Safely get each cell value, handling nulls
            getID = row->Cells[0]->Value != nullptr ? Convert::ToInt32(row->Cells[0]->Value) : 0;

            Txt_ProdID->Text = row->Cells[1]->Value != nullptr ? row->Cells[1]->Value->ToString() : "";
            Txt_ProdName->Text = row->Cells[2]->Value != nullptr ? row->Cells[2]->Value->ToString() : "";
            Cbox_Cat->Text = row->Cells[3]->Value != nullptr ? row->Cells[3]->Value->ToString() : "";
            Txt_Price->Text = row->Cells[4]->Value != nullptr ? row->Cells[4]->Value->ToString() : "";
            Txt_Stock->Text = row->Cells[5]->Value != nullptr ? row->Cells[5]->Value->ToString() : "";

            // Handle the image path safely
            System::String^ imagePath = row->Cells[6]->Value != nullptr ? row->Cells[6]->Value->ToString() : "";
            try {
                if (!System::String::IsNullOrWhiteSpace(imagePath)) {
                    Pbox_Image->Image = Image::FromFile(imagePath);
                }
                else {
                    Pbox_Image->Image = nullptr; // Clear the PictureBox if no image path
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show("Failed to load image: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                Pbox_Image->Image = nullptr; // Clear the PictureBox in case of an error
            }

            Cbox_Status->Text = row->Cells[7]->Value != nullptr ? row->Cells[7]->Value->ToString() : "";
        }
        else {
            MessageBox::Show("Invalid row selected.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
    }
  private: System::Void Btn_UpdateProd_Click(System::Object^ sender, System::EventArgs^ e) {
      if (emptyFields()) {
          MessageBox::Show("Empty Fields", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
      }
      else {
          if (MessageBox::Show("Are you sure you want to update PRODUCT ID: " + Txt_ProdID->Text->Trim() + "?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
              if (checkConnection()) {
                  try {
                      connection->Open();

                      // Retrieve the current image path and status from the database
                      System::String^ currentImagePath = "";
                      System::String^ currentStatus = "";
                      System::String^ selectQuery = "SELECT image_path, status FROM products WHERE prod_id = @prodID";
                      SqlCommand^ selectCmd = gcnew SqlCommand(selectQuery, connection);
                      selectCmd->Parameters->AddWithValue("@prodID", Txt_ProdID->Text->Trim());
                      SqlDataReader^ reader = selectCmd->ExecuteReader();

                      if (reader->Read()) {
                          currentImagePath = reader["image_path"]->ToString();
                          currentStatus = reader["status"]->ToString();
                      }
                      reader->Close();

                      // Determine the new image path
                      System::String^ imagePath = Pbox_Image->ImageLocation;
                      if (imagePath == nullptr || imagePath == "") {
                          imagePath = currentImagePath; // Retain the current image path if no new image is selected
                      }

                      // Determine the new status
                      int stock = Convert::ToInt32(Txt_Stock->Text->ToString()->Trim());
                      System::String^ status = (stock == 0) ? "Not available" : "Available";

                      System::String^ updateData = "UPDATE products SET prod_id = @prodID, prod_name = @prodName, category = @cat, price = @price, stock = @stock, image_path = @imagePath, status = @status WHERE id = @id";

                      SqlCommand^ updateCmd = gcnew SqlCommand(updateData, connection);
                      updateCmd->Parameters->AddWithValue("@prodID", Txt_ProdID->Text->Trim());
                      updateCmd->Parameters->AddWithValue("@prodName", Txt_ProdName->Text->Trim());
                      updateCmd->Parameters->AddWithValue("@cat", Cbox_Cat->SelectedItem->ToString()->Trim());
                      updateCmd->Parameters->AddWithValue("@price", Txt_Price->Text->ToString()->Trim());
                      updateCmd->Parameters->AddWithValue("@stock", stock);
                      updateCmd->Parameters->AddWithValue("@imagePath", imagePath); // Use the retained or new image path
                      updateCmd->Parameters->AddWithValue("@status", status); // Set status based on stock
                      updateCmd->Parameters->AddWithValue("@id", getID);

                      updateCmd->ExecuteNonQuery();
                      clearFields();
                      displayAllProducts();
                      MessageBox::Show("Updated Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
  }


    private: System::Void Btn_DelProd_Click(System::Object^ sender, System::EventArgs^ e) {
        if (emptyFields()) {
            MessageBox::Show("Empty Fields", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            if (MessageBox::Show("Are you sure you want to delete PRODUCT ID: " + Txt_ProdID->Text->Trim() + "?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
                if (checkConnection()) {
                    try {
                        connection->Open();

                        System::String^ deleteData = "DELETE FROM products WHERE id = @id";

                        SqlCommand^ deleteD = gcnew SqlCommand(deleteData, connection); {

                            deleteD->Parameters->AddWithValue("@id", getID);

                            deleteD->ExecuteNonQuery();
                            clearFields();
                            displayAllProducts();
                            MessageBox::Show("Deleted Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
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

    }
private: System::Void Table_Products_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Cbox_Cat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (Cbox_Cat->SelectedItem == nullptr) {
        // If no category is selected, clear the table or show all products
        Table_Products->DataSource = nullptr;
        return;
    }


    if (checkConnection()) {
        try {
            connection->Open();

   
            System::String^ selectedCategory = Cbox_Cat->SelectedItem->ToString();


            System::String^ query = "SELECT * FROM products WHERE category = @category";

            SqlCommand^ cmd = gcnew SqlCommand(query, connection);
            cmd->Parameters->AddWithValue("@category", selectedCategory);

            SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
            DataTable^ dataTable = gcnew DataTable();
            adapter->Fill(dataTable);

            
            Table_Products->DataSource = dataTable;
        }
        catch (Exception^ ex) {
            MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            connection->Close();
        }
    }
}
};
}