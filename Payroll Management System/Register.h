
#pragma once

namespace PayrollManagementSystem
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Register
	/// </summary>
public
	ref class Register : public System::Windows::Forms::Form
	{
	private:
		Form ^ previousForm;

	public:
		Register(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private:
		System::Windows::Forms::Label ^ lRegister;

	private:
		System::Windows::Forms::Button ^ button2;

	private:
		System::Windows::Forms::Label ^ useremail;

	private:
		System::Windows::Forms::Label ^ username;

	private:
		System::Windows::Forms::TextBox ^ tbemail;

	private:
		System::Windows::Forms::TextBox ^ tbname;

	private:
		System::Windows::Forms::Button ^ backtologin;

	private:
		System::Windows::Forms::TextBox ^ tbaddress;

	private:
		System::Windows::Forms::TextBox ^ tbphonenumber;

	private:
		System::Windows::Forms::Label ^ address;

	private:
		System::Windows::Forms::Label ^ phone;

	private:
		System::Windows::Forms::TextBox ^ tbpassword;

	private:
		System::Windows::Forms::Label ^ pass;

	private:
		System::Windows::Forms::Button ^ close;

	private:
		System::Windows::Forms::Panel ^ panel1;

	private:
		System::Windows::Forms::PictureBox ^ pictureBox1;

	private:
		System::Windows::Forms::Label ^ label1;

	private:
		System::Windows::Forms::PictureBox ^ pictureBox2;

	private:
		System::ComponentModel::IContainer ^ components;

	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->lRegister = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->useremail = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->backtologin = (gcnew System::Windows::Forms::Button());
			this->tbaddress = (gcnew System::Windows::Forms::TextBox());
			this->tbphonenumber = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::Label());
			this->phone = (gcnew System::Windows::Forms::Label());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::Label());
			this->close = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			//
			// lRegister
			//
			this->lRegister->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lRegister->BackColor = System::Drawing::Color::Transparent;
			this->lRegister->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->lRegister->ForeColor = System::Drawing::Color::DarkCyan;
			this->lRegister->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->lRegister->Location = System::Drawing::Point(426, 133);
			this->lRegister->Name = L"lRegister";
			this->lRegister->Size = System::Drawing::Size(452, 62);
			this->lRegister->TabIndex = 7;
			this->lRegister->Text = L"SIGN UP";
			this->lRegister->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// button2
			//
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::DarkCyan;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(618, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(260, 35);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Sign Up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Register::button2_Click);
			//
			// useremail
			//
			this->useremail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->useremail->BackColor = System::Drawing::Color::Transparent;
			this->useremail->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->useremail->ForeColor = System::Drawing::Color::DarkCyan;
			this->useremail->Location = System::Drawing::Point(422, 282);
			this->useremail->Name = L"useremail";
			this->useremail->Size = System::Drawing::Size(127, 29);
			this->useremail->TabIndex = 14;
			this->useremail->Text = L"Email:";
			this->useremail->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// username
			//
			this->username->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->username->BackColor = System::Drawing::Color::Transparent;
			this->username->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->username->ForeColor = System::Drawing::Color::DarkCyan;
			this->username->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->username->Location = System::Drawing::Point(422, 247);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(127, 29);
			this->username->TabIndex = 15;
			this->username->Text = L"Name:";
			this->username->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->username->Click += gcnew System::EventHandler(this, &Register::username_Click);
			//
			// tbemail
			//
			this->tbemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbemail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->tbemail->Location = System::Drawing::Point(618, 282);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(260, 29);
			this->tbemail->TabIndex = 12;
			this->tbemail->TabStop = false;
			//
			// tbname
			//
			this->tbname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbname->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->tbname->BackColor = System::Drawing::Color::White;
			this->tbname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbname->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->tbname->ForeColor = System::Drawing::SystemColors::InfoText;
			this->tbname->Location = System::Drawing::Point(618, 247);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(260, 29);
			this->tbname->TabIndex = 13;
			this->tbname->TabStop = false;
			this->tbname->Tag = L"";
			//
			// backtologin
			//
			this->backtologin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->backtologin->BackColor = System::Drawing::Color::DarkCyan;
			this->backtologin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backtologin->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->backtologin->Location = System::Drawing::Point(618, 479);
			this->backtologin->Name = L"backtologin";
			this->backtologin->Size = System::Drawing::Size(260, 35);
			this->backtologin->TabIndex = 17;
			this->backtologin->Text = L"Back to Login";
			this->backtologin->UseVisualStyleBackColor = false;
			this->backtologin->Click += gcnew System::EventHandler(this, &Register::backtologin_Click);
			//
			// tbaddress
			//
			this->tbaddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbaddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbaddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->tbaddress->Location = System::Drawing::Point(618, 352);
			this->tbaddress->Name = L"tbaddress";
			this->tbaddress->Size = System::Drawing::Size(260, 29);
			this->tbaddress->TabIndex = 18;
			this->tbaddress->TabStop = false;
			//
			// tbphonenumber
			//
			this->tbphonenumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbphonenumber->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->tbphonenumber->BackColor = System::Drawing::Color::White;
			this->tbphonenumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbphonenumber->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(0)));
			this->tbphonenumber->ForeColor = System::Drawing::SystemColors::InfoText;
			this->tbphonenumber->Location = System::Drawing::Point(618, 317);
			this->tbphonenumber->Name = L"tbphonenumber";
			this->tbphonenumber->Size = System::Drawing::Size(260, 29);
			this->tbphonenumber->TabIndex = 19;
			this->tbphonenumber->TabStop = false;
			this->tbphonenumber->Tag = L"";
			//
			// address
			//
			this->address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->address->BackColor = System::Drawing::Color::Transparent;
			this->address->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->address->ForeColor = System::Drawing::Color::DarkCyan;
			this->address->Location = System::Drawing::Point(422, 352);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(127, 29);
			this->address->TabIndex = 20;
			this->address->Text = L"Address:";
			this->address->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// phone
			//
			this->phone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->phone->BackColor = System::Drawing::Color::Transparent;
			this->phone->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(0)));
			this->phone->ForeColor = System::Drawing::Color::DarkCyan;
			this->phone->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->phone->Location = System::Drawing::Point(422, 317);
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(127, 29);
			this->phone->TabIndex = 21;
			this->phone->Text = L"Phone No. :";
			this->phone->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// tbpassword
			//
			this->tbpassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbpassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->tbpassword->Location = System::Drawing::Point(618, 387);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(260, 29);
			this->tbpassword->TabIndex = 22;
			this->tbpassword->TabStop = false;
			//
			// pass
			//
			this->pass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pass->BackColor = System::Drawing::Color::Transparent;
			this->pass->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::DarkCyan;
			this->pass->Location = System::Drawing::Point(422, 387);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(127, 29);
			this->pass->TabIndex = 23;
			this->pass->Text = L"Password";
			this->pass->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// close
			//
			this->close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->close->BackColor = System::Drawing::Color::DarkCyan;
			this->close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(618, 520);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(260, 35);
			this->close->TabIndex = 24;
			this->close->Text = L"Close";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &Register::close_Click);
			//
			// panel1
			//
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1301, 100);
			this->panel1->TabIndex = 25;
			//
			// pictureBox1
			//
			this->pictureBox1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
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
			//
			// pictureBox2
			//
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(52, 163);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(311, 314);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			//
			// Register
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1301, 592);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->close);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->address);
			this->Controls->Add(this->phone);
			this->Controls->Add(this->tbaddress);
			this->Controls->Add(this->tbphonenumber);
			this->Controls->Add(this->backtologin);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->useremail);
			this->Controls->Add(this->username);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->lRegister);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"Register";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Register";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private:
		System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void Register_Load(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void label3_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void textBox1_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			String ^ email = tbemail->Text;
			String ^ password = tbpassword->Text;
			String ^ name = tbname->Text;
			String ^ phonenumber = tbphonenumber->Text;
			String ^ address = tbaddress->Text;
			// Let’s check if any of 2 fields are empty
			if (email->Length == 0 || password->Length == 0 || name->Length == 0 || phonenumber->Length == 0 || address->Length == 0)
			{
				MessageBox::Show("Please Fill All Fields", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			// In try Lets connect to Database
			try
			{
				String ^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				//  Now let’s create the SQL Query

				String ^ sqlQuery = "INSERT INTO users (Name,Email,[Phone No],Address,Password) VALUES (@name,@email,@phonenumber,@address,@password);";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@email", email);
				command.Parameters->AddWithValue("@password", password);
				command.Parameters->AddWithValue("@name", name);
				command.Parameters->AddWithValue("@phonenumber", phonenumber);
				command.Parameters->AddWithValue("@address", address);
				int ^ reader = command.ExecuteNonQuery();

				if (reader != nullptr)
				{
					// Authentication successful
					MessageBox::Show("Registered Sucessfully!", "Register", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					// Authentication failed
					MessageBox::Show("Email or password is incorrect", "Email or Password Error",
									 MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

			catch (Exception ^ ex)
			{
				MessageBox::Show("Failed to connect to database: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	private:
		System::Void tbemail_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	public:
		String ^ Registerback = nullptr;

	private:
		System::Void backtologin_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->Hide();		  // Hide current form
			previousForm->Show(); // Show previous form
		}

	public:
		// Method to set the previous form
		void SetPreviousForm(Form ^ form)
		{
			previousForm = form;
		}

	private:
		System::Void close_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->Close();
		}

	private:
		System::Void username_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}
	};
}
