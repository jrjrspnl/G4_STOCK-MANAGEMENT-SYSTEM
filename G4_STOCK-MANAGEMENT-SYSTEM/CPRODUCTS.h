
#pragma once
#include "ProductsData.h"

namespace G4STOCKMANAGEMENTSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CPRODUCTS
	/// </summary>
	public ref class CPRODUCTS : public System::Windows::Forms::Form
	{
	public:
		CPRODUCTS(void)
		{
			InitializeComponent();
			displayAllProducts();
			//
			//TODO: Add the constructor code here
			//
		}

		void displayAllProducts() {
			ProductsData^ uData = gcnew ProductsData();

			List<ProductsData^>^ listData = uData->displayAllProducts();
			Table_CProducts->DataSource = listData;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CPRODUCTS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:






	private: System::Windows::Forms::Label^ label9;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ Table_CProducts;




















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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Table_CProducts = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_CProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->Table_CProducts);
			this->panel1->Location = System::Drawing::Point(12, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1010, 401);
			this->panel1->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(19, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 23);
			this->label9->TabIndex = 7;
			this->label9->Text = L"All Products";
			// 
			// Table_CProducts
			// 
			this->Table_CProducts->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Table_CProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_CProducts->Location = System::Drawing::Point(32, 64);
			this->Table_CProducts->Name = L"Table_CProducts";
			this->Table_CProducts->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Table_CProducts->RowHeadersVisible = false;
			this->Table_CProducts->Size = System::Drawing::Size(947, 317);
			this->Table_CProducts->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
			this->Table_CProducts->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
			this->Table_CProducts->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
			this->Table_CProducts->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
			this->Table_CProducts->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
			this->Table_CProducts->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_CProducts->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_CProducts->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_CProducts->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_CProducts->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Table_CProducts->TabIndex = 21;
			// 
			// CPRODUCTS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1036, 452);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CPRODUCTS";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CPRODUCTS";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_CProducts))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
