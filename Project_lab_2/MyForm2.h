#pragma once
#include "MyForm.h"
namespace Projectlab2 {
	using namespace System::Data::OleDb;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
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
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nickname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Patronymic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateOfBirth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlaceOfBirth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Num;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nickname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Patronymic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateOfBirth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlaceOfBirth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя пользователя";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(148, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(125, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->Location = System::Drawing::Point(15, 322);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 45);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(148, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(12, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Пароль";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(148, 111);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(125, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->Location = System::Drawing::Point(12, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Фамилия";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(148, 139);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(125, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label4->Location = System::Drawing::Point(12, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Имя";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label5->Location = System::Drawing::Point(12, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Отчество";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(148, 217);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(125, 20);
			this->textBox6->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label6->Location = System::Drawing::Point(12, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Дата рождения";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(148, 243);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(125, 20);
			this->textBox7->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label7->Location = System::Drawing::Point(12, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Место рождения";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(148, 269);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(125, 20);
			this->textBox8->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label8->Location = System::Drawing::Point(12, 269);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Телефон";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(148, 165);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(125, 20);
			this->textBox5->TabIndex = 10;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Nickname,
					this->password, this->Surname, this->Name, this->Patronymic, this->DateOfBirth, this->PlaceOfBirth, this->Num
			});
			this->dataGridView1->Location = System::Drawing::Point(295, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 274);
			this->dataGridView1->TabIndex = 17;
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
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(287, 382);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
		//	this->Name = L"MyForm2";
			this->Text = L"Регистрация";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion
	// Прототипы процедур

		// функция проверки что длина пароль составляет 5 символов
		bool GetPassword(TextBox^ Tx, String^ s, String^ x) {
			// проверка на пустое поле
			if (Tx->Text->Length != 5) {
				MessageBox::Show(s, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Tx->Focus();
				return false;
			}

			x = Convert::ToString(Tx->Text);

			return true;
		}

	// Ввод и сохранение в БД данных
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	// Загузка формы
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e); 
};
}
