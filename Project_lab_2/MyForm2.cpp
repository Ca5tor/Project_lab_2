#include "Header.h"

System::Void Projectlab2::MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e){
	Owner->Show();

	String^ connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source= Database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ nick_n = textBox1->Text;				// ��� ������������
	String^ pass = textBox2->Text;					// ������
	String^ s_name = textBox3->Text;				// �������
	String^ name = textBox4->Text;					// ���
	String^ patr = textBox5->Text;					// ��������
	int date = Convert::ToInt32(textBox6->Text);	// ���� ��������
	String^ place = textBox7->Text;					// ����� ��������
	int num = Convert::ToInt32(textBox8->Text);		// ����� ��������

	// ������ � ��
	dbConnection->Open(); // ������� ����������
	String^ query = "INSERT INTO [tab1] VALUES ('" + 
		nick_n + "', '" + pass + "', '" + 
		s_name + "', '" + name + "', '" + 
		patr   + "',  " + date + ", '" + 
		place  + "',  " + num  + ")";

	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection); 
	dbComand->ExecuteNonQuery();
	MessageBox::Show("������ ���������!", "������!");


	dbConnection->Close(); // ������� ���������� � ��
	this->Close();	// ������� �����

    return System::Void();
}

System::Void Projectlab2::MyForm2::MyForm2_Load(System::Object^ sender, System::EventArgs^ e){
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
	
	return System::Void();
}
