#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class CategoriesData
{
public:
    property String^ Date;
    property String^ Category;
    property int ID;
 
    List<CategoriesData^>^ AllCategoriesData() {
        List<CategoriesData^>^ listData = gcnew List<CategoriesData^>();

        SqlConnection^ connect = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\stock.mdf;Integrated Security=True;Connect Timeout=30");
        {
            connect->Open();

            String^ selectData = "SELECT * FROM categories";

            SqlCommand^ cmd = gcnew SqlCommand(selectData, connect);
            {

                SqlDataReader^ reader = cmd->ExecuteReader();

                while (reader->Read())
                {

                    CategoriesData^ cData = gcnew CategoriesData();

                    cData->ID = (int)reader["id"];
                    cData->Category = reader["category"]->ToString();
                    cData->Date = reader["date"]->ToString();

                    listData->Add(cData);
                }
            }
        }
        return listData;
    }
};

