#include "Register.h"
#include "Forget.h"
#include "Dashboard.h"

#pragma once

namespace PayrollManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	protected:


	private: System::Windows::Forms::Button^ login;
	protected:






	private: System::Windows::Forms::Label^ llogin;


	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Label^ user;
	private: System::Windows::Forms::Label^ pass;
	private: System::Windows::Forms::Button^ Register;
	private: System::Windows::Forms::LinkLabel^ Forget;
	private: System::Windows::Forms::Button^ loginbutton;
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::CheckBox^ showpassword;














	private: System::ComponentModel::IContainer^ components;
	protected:

	private:


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->llogin = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->user = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::Label());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->Forget = (gcnew System::Windows::Forms::LinkLabel());
			this->loginbutton = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->showpassword = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// llogin
			// 
			this->llogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->llogin->BackColor = System::Drawing::Color::Transparent;
			this->llogin->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llogin->ForeColor = System::Drawing::Color::DarkCyan;
			this->llogin->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->llogin->Location = System::Drawing::Point(419, 142);
			this->llogin->Name = L"llogin";
			this->llogin->Size = System::Drawing::Size(452, 62);
			this->llogin->TabIndex = 8;
			this->llogin->Text = L"LOGIN HERE";
			this->llogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1301, 100);
			this->panel1->TabIndex = 20;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(52, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1301, 100);
			this->label1->TabIndex = 1;
			this->label1->Text = L"University Of Engineering And Technology Lahore, Narowal Campus";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click_1);
			// 
			// tbemail
			// 
			this->tbemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbemail->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->tbemail->BackColor = System::Drawing::Color::White;
			this->tbemail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbemail->ForeColor = System::Drawing::SystemColors::InfoText;
			this->tbemail->Location = System::Drawing::Point(611, 237);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(260, 29);
			this->tbemail->TabIndex = 0;
			this->tbemail->Tag = L"";
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// tbpassword
			// 
			this->tbpassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbpassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbpassword->Location = System::Drawing::Point(611, 278);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->Size = System::Drawing::Size(260, 29);
			this->tbpassword->TabIndex = 1;
			this->tbpassword->UseSystemPasswordChar = true;
			// 
			// user
			// 
			this->user->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->user->BackColor = System::Drawing::Color::Transparent;
			this->user->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user->ForeColor = System::Drawing::Color::DarkCyan;
			this->user->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->user->Location = System::Drawing::Point(415, 237);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(127, 29);
			this->user->TabIndex = 3;
			this->user->Text = L"EMAIL:";
			this->user->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->user->UseMnemonic = false;
			this->user->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// pass
			// 
			this->pass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pass->BackColor = System::Drawing::Color::Transparent;
			this->pass->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::DarkCyan;
			this->pass->Location = System::Drawing::Point(415, 278);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(127, 29);
			this->pass->TabIndex = 3;
			this->pass->Text = L"PASSWORD:";
			this->pass->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pass->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// Register
			// 
			this->Register->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->Register->BackColor = System::Drawing::Color::Teal;
			this->Register->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Register->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Register->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Register->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Register->ForeColor = System::Drawing::Color::White;
			this->Register->Location = System::Drawing::Point(791, 377);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(80, 32);
			this->Register->TabIndex = 5;
			this->Register->Text = L"Sign Up";
			this->Register->UseVisualStyleBackColor = false;
			this->Register->Click += gcnew System::EventHandler(this, &Login::Register_Click);
			// 
			// Forget
			// 
			this->Forget->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->Forget->AutoSize = true;
			this->Forget->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Forget->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Forget->LinkColor = System::Drawing::Color::Red;
			this->Forget->Location = System::Drawing::Point(607, 348);
			this->Forget->Name = L"Forget";
			this->Forget->Size = System::Drawing::Size(166, 22);
			this->Forget->TabIndex = 3;
			this->Forget->TabStop = true;
			this->Forget->Text = L"Forget Password\?";
			this->Forget->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// loginbutton
			// 
			this->loginbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->loginbutton->BackColor = System::Drawing::Color::Teal;
			this->loginbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->loginbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->loginbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginbutton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginbutton->ForeColor = System::Drawing::Color::White;
			this->loginbutton->Location = System::Drawing::Point(611, 377);
			this->loginbutton->Name = L"loginbutton";
			this->loginbutton->Size = System::Drawing::Size(80, 32);
			this->loginbutton->TabIndex = 4;
			this->loginbutton->Text = L"Login";
			this->loginbutton->UseVisualStyleBackColor = false;
			this->loginbutton->Click += gcnew System::EventHandler(this, &Login::loginbutton_Click);
			// 
			// close
			// 
			this->close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->close->BackColor = System::Drawing::Color::DarkCyan;
			this->close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->close->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(611, 415);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(260, 35);
			this->close->TabIndex = 6;
			this->close->Text = L"Close";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &Login::close_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(52, 163);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(311, 314);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Login::pictureBox2_Click);
			// 
			// showpassword
			// 
			this->showpassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->showpassword->AutoSize = true;
			this->showpassword->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F));
			this->showpassword->ForeColor = System::Drawing::Color::DarkCyan;
			this->showpassword->Location = System::Drawing::Point(611, 313);
			this->showpassword->Name = L"showpassword";
			this->showpassword->Size = System::Drawing::Size(165, 26);
			this->showpassword->TabIndex = 2;
			this->showpassword->Text = L"Show Password";
			this->showpassword->UseVisualStyleBackColor = true;
			this->showpassword->CheckedChanged += gcnew System::EventHandler(this, &Login::showpassword_CheckedChanged);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1301, 592);
			this->Controls->Add(this->showpassword);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->close);
			this->Controls->Add(this->loginbutton);
			this->Controls->Add(this->llogin);
			this->Controls->Add(this->Forget);
			this->Controls->Add(this->Register);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->user);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbemail);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"Login";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Login";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void loginbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = tbemail->Text;
		String^ password = tbpassword->Text;
		//Let’s check if any of 2 fields are empty
		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password", "Email or Password Empty", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		//In try Lets connect to Database
		try {
			String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			// Now let’s create the SQL Query
			String^ sqlQuery = "SELECT * FROM users WHERE Email=@email AND Password=@password;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@password", password);
			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read()) {
				// Authentication successful
				MessageBox::Show("Login Successfully", "Login", MessageBoxButtons::OK,MessageBoxIcon::Information);
				this->Hide();
				Dashboard^ dashboardForm = gcnew Dashboard();
				dashboardForm->SetPreviousForm(this); // Pass the current form as the previous form
				dashboardForm->ShowDialog();
			}
			else {
				// Authentication failed
				MessageBox::Show("Email or password is incorrect", "Email or Password Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect to database: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK,MessageBoxIcon::Error);
		}
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Hide();
		PayrollManagementSystem:: Forget^  newform=gcnew PayrollManagementSystem::Forget;
		newform->SetPreviousForm(this);
		newform->ShowDialog();
	}

	private: System::Void Register_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PayrollManagementSystem:: Register^ reg=gcnew PayrollManagementSystem::Register;
		reg->SetPreviousForm(this);
		reg->ShowDialog();
	}


private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void showpassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (showpassword->Checked)
	{
		tbpassword->UseSystemPasswordChar = false;
	}
	else {
		tbpassword->UseSystemPasswordChar = true;
	}
}
};
}
