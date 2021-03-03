#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
namespace Projectlab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Collections::Generic;
	using namespace System::Text;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form{

	public:
		MyForm(void)
		{
			InitializeComponent();
			
			//
			//TODO: добавьте код конструктора
			//
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nickname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Patronymic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateOfBirth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlaceOfBirth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Num;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;

	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nickname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Patronymic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateOfBirth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlaceOfBirth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя пользователя";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(14, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 21);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->Location = System::Drawing::Point(14, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 60);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button2->Location = System::Drawing::Point(14, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 46);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Регистрация";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 120);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(186, 21);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(14, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Пароль";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Nickname,
					this->password, this->Surname, this->Name, this->Patronymic, this->DateOfBirth, this->PlaceOfBirth, this->Num
			});
			this->dataGridView1->Location = System::Drawing::Point(265, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 105);
			this->dataGridView1->TabIndex = 6;
			// 
			// Nickname
			// 
			this->Nickname->HeaderText = L"Nickname";
			this->Nickname->Name = L"Nickname";
			// 
			// password
			// 
			this->password->HeaderText = L"Password";
			this->password->Name = L"password";
			// 
			// Surname
			// 
			this->Surname->HeaderText = L"surname";
			this->Surname->Name = L"Surname";
			// 
			// Name
			// 
			this->Name->HeaderText = L"name";
			this->Name->Name = L"Name";
			// 
			// Patronymic
			// 
			this->Patronymic->HeaderText = L"patronymic ";
			this->Patronymic->Name = L"Patronymic";
			// 
			// DateOfBirth
			// 
			this->DateOfBirth->HeaderText = L"dateofbirth";
			this->DateOfBirth->Name = L"DateOfBirth";
			// 
			// PlaceOfBirth
			// 
			this->PlaceOfBirth->HeaderText = L"placeofbirth ";
			this->PlaceOfBirth->Name = L"PlaceOfBirth";
			// 
			// Num
			// 
			this->Num->HeaderText = L"num";
			this->Num->Name = L"Num";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(220, 298);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
		//	this->Name = L"MyForm";
			this->Text = L"Вход";
			this->Activated += gcnew System::EventHandler(this, &MyForm::MyForm_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		
		// Подкл. к БД
		String^ connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source= Database.mdb";
		OleDbConnection^ dbConnection;
	
		// Бегаем по БД в поисках юзера
		bool IsUserExists(String^ name, String^ password) {
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();

			String^ selectCmd = ("SELECT * FROM [tab1] WHERE Nickname= '"+ name +"' AND Password= '"+ password + "' ");
			OleDbCommand^ cmd = gcnew OleDbCommand(selectCmd, dbConnection);
			OleDbDataReader^ reader = cmd->ExecuteReader();
			
			return reader->HasRows;

			reader->Close();
			dbConnection->Close();
		}

	// Прототипы процедур

	// Кнопка для перехода в форму "Войти"
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e); 

	// Кнопка для перехода в форму "Регистрация"
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e); 
		
	// Загрузка формы и открытие соединение с БД
	public: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
		
	private: System::Void MyForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
	}

	private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		dbConnection->Close(); // закрыть соединение с БД
	}
};
}
