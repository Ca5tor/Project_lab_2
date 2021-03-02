#include "MyForm.h"
#include "Header.h"
#include <Windows.h>


using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Data::OleDb;
using namespace Projectlab2; // name project


[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}



System::Void Projectlab2::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e){
	textBox1->Text = "";
	textBox2->Text = "";

	// Подкл. к БД
	String^ connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source= Database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	// Запрос к БД
	dbConnection->Open(); // Открыть соединение
	String^ query = "SELECT * FROM [tab1]"; // Запрос
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection); // Команда
	OleDbDataReader^ dbReader = dbComand->ExecuteReader(); // Считываем данные

	if (dbReader->HasRows == false) MessageBox::Show("Error!", "Error 404");

	else {
		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["id"], dbReader["Nickname"], dbReader["Password"]);// , dbReader["Surname"], dbReader["Name"], dbReader["Patronymic"], dbReader["Date_of_birth"], dbReader["Place_of_birth"], dbReader["Phone_num"]);
		}
	}

	// Закрыть соеденение
	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

