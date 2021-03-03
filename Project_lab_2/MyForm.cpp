#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Data::OleDb; // нужен для работы с БД
using namespace Projectlab2; // name project


[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}

System::Void Projectlab2::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e){

	// Подкл. к БД
	String^ connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source= Database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	// Запрос к БД
	dbConnection->Open(); // Открыть соединение
	String^ query = "SELECT * FROM [tab1]"; // Запрос
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection); // Команда
	OleDbDataReader^ dbReader = dbComand->ExecuteReader(); // Считываем данные

	if (dbReader->HasRows == true) // Проверка наличия данных 
		while (dbReader->Read()) { // Заполение скрытой таб.данных в форме
		dataGridView1->Rows->Add(dbReader["Nickname"], dbReader["Password"]);
	}
	
	// Закрыть соеденение
	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void Projectlab2::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e){
	MyForm2^ f3 = gcnew MyForm2();	// Создание нового экземпляра 
	f3->Show();						// Открыть 3-ю форму 
	MyForm::Hide();					// Скрыть первую форму 
	f3->Owner = this;
	return System::Void();
}

System::Void Projectlab2::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e){
	MyForm1^ f2 = gcnew MyForm1();	// Создание нового экземпляра 
	f2->Show();						// Открыть 2-ю форму 
	MyForm::Hide();					// Скрыть первую форму 
	f2->Owner = this;
	return System::Void();
}
