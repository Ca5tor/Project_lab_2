#pragma once

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

value struct Node {
	String^ nickname;		// Никнейм
	String^ password;		// Пароль
	String^ surname;		// Фамилия
	String^ name;			// Имя
	String^ patronymic;		// Отчество 
	String^ date_of_birth;	// Дата рождения
	String^ place_of_birth;	// Место рождения
	String^ phone_num;		// Номер телефона

};
