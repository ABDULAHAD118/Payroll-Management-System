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
	/// Summary for Job_Position
	/// </summary>
	public ref class Job_Position : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
	public:
		Job_Position(void)
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
		~Job_Position()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ uet;




	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ home;
	private: System::Windows::Forms::ComboBox^ Box1;


	private: System::Windows::Forms::Label^ employeeid;
	private: System::Windows::Forms::Label^ position;

	private: System::Windows::Forms::ComboBox^ tbposition;
	private: System::Windows::Forms::ComboBox^ tbdepartment;
	private: System::Windows::Forms::Label^ department;




	private: System::Windows::Forms::Label^ joindate;
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::DateTimePicker^ tbjoiningdate;




	private: System::Windows::Forms::Label^ label2;



	protected:

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
			this->uet = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->home = (gcnew System::Windows::Forms::Button());
			this->Box1 = (gcnew System::Windows::Forms::ComboBox());
			this->employeeid = (gcnew System::Windows::Forms::Label());
			this->position = (gcnew System::Windows::Forms::Label());
			this->tbposition = (gcnew System::Windows::Forms::ComboBox());
			this->tbdepartment = (gcnew System::Windows::Forms::ComboBox());
			this->department = (gcnew System::Windows::Forms::Label());
			this->joindate = (gcnew System::Windows::Forms::Label());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->tbjoiningdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
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
			this->uet->Size = System::Drawing::Size(1239, 72);
			this->uet->TabIndex = 2;
			this->uet->Text = L"University Of Engineering And Technology Lahore, Narowal Campus";
			this->uet->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel3->Controls->Add(this->home);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 72);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(170, 677);
			this->panel3->TabIndex = 6;
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
			this->home->Click += gcnew System::EventHandler(this, &Job_Position::home_Click);
			// 
			// Box1
			// 
			this->Box1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Box1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->Box1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"514", L"512", L"513" });
			this->Box1->Location = System::Drawing::Point(672, 223);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(177, 31);
			this->Box1->TabIndex = 69;
			// 
			// employeeid
			// 
			this->employeeid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->employeeid->AutoSize = true;
			this->employeeid->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeid->Location = System::Drawing::Point(495, 226);
			this->employeeid->Name = L"employeeid";
			this->employeeid->Size = System::Drawing::Size(133, 24);
			this->employeeid->TabIndex = 67;
			this->employeeid->Text = L"Employee id";
			this->employeeid->Click += gcnew System::EventHandler(this, &Job_Position::employeeid_Click);
			// 
			// position
			// 
			this->position->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->position->AutoSize = true;
			this->position->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->position->Location = System::Drawing::Point(370, 346);
			this->position->Name = L"position";
			this->position->Size = System::Drawing::Size(197, 24);
			this->position->TabIndex = 70;
			this->position->Text = L"Employee Position";
			this->position->Click += gcnew System::EventHandler(this, &Job_Position::label1_Click);
			// 
			// tbposition
			// 
			this->tbposition->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbposition->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbposition->FormattingEnabled = true;
			this->tbposition->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Board member", L"CEO", L"Department Head", L"Department Specialist",
					L"Executive Assistant", L"Intern", L"Junior Staffer", L"Senior Staffer", L"Team Leader"
			});
			this->tbposition->Location = System::Drawing::Point(672, 346);
			this->tbposition->Name = L"tbposition";
			this->tbposition->Size = System::Drawing::Size(177, 24);
			this->tbposition->TabIndex = 71;
			// 
			// tbdepartment
			// 
			this->tbdepartment->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbdepartment->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->tbdepartment->FormattingEnabled = true;
			this->tbdepartment->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Administrative", L"Account department", L"Computers and information technology",
					L"Customer service", L"Human Resources", L"Marketing", L"Research and development"
			});
			this->tbdepartment->Location = System::Drawing::Point(672, 388);
			this->tbdepartment->Name = L"tbdepartment";
			this->tbdepartment->Size = System::Drawing::Size(177, 24);
			this->tbdepartment->TabIndex = 73;
			// 
			// department
			// 
			this->department->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->department->AutoSize = true;
			this->department->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->department->Location = System::Drawing::Point(370, 388);
			this->department->Name = L"department";
			this->department->Size = System::Drawing::Size(233, 24);
			this->department->TabIndex = 72;
			this->department->Text = L"Employee Department";
			// 
			// joindate
			// 
			this->joindate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->joindate->AutoSize = true;
			this->joindate->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->joindate->Location = System::Drawing::Point(370, 431);
			this->joindate->Name = L"joindate";
			this->joindate->Size = System::Drawing::Size(136, 24);
			this->joindate->TabIndex = 75;
			this->joindate->Text = L"Joining Date";
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
			this->Add->Location = System::Drawing::Point(688, 509);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(129, 31);
			this->Add->TabIndex = 76;
			this->Add->Text = L"Add Data";
			this->Add->UseVisualStyleBackColor = false;
			this->Add->Click += gcnew System::EventHandler(this, &Job_Position::Add_Click);
			// 
			// tbjoiningdate
			// 
			this->tbjoiningdate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbjoiningdate->CustomFormat = L"";
			this->tbjoiningdate->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->tbjoiningdate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->tbjoiningdate->Location = System::Drawing::Point(672, 436);
			this->tbjoiningdate->MaxDate = System::DateTime(2024, 4, 26, 0, 0, 0, 0);
			this->tbjoiningdate->Name = L"tbjoiningdate";
			this->tbjoiningdate->Size = System::Drawing::Size(177, 22);
			this->tbjoiningdate->TabIndex = 79;
			this->tbjoiningdate->Value = System::DateTime(2024, 4, 26, 0, 0, 0, 0);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(526, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(490, 57);
			this->label2->TabIndex = 81;
			this->label2->Text = L"ADD EMPLOYEE POSTION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Job_Position
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1239, 749);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbjoiningdate);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->joindate);
			this->Controls->Add(this->tbdepartment);
			this->Controls->Add(this->department);
			this->Controls->Add(this->tbposition);
			this->Controls->Add(this->position);
			this->Controls->Add(this->Box1);
			this->Controls->Add(this->employeeid);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->uet);
			this->Name = L"Job_Position";
			this->Text = L"Job_Position";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Job_Position::Job_Position_Load);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Job_Position_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			// Now let’s create the SQL Query
			String^ sqlQuery = "SELECT Employee_ID FROM Employee;";

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
	public:
		// Method to set the previous form
		void SetPreviousForm(Form^ form) {
			previousForm = form;
		}
