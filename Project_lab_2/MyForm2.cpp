#include "Header.h"

System::Void Projectlab2::MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e){
	

	String^ connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source= Database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ nick_n = textBox1->Text;				// Имя пользователя
	String^ pass = textBox2->Text;					// Пароль
	String^ s_name = textBox3->Text;				// Фамилия
	String^ name = textBox4->Text;					// имя
	String^ patr = textBox5->Text;					// Отчество
	String^ date = textBox6->Text;					// Дата рождения
	String^ place = textBox7->Text;					// Место рождения
	String^ num = textBox8->Text;					// Номер телефона

	if (pass->Length != 5) {						// проверяем количество символов пароля
		MessageBox::Show("Пароль должен состоять из 5 символов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox2->Focus();
		return;
	}

	if (nick_n->Length == 0) {						// проверяем на пусто поле
		MessageBox::Show("Вы забыли вести имя пользователя", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox1->Focus();
		return;
	}

	// Запрос к БД
	dbConnection->Open(); // Открыть соединение
	String^ query = "INSERT INTO [tab1] VALUES ('" + 
		nick_n + "', '" + pass + "', '" + 
		s_name + "', '" + name + "', '" + 
		patr   + "', '" + date + "', '" + 
		place  + "', '" + num  + "')";

	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection); 
	dbComand->ExecuteNonQuery();
	MessageBox::Show("Данные добавлены!", "Готово!");

	dbConnection->Close(); // закрыть соединение с БД
	Owner->Show();
	this->Close();	// Закрыть форму

    return System::Void();
}

System::Void Projectlab2::MyForm2::MyForm2_Load(System::Object^ sender, System::EventArgs^ e){
		textBox1->Text = ""; textBox2->Text = ""; textBox3->Text = "";
		textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = "";
		textBox7->Text = ""; textBox8->Text = "";
	
	return System::Void();
}
