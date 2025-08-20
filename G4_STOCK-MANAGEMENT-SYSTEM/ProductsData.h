#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;

ref class ProductsData
{
public:
    property String^ Date; // 0
    property String^ Status; // 1
    property String^ ImagePath; // 2
    property String^ Stock; // 3
    property String^ Price; // 4
    property String^ Category; // 5
    property String^ ProdName; // 6
    property String^ ProdID; // 7
    property int ID; // 8

    List<ProductsData^>^ displayAllProducts() {
        List<ProductsData^>^ listData = gcnew List<ProductsData^>();

        SqlConnection^ connect = gcnew SqlConnection("Data Source = (localdb)\\MSSQLLocalDB;AttachDbFilename = C:\\Users\\Jerwin\\Documents\\stock.mdf;Integrated Security = True;Encrypt = False");
        {
            connect->Open();

            String^ selectData = "SELECT * FROM products";

            SqlCommand^ cmd = gcnew SqlCommand(selectData, connect);
            {
                             SqlDataReader^ reader = cmd->ExecuteReader();

                while (reader->Read())
                {

                    ProductsData^ pData = gcnew ProductsData();

                    pData->ID = (int)reader["id"];
                    pData->ProdID = reader["prod_id"]->ToString();
                    pData->ProdName = reader["prod_name"]->ToString();
                    pData->Category = reader["category"]->ToString();
                    pData->Price = reader["price"]->ToString();
                    pData->Stock = reader["stock"]->ToString();
                    pData->ImagePath = reader["image_path"]->ToString();
                    pData->Status = reader["status"]->ToString();
                    pData->Date = reader["date_insert"]->ToString();

                    listData->Add(pData);
                }
            }
        }
        return listData;
    }
    List<ProductsData^>^ AllAvailableProducts() {
        List<ProductsData^>^ listData = gcnew List<ProductsData^>();
        SqlConnection^ connect = gcnew SqlConnection("Data Source = (localdb)\\MSSQLLocalDB;AttachDbFilename = C:\\Users\\Jerwin\\Documents\\stock.mdf;Integrated Security = True;Encrypt = False");
        {
            connect->Open();

        String^ selectData = "SELECT * FROM products WHERE status = @status";
        SqlCommand^ cmd = gcnew SqlCommand(selectData, connect);
        {
            cmd->Parameters->AddWithValue("@status", "Available");
            SqlDataReader^ reader = cmd->ExecuteReader();

            while (reader->Read())
            {

                ProductsData^ pData = gcnew ProductsData();

                pData->ID = (int)reader["id"];
                pData->ProdID = reader["prod_id"]->ToString();
                pData->ProdName = reader["prod_name"]->ToString();
                pData->Category = reader["category"]->ToString();
                pData->Price = reader["price"]->ToString();
                pData->Stock = reader["stock"]->ToString();
                pData->ImagePath = reader["image_path"]->ToString();
                pData->Status = reader["status"]->ToString();
                pData->Date = reader["date_insert"]->ToString();

                listData->Add(pData);
            }
        }
    }
    return listData;

    }


};