private: System::Void home_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Hide(); // Hide current form
	previousForm->Show(); // Show previous form
}
private: System::Void employeeid_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ employeeID = Box1->Text;
	String^ employeeposition = tbposition->Text;
	String^ employeedepartment = tbdepartment->Text;
	String^ joiningdate = tbjoiningdate->Text;
	//Let’s check if any of 2 fields are empty
	if (employeeID->Length == 0 || employeeposition->Length == 0 || employeedepartment->Length == 0 || joiningdate->Length == 0 ) {
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
		String^ sqlQuery2 = "INSERT INTO Department (Employee_ID,Department_Name) VALUES (@employeeID,@employeedepartment);";
		SqlCommand command2(sqlQuery2, % sqlConn);
		command2.Parameters->AddWithValue("@employeeID", employeeID);
		command2.Parameters->AddWithValue("@employeedepartment", employeedepartment);
		int rowsAffected2 = command2.ExecuteNonQuery();

		// Fetch Department_ID from Department table
		String^ sqlQuery3 = "SELECT Department_ID FROM Department WHERE Employee_ID = @employeeID;";
		SqlCommand^ command3 = gcnew SqlCommand(sqlQuery3, % sqlConn);
		command3->Parameters->AddWithValue("@employeeID", employeeID);
		Object^ departmentID = command3->ExecuteScalar(); // Fetch single value

		// Insert into Job table
		String^ sqlQuery = "INSERT INTO Job (Employee_ID, Department_ID, Position, Joining_Date) VALUES (@employeeID, @departmentID, @employeeposition, @joiningdate);";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@employeeID", employeeID);
		command.Parameters->AddWithValue("@departmentID", departmentID); // Use fetched departmentID
		command.Parameters->AddWithValue("@employeeposition", employeeposition);
		command.Parameters->AddWithValue("@joiningdate", joiningdate);
		int rowsAffected = command.ExecuteNonQuery();

		// Check if both inserts were successful
		if (rowsAffected > 0 && rowsAffected2 > 0) {
			// Both inserts successful
			MessageBox::Show("Data Added Successfully!", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tbposition->Text = "";
			tbdepartment->Text = "";
			tbjoiningdate->Text = "";
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

};
}
