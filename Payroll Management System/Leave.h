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
	/// Summary for Leave
	/// </summary>
	public ref class Leave : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
	public:
		Leave(void)
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
		~Leave()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	protected:
	private: System::Windows::Forms::Button^ home;
	private: System::Windows::Forms::TextBox^ tbreason;


	private: System::Windows::Forms::Label^ uet;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::Label^ reason;

	private: System::Windows::Forms::Label^ leavedatefrom;

	private: System::Windows::Forms::Label^ leavedateto;

	private: System::Windows::Forms::ComboBox^ Box1;
	private: System::Windows::Forms::Label^ employeeid;
	private: System::Windows::Forms::DateTimePicker^ tbleavedateto;
	private: System::Windows::Forms::DateTimePicker^ tbleavedatefrom;
	private: System::Windows::Forms::Label^ total;
	private: System::Windows::Forms::TextBox^ tbleave;



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
			this->tbreason = (gcnew System::Windows::Forms::TextBox());
			this->uet = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->reason = (gcnew System::Windows::Forms::Label());
			this->leavedatefrom = (gcnew System::Windows::Forms::Label());
			this->leavedateto = (gcnew System::Windows::Forms::Label());
			this->Box1 = (gcnew System::Windows::Forms::ComboBox());
			this->employeeid = (gcnew System::Windows::Forms::Label());
			this->tbleavedateto = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbleavedatefrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->total = (gcnew System::Windows::Forms::Label());
			this->tbleave = (gcnew System::Windows::Forms::TextBox());
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
			this->panel3->Size = System::Drawing::Size(170, 535);
			this->panel3->TabIndex = 99;
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
			this->home->Click += gcnew System::EventHandler(this, &Leave::home_Click);
			// 
			// tbreason
			// 
			this->tbreason->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbreason->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->tbreason->Location = System::Drawing::Point(774, 426);
			this->tbreason->Multiline = true;
			this->tbreason->Name = L"tbreason";
			this->tbreason->Size = System::Drawing::Size(177, 99);
			this->tbreason->TabIndex = 107;
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
			this->uet->Size = System::Drawing::Size(1264, 72);
			this->uet->TabIndex = 98;
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
			this->label2->Location = System::Drawing::Point(512, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(490, 57);
			this->label2->TabIndex = 106;
			this->label2->Text = L"EMPLOYEE LEAVE";
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
			this->Add->Location = System::Drawing::Point(603, 553);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(129, 31);
			this->Add->TabIndex = 105;
			this->Add->Text = L"Add Data";
			this->Add->UseVisualStyleBackColor = false;
			this->Add->Click += gcnew System::EventHandler(this, &Leave::Add_Click);
			// 
			// reason
			// 
			this->reason->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->reason->AutoSize = true;
			this->reason->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->reason->Location = System::Drawing::Point(486, 423);
			this->reason->Name = L"reason";
			this->reason->Size = System::Drawing::Size(87, 24);
			this->reason->TabIndex = 104;
			this->reason->Text = L"Reason";
			// 
			// leavedatefrom
			// 
			this->leavedatefrom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->leavedatefrom->AutoSize = true;
			this->leavedatefrom->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->leavedatefrom->Location = System::Drawing::Point(486, 356);
			this->leavedatefrom->Name = L"leavedatefrom";
			this->leavedatefrom->Size = System::Drawing::Size(183, 24);
			this->leavedatefrom->TabIndex = 103;
			this->leavedatefrom->Text = L"Leave Date From";
			// 
			// leavedateto
			// 
			this->leavedateto->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->leavedateto->AutoSize = true;
			this->leavedateto->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->leavedateto->Location = System::Drawing::Point(486, 314);
			this->leavedateto->Name = L"leavedateto";
			this->leavedateto->Size = System::Drawing::Size(154, 24);
			this->leavedateto->TabIndex = 102;
			this->leavedateto->Text = L"Leave Date To";
			// 
			// Box1
			// 
			this->Box1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Box1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->Box1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"514", L"512", L"513" });
			this->Box1->Location = System::Drawing::Point(684, 204);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(177, 31);
			this->Box1->TabIndex = 101;
			// 
			// employeeid
			// 
			this->employeeid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->employeeid->AutoSize = true;
			this->employeeid->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeid->Location = System::Drawing::Point(507, 207);
			this->employeeid->Name = L"employeeid";
			this->employeeid->Size = System::Drawing::Size(133, 24);
			this->employeeid->TabIndex = 100;
			this->employeeid->Text = L"Employee id";
			// 
			// tbleavedateto
			// 
			this->tbleavedateto->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbleavedateto->CustomFormat = L"dd-MM-yyyy";
			this->tbleavedateto->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->tbleavedateto->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->tbleavedateto->Location = System::Drawing::Point(774, 314);
			this->tbleavedateto->Name = L"tbleavedateto";
			this->tbleavedateto->Size = System::Drawing::Size(177, 22);
			this->tbleavedateto->TabIndex = 111;
			this->tbleavedateto->Value = System::DateTime(2024, 4, 30, 0, 0, 0, 0);
			// 
			// tbleavedatefrom
			// 
			this->tbleavedatefrom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbleavedatefrom->CustomFormat = L"dd-MM-yyyy";
			this->tbleavedatefrom->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->tbleavedatefrom->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->tbleavedatefrom->Location = System::Drawing::Point(774, 358);
			this->tbleavedatefrom->Name = L"tbleavedatefrom";
			this->tbleavedatefrom->Size = System::Drawing::Size(177, 22);
			this->tbleavedatefrom->TabIndex = 112;
			this->tbleavedatefrom->Value = System::DateTime(2024, 4, 30, 0, 0, 0, 0);
			// 
			// total
			// 
			this->total->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->total->Location = System::Drawing::Point(486, 390);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(126, 24);
			this->total->TabIndex = 113;
			this->total->Text = L"Total Leave";
			// 
			// tbleave
			// 
			this->tbleave->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbleave->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold));
			this->tbleave->Location = System::Drawing::Point(774, 392);
			this->tbleave->Multiline = true;
			this->tbleave->Name = L"tbleave";
			this->tbleave->Size = System::Drawing::Size(177, 22);
			this->tbleave->TabIndex = 115;
			// 
			// Leave
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1264, 607);
			this->Controls->Add(this->tbleave);
			this->Controls->Add(this->total);
			this->Controls->Add(this->tbleavedatefrom);
			this->Controls->Add(this->tbleavedateto);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->tbreason);
			this->Controls->Add(this->uet);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->reason);
			this->Controls->Add(this->leavedatefrom);
			this->Controls->Add(this->leavedateto);
			this->Controls->Add(this->Box1);
			this->Controls->Add(this->employeeid);
			this->Name = L"Leave";
			this->Text = L"Leave";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Leave::Leave_Load);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Leave_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ employeeID = Box1->Text;
	String^ leavedateto = tbleavedateto->Text;
	String^ leavedatefrom = tbleavedatefrom->Text;
	String^ reason = tbreason->Text;
	String^ totalleave = tbleave->Text;

	//Let’s check if any of 2 fields are empty
	if (totalleave->Length == 0 || employeeID->Length == 0 || leavedateto->Length == 0 || leavedatefrom->Length == 0 || reason->Length == 0) {
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
		String^ sqlQuery = "INSERT INTO Leave (Employee_ID,Leave_Date_To,Leave_Date_From,Reason,Total_Leave) VALUES (@employeeID,@leavedateto,@leavedatefrom,@reason,@totalleave);";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@employeeID", employeeID);
		command.Parameters->AddWithValue("@leavedateto", leavedateto);
		command.Parameters->AddWithValue("@leavedatefrom", leavedatefrom);
		command.Parameters->AddWithValue("@reason", reason);
		command.Parameters->AddWithValue("@totalleave", totalleave);
		int rowsAffected = command.ExecuteNonQuery();

		// Check if both inserts were successful
		if (rowsAffected > 0) {
			// Both inserts successful
			MessageBox::Show("Data Added Successfully!", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
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
