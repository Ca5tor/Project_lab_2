#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Data::OleDb; // ����� ��� ������ � ��
using namespace Projectlab2; // name project


[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}

System::Void Projectlab2::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e){

	// �����. � ��
	String^ connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source= Database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	// ������ � ��
	dbConnection->Open(); // ������� ����������
	String^ query = "SELECT * FROM [tab1]"; // ������
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection); // �������
	OleDbDataReader^ dbReader = dbComand->ExecuteReader(); // ��������� ������

	if (dbReader->HasRows == true) // �������� ������� ������ 
		while (dbReader->Read()) { // ��������� ������� ���.������ � �����
		dataGridView1->Rows->Add(dbReader["Nickname"], dbReader["Password"]);
	}
	
	// ������� ����������
	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void Projectlab2::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e){
	MyForm2^ f3 = gcnew MyForm2();	// �������� ������ ���������� 
	f3->Show();						// ������� 3-� ����� 
	MyForm::Hide();					// ������ ������ ����� 
	f3->Owner = this;
	return System::Void();
}

System::Void Projectlab2::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e){
	MyForm1^ f2 = gcnew MyForm1();	// �������� ������ ���������� 
	f2->Show();						// ������� 2-� ����� 
	MyForm::Hide();					// ������ ������ ����� 
	f2->Owner = this;
	return System::Void();
}
