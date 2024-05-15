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
	/// Summary for Salary
	/// </summary>
	public ref class Salary : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
	public:
		Salary(void)
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
		~Salary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	protected:
	private: System::Windows::Forms::Button^ home;
	private: System::Windows::Forms::Label^ uet;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::Label^ lsalary;


	private: System::Windows::Forms::Label^ department;

	private: System::Windows::Forms::Label^ position;
	private: System::Windows::Forms::ComboBox^ Box1;
	private: System::Windows::Forms::Label^ employeeid;
	private: System::Windows::Forms::TextBox^ tbsalary;
	private: System::Windows::Forms::Button^ show;
	private: System::Windows::Forms::TextBox^ tbposition;
	private: System::Windows::Forms::TextBox^ tbdepartment;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->home = (gcnew System::Windows::Forms::Button());
			this->uet = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->lsalary = (gcnew System::Windows::Forms::Label());
			this->department = (gcnew System::Windows::Forms::Label());
			this->position = (gcnew System::Windows::Forms::Label());
			this->Box1 = (gcnew System::Windows::Forms::ComboBox());
			this->employeeid = (gcnew System::Windows::Forms::Label());
			this->tbsalary = (gcnew System::Windows::Forms::TextBox());
			this->show = (gcnew System::Windows::Forms::Button());
			this->tbposition = (gcnew System::Windows::Forms::TextBox());
			this->tbdepartment = (gcnew System::Windows::Forms::TextBox());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel3->Controls->Add(this->home);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 72);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(170, 546);
			this->panel3->TabIndex = 83;
			// 
			// home
			// 
			this->home->BackColor = System::Drawing::Color::MediumTurquoise;
			this->home->Cursor = System::Windows::Forms::Cursors::Hand;
			this->home->FlatAppearance->BorderSize = 0;
			this->home->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->home->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home->Location = System::Drawing::Point(50, 71);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(75, 29);
			this->home->TabIndex = 4;
			this->home->Text = L"Home";
			this->home->UseVisualStyleBackColor = false;
			this->home->Click += gcnew System::EventHandler(this, &Salary::home_Click);
			// 
			// uet
			// 
			this->uet->BackColor = System::Drawing::Color::LightSeaGreen;
			this->uet->Dock = System::Windows::Forms::DockStyle::Top;
			this->uet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->uet->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold));
			this->uet->ForeColor = System::Drawing::Color::White;
			this->uet->Location = System::Drawing::Point(0, 0);
			this->uet->Name = L"uet";
			this->uet->Size = System::Drawing::Size(1272, 72);
			this->uet->TabIndex = 82;
			this->uet->Text = L"University Of Engineering And Technology Lahore, Narowal Campus";
			this->uet->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(512, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(490, 57);
			this->label2->TabIndex = 93;
			this->label2->Text = L"ADD EMPLOYEE SALARY";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add
			// 
			this->Add->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Add->BackColor = System::Drawing::Color::DarkCyan;
			this->Add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Add->FlatAppearance->BorderSize = 0;
			this->Add->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Add->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Add->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add->ForeColor = System::Drawing::Color::White;
			this->Add->Location = System::Drawing::Point(807, 493);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(129, 31);
			this->Add->TabIndex = 91;
			this->Add->Text = L"Add Salary";
			this->Add->UseVisualStyleBackColor = false;
			this->Add->Click += gcnew System::EventHandler(this, &Salary::Add_Click);
			// 
			// lsalary
			// 
			this->lsalary->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lsalary->AutoSize = true;
			this->lsalary->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->lsalary->Location = System::Drawing::Point(472, 421);
			this->lsalary->Name = L"lsalary";
			this->lsalary->Size = System::Drawing::Size(72, 24);
			this->lsalary->TabIndex = 90;
			this->lsalary->Text = L"Salary";
			// 
			// department
			// 
			this->department->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->department->AutoSize = true;
			this->department->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->department->Location = System::Drawing::Point(472, 378);
			this->department->Name = L"department";
			this->department->Size = System::Drawing::Size(233, 24);
			this->department->TabIndex = 88;
			this->department->Text = L"Employee Department";
			// 
			// position
			// 
			this->position->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->position->AutoSize = true;
			this->position->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->position->Location = System::Drawing::Point(472, 336);
			this->position->Name = L"position";
			this->position->Size = System::Drawing::Size(197, 24);
			this->position->TabIndex = 86;
			this->position->Text = L"Employee Position";
			// 
			// Box1
			// 
			this->Box1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Box1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->Box1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"514", L"512", L"513" });
			this->Box1->Location = System::Drawing::Point(684, 201);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(177, 31);
			this->Box1->TabIndex = 85;
			// 
			// employeeid
			// 
			this->employeeid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->employeeid->AutoSize = true;
			this->employeeid->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeid->Location = System::Drawing::Point(507, 204);
			this->employeeid->Name = L"employeeid";
			this->employeeid->Size = System::Drawing::Size(133, 24);
			this->employeeid->TabIndex = 84;
			this->employeeid->Text = L"Employee id";
			// 
			// tbsalary
			// 
			this->tbsalary->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbsalary->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->tbsalary->Location = System::Drawing::Point(774, 426);
			this->tbsalary->Name = L"tbsalary";
			this->tbsalary->Size = System::Drawing::Size(177, 22);
			this->tbsalary->TabIndex = 94;
			// 
			// show
			// 
			this->show->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->show->BackColor = System::Drawing::Color::DarkCyan;
			this->show->Cursor = System::Windows::Forms::Cursors::Hand;
			this->show->FlatAppearance->BorderSize = 0;
			this->show->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->show->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->show->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->show->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show->ForeColor = System::Drawing::Color::White;
			this->show->Location = System::Drawing::Point(933, 201);
			this->show->Name = L"show";
			this->show->Size = System::Drawing::Size(133, 31);
			this->show->TabIndex = 95;
			this->show->Text = L"Show Data";
			this->show->UseVisualStyleBackColor = false;
			this->show->Click += gcnew System::EventHandler(this, &Salary::show_Click);
			// 
			// tbposition
			// 
			this->tbposition->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbposition->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->tbposition->Location = System::Drawing::Point(774, 336);
			this->tbposition->Name = L"tbposition";
			this->tbposition->ReadOnly = true;
			this->tbposition->Size = System::Drawing::Size(177, 22);
			this->tbposition->TabIndex = 96;
			// 
			// tbdepartment
			// 
			this->tbdepartment->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbdepartment->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->tbdepartment->Location = System::Drawing::Point(774, 378);
			this->tbdepartment->Name = L"tbdepartment";
			this->tbdepartment->ReadOnly = true;
			this->tbdepartment->Size = System::Drawing::Size(177, 22);
			this->tbdepartment->TabIndex = 97;
			// 
			// Salary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1272, 618);
			this->Controls->Add(this->tbdepartment);
			this->Controls->Add(this->tbposition);
			this->Controls->Add(this->show);
			this->Controls->Add(this->tbsalary);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->uet);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->lsalary);
			this->Controls->Add(this->department);
			this->Controls->Add(this->position);
			this->Controls->Add(this->Box1);
			this->Controls->Add(this->employeeid);
			this->Name = L"Salary";
			this->Text = L"Salary";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Salary::Salary_Load);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Salary_Load(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// Now let’s create the SQL Query
		String^ sqlQuery = "SELECT Employee_ID FROM Job;";

		SqlCommand^ command = gcnew SqlCommand(sqlQuery, % sqlConn); // Corrected line

		SqlDataAdapter^ da = gcnew SqlDataAdapter();
		da->SelectCommand = command;
		DataTable^ table = gcnew DataTable();
		da->Fill(table);
		Box1->DataSource = table;
		Box1->DisplayMember = "Employee_ID";
	}

	catch (Exception^ ex) {
		MessageBox::Show("Failed to connect to database: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void show_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ employeeID = Box1->Text;
	try {
		String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT J.Position, D.Department_Name FROM Job AS J INNER JOIN Department AS D ON J.Employee_ID = D.Employee_ID WHERE J.Employee_ID = @employeeID;";
		SqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@employeeID", employeeID);
		SqlDataReader^ reader = command.ExecuteReader();

		while (reader->Read()) {
			tbdepartment->Text = reader->GetString(1);
			tbposition->Text = reader->GetString(0);


			// Optionally, display a success message
			MessageBox::Show("Data retrieved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		sqlConn.Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK);
	}
}
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ employeeID = Box1->Text;
	String^ employeeposition = tbposition->Text;
	String^ salary = tbsalary->Text;
	//Let’s check if any of 2 fields are empty
	if (employeeID->Length == 0 || employeeposition->Length == 0 || salary->Length == 0) {
		MessageBox::Show("Please Fill All Fields", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	//In try Lets connect to Database
	// Connect to the database
	try {
		String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// Insert into Department table
		String^ sqlQuery2 = "INSERT INTO Salary (Employee_ID,Position,Salary) VALUES (@employeeID,@employeeposition,@salary);";
		SqlCommand command2(sqlQuery2, % sqlConn);
		command2.Parameters->AddWithValue("@employeeID", employeeID);
		command2.Parameters->AddWithValue("@employeeposition", employeeposition);
		command2.Parameters->AddWithValue("@salary", salary);
		int rowsAffected = command2.ExecuteNonQuery();

		// Check if both inserts were successful
		if (rowsAffected > 0 ) {
			// Both inserts successful
			MessageBox::Show("Data Added Successfully!", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tbposition->Text = "";
			tbdepartment->Text = "";
			tbsalary->Text = "";
		}
		else {
			// Insert failed
			MessageBox::Show("Record Not Inserted", "Record Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		// Exception occurred
		MessageBox::Show("Failed to connect to database: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void home_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Hide(); // Hide current form
	previousForm->Show(); // Show previous form
}
	   public:
		   // Method to set the previous form
		   void SetPreviousForm(Form^ form) {
			   previousForm = form;
		   }
};
}
