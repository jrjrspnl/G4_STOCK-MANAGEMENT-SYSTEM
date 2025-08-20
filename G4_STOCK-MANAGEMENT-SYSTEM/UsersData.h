#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class UsersData
{
public:
    property String^ Date;
    property String^ Status;
    property String^ Role;
    property String^ Password;
    property String^ Username;
    property int ID;

    List<UsersData^>^ AllUsersData() {
        List<UsersData^>^ listData = gcnew List<UsersData^>();

        SqlConnection^ connect = gcnew SqlConnection("Data Source = (localdb)\\MSSQLLocalDB;AttachDbFilename = C:\\Users\\Jerwin\\Documents\\stock.mdf;Integrated Security = True;Encrypt = False");
        {
            connect->Open();

            String^ selectData = "SELECT * FROM users";

            SqlCommand^ cmd = gcnew SqlCommand(selectData, connect);
            {

                SqlDataReader^ reader = cmd->ExecuteReader();

                while (reader->Read())
                {

                    UsersData^ uData = gcnew UsersData();
                  
                    uData->Username = reader["username"]->ToString();
                    uData->Password = reader["password"]->ToString();
                    uData->Role = reader["role"]->ToString();
                    uData->Status = reader["status"]->ToString();
                    uData->Date = reader["date"]->ToString();
                    uData->ID = (int)reader["id"];

                    listData->Add(uData);
                }
            }
        }
        return listData;
    }
};
