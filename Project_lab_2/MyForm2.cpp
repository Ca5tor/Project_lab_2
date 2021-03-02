#include "Header.h"

System::Void Projectlab2::MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e){
	Owner->Show();

	String^ connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source= Database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ nick_n = textBox1->Text;				// Имя пользователя
	String^ pass = textBox2->Text;					// Пароль
	String^ s_name = textBox3->Text;				// Фамилия
	String^ name = textBox4->Text;					// имя
	String^ patr = textBox5->Text;					// Отчество
	int date = Convert::ToInt32(textBox6->Text);	// Дата рождения
	String^ place = textBox7->Text;					// Место рождения
	int num = Convert::ToInt32(textBox8->Text);		// Номер телефона

	// Запрос к БД
	dbConnection->Open(); // Открыть соединение
	String^ query = "INSERT INTO [tab1] VALUES ('" + 
		nick_n + "', '" + pass + "', '" + 
		s_name + "', '" + name + "', '" + 
		patr   + "',  " + date + ", '" + 
		place  + "',  " + num  + ")";

	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection); 
	dbComand->ExecuteNonQuery();
	MessageBox::Show("Данные добавлены!", "Готово!");


	dbConnection->Close(); // закрыть соединение с БД
	this->Close();	// Закрыть форму

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
