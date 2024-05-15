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
	/// Summary for Forget
	/// </summary>
public
	ref class Forget : public System::Windows::Forms::Form
	{
	private:
		Form ^ previousForm;

	public:
		Forget(void)
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
		~Forget()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	protected:
	private:
		System::Windows::Forms::Label ^ lForget;

	private:
		System::Windows::Forms::Button ^ forget;

	private:
		System::Windows::Forms::Label ^ user;

	private:
		System::Windows::Forms::TextBox ^ tbemail;

	private:
		System::Windows::Forms::Button ^ backtologin;

	private:
		System::Windows::Forms::Button ^ forgetbutton;

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
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Forget::typeid));
			this->lForget = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->backtologin = (gcnew System::Windows::Forms::Button());
			this->forgetbutton = (gcnew System::Windows::Forms::Button());
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
			// lForget
			//
			this->lForget->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lForget->BackColor = System::Drawing::Color::Transparent;
			this->lForget->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->lForget->ForeColor = System::Drawing::Color::DarkCyan;
			this->lForget->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->lForget->Location = System::Drawing::Point(426, 133);
			this->lForget->Name = L"lForget";
			this->lForget->Size = System::Drawing::Size(452, 62);
			this->lForget->TabIndex = 7;
			this->lForget->Text = L"FORGET PASSWORD";
			this->lForget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// user
			//
			this->user->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->user->BackColor = System::Drawing::Color::Transparent;
			this->user->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->user->ForeColor = System::Drawing::Color::DarkCyan;
			this->user->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->user->Location = System::Drawing::Point(422, 241);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(127, 29);
			this->user->TabIndex = 15;
			this->user->Text = L"EMAIL:";
			this->user->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->tbemail->Location = System::Drawing::Point(618, 241);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(260, 29);
			this->tbemail->TabIndex = 13;
			this->tbemail->TabStop = false;
			this->tbemail->Tag = L"";
			//
			// backtologin
			//
			this->backtologin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->backtologin->BackColor = System::Drawing::Color::DarkCyan;
			this->backtologin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backtologin->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->backtologin->Location = System::Drawing::Point(618, 334);
			this->backtologin->Name = L"backtologin";
			this->backtologin->Size = System::Drawing::Size(260, 35);
			this->backtologin->TabIndex = 18;
			this->backtologin->Text = L"Back to Login";
			this->backtologin->UseVisualStyleBackColor = false;
			this->backtologin->Click += gcnew System::EventHandler(this, &Forget::backtologin_Click);
			//
			// forgetbutton
			//
			this->forgetbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->forgetbutton->BackColor = System::Drawing::Color::DarkCyan;
			this->forgetbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->forgetbutton->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->forgetbutton->Location = System::Drawing::Point(618, 293);
			this->forgetbutton->Name = L"forgetbutton";
			this->forgetbutton->Size = System::Drawing::Size(260, 35);
			this->forgetbutton->TabIndex = 19;
			this->forgetbutton->Text = L"Forget Password";
			this->forgetbutton->UseVisualStyleBackColor = false;
			this->forgetbutton->Click += gcnew System::EventHandler(this, &Forget::forgetbutton_Click);
			//
			// close
			//
			this->close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->close->BackColor = System::Drawing::Color::DarkCyan;
			this->close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(618, 375);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(260, 35);
			this->close->TabIndex = 20;
			this->close->Text = L"Close";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &Forget::close_Click);
			//
			// panel1
			//
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1301, 100);
			this->panel1->TabIndex = 21;
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
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			//
			// Forget
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1301, 592);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->close);
			this->Controls->Add(this->forgetbutton);
			this->Controls->Add(this->backtologin);
			this->Controls->Add(this->user);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->lForget);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"Forget";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Forget";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Forget::Forget_Load);
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
		System::Void Forget_Load(System::Object ^ sender, System::EventArgs ^ e)
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
		System::Void tbemail_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void backtologin_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->Hide();		  // Hide current form
			previousForm->Show(); // Show previous form
		}

	private:
		System::Void forgetbutton_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			String ^ email = tbemail->Text;
			// Let’s check if any of 2 fields are empty
			if (email->Length == 0)
			{
				MessageBox::Show("Please enter email", "Email  Empty", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			// In try Lets connect to Database
			try
			{
				String ^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				//  Now let’s create the SQL Query

				String ^ sqlQuery = "SELECT * FROM users WHERE email=@email;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@email", email);
				SqlDataReader ^ reader = command.ExecuteReader();

				if (reader->Read())
				{
					// Authentication successful

					MessageBox::Show("Your Password is " + reader->GetValue(5)->ToString(), "Forget Password", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					// Authentication failed
					MessageBox::Show("Email  is incorrect", "Email  Error",
									 MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

			catch (Exception ^ ex)
			{
				MessageBox::Show("Failed to connect to database: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
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
	};
}
