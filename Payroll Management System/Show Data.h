
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
	/// Summary for AddData
	/// </summary>
	public ref class ShowData : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
	public:

		ShowData(void)
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
		~ShowData()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ home;















































	private: System::Windows::Forms::Label^ employeeid;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ showdata;


















	private: System::Windows::Forms::Button^ del;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::TextBox^ tbsalary;
private: System::Windows::Forms::Label^ lsalary;

private: System::Windows::Forms::Label^ department;

private: System::Windows::Forms::Label^ position;
private: System::Windows::Forms::TextBox^ tbaddress;
private: System::Windows::Forms::Label^ address;
private: System::Windows::Forms::Label^ cnic;

private: System::Windows::Forms::TextBox^ tbpostal;
private: System::Windows::Forms::Label^ postalcode;
private: System::Windows::Forms::TextBox^ tbcity;
private: System::Windows::Forms::Label^ city;
private: System::Windows::Forms::TextBox^ tbcountry;
private: System::Windows::Forms::Label^ country;
private: System::Windows::Forms::TextBox^ tbeducation;
private: System::Windows::Forms::Label^ education;
private: System::Windows::Forms::Label^ phonenumber;
private: System::Windows::Forms::TextBox^ tbemail;
private: System::Windows::Forms::Label^ email;
private: System::Windows::Forms::Label^ gender;
private: System::Windows::Forms::TextBox^ tbl_name;
private: System::Windows::Forms::Label^ lastname;
private: System::Windows::Forms::TextBox^ tbf_name;
private: System::Windows::Forms::Label^ firstname;
private: System::Windows::Forms::TextBox^ tbgender;
private: System::Windows::Forms::TextBox^ tbphone;
private: System::Windows::Forms::TextBox^ tbdepartment;


private: System::Windows::Forms::TextBox^ tbposition;

private: System::Windows::Forms::TextBox^ tbcnic;
private: System::Windows::Forms::TextBox^ tbjoindate;
private: System::Windows::Forms::Label^ joindate;
private: System::Windows::Forms::TextBox^ tbleave;

private: System::Windows::Forms::Label^ total;

















	protected:



	private: System::ComponentModel::IContainer^ components;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->home = (gcnew System::Windows::Forms::Button());
			this->employeeid = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->del = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tbsalary = (gcnew System::Windows::Forms::TextBox());
			this->lsalary = (gcnew System::Windows::Forms::Label());
			this->department = (gcnew System::Windows::Forms::Label());
			this->position = (gcnew System::Windows::Forms::Label());
			this->tbaddress = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::Label());
			this->cnic = (gcnew System::Windows::Forms::Label());
			this->tbpostal = (gcnew System::Windows::Forms::TextBox());
			this->postalcode = (gcnew System::Windows::Forms::Label());
			this->tbcity = (gcnew System::Windows::Forms::TextBox());
			this->city = (gcnew System::Windows::Forms::Label());
			this->tbcountry = (gcnew System::Windows::Forms::TextBox());
			this->country = (gcnew System::Windows::Forms::Label());
			this->tbeducation = (gcnew System::Windows::Forms::TextBox());
			this->education = (gcnew System::Windows::Forms::Label());
			this->phonenumber = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::Label());
			this->tbl_name = (gcnew System::Windows::Forms::TextBox());
			this->lastname = (gcnew System::Windows::Forms::Label());
			this->tbf_name = (gcnew System::Windows::Forms::TextBox());
			this->firstname = (gcnew System::Windows::Forms::Label());
			this->tbgender = (gcnew System::Windows::Forms::TextBox());
			this->tbphone = (gcnew System::Windows::Forms::TextBox());
			this->tbdepartment = (gcnew System::Windows::Forms::TextBox());
			this->tbposition = (gcnew System::Windows::Forms::TextBox());
			this->tbcnic = (gcnew System::Windows::Forms::TextBox());
			this->tbjoindate = (gcnew System::Windows::Forms::TextBox());
			this->joindate = (gcnew System::Windows::Forms::Label());
			this->tbleave = (gcnew System::Windows::Forms::TextBox());
			this->total = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
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
			this->label1->Size = System::Drawing::Size(1290, 100);
			this->label1->TabIndex = 2;
			this->label1->Text = L"PAYROLL MANAGEMENT SYSTEM";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel3->Controls->Add(this->home);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 100);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 641);
			this->panel3->TabIndex = 3;
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
			this->home->Click += gcnew System::EventHandler(this, &ShowData::hom_Click);
			// 
			// employeeid
			// 
			this->employeeid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->employeeid->AutoSize = true;
			this->employeeid->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeid->Location = System::Drawing::Point(508, 200);
			this->employeeid->Name = L"employeeid";
			this->employeeid->Size = System::Drawing::Size(133, 24);
			this->employeeid->TabIndex = 50;
			this->employeeid->Text = L"Employee id";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(484, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(490, 57);
			this->label2->TabIndex = 53;
			this->label2->Text = L"EMPLOYEE INFORMATION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// del
			// 
			this->del->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->del->BackColor = System::Drawing::Color::DarkCyan;
			this->del->Cursor = System::Windows::Forms::Cursors::Hand;
			this->del->FlatAppearance->BorderSize = 0;
			this->del->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->del->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del->ForeColor = System::Drawing::Color::White;
			this->del->Location = System::Drawing::Point(932, 193);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(133, 31);
			this->del->TabIndex = 45;
			this->del->Text = L"Show Data";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &ShowData::del_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"514", L"512", L"513" });
			this->comboBox1->Location = System::Drawing::Point(699, 193);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 31);
			this->comboBox1->TabIndex = 67;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ShowData::comboBox1_SelectedIndexChanged);
			// 
			// tbsalary
			// 
			this->tbsalary->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbsalary->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbsalary->Location = System::Drawing::Point(1029, 577);
			this->tbsalary->Name = L"tbsalary";
			this->tbsalary->ReadOnly = true;
			this->tbsalary->Size = System::Drawing::Size(177, 29);
			this->tbsalary->TabIndex = 124;
			// 
			// lsalary
			// 
			this->lsalary->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lsalary->AutoSize = true;
			this->lsalary->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->lsalary->Location = System::Drawing::Point(852, 580);
			this->lsalary->Name = L"lsalary";
			this->lsalary->Size = System::Drawing::Size(72, 24);
			this->lsalary->TabIndex = 123;
			this->lsalary->Text = L"Salary";
			// 
			// department
			// 
			this->department->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->department->AutoSize = true;
			this->department->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->department->Location = System::Drawing::Point(277, 580);
			this->department->Name = L"department";
			this->department->Size = System::Drawing::Size(233, 24);
			this->department->TabIndex = 121;
			this->department->Text = L"Employee Department";
			// 
			// position
			// 
			this->position->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->position->AutoSize = true;
			this->position->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->position->Location = System::Drawing::Point(277, 538);
			this->position->Name = L"position";
			this->position->Size = System::Drawing::Size(197, 24);
			this->position->TabIndex = 119;
			this->position->Text = L"Employee Position";
			// 
			// tbaddress
			// 
			this->tbaddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbaddress->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbaddress->Location = System::Drawing::Point(1029, 377);
			this->tbaddress->Multiline = true;
			this->tbaddress->Name = L"tbaddress";
			this->tbaddress->ReadOnly = true;
			this->tbaddress->Size = System::Drawing::Size(177, 31);
			this->tbaddress->TabIndex = 117;
			// 
			// address
			// 
			this->address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->address->AutoSize = true;
			this->address->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->Location = System::Drawing::Point(852, 380);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(102, 24);
			this->address->TabIndex = 116;
			this->address->Text = L"Address:";
			// 
			// cnic
			// 
			this->cnic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->cnic->AutoSize = true;
			this->cnic->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnic->Location = System::Drawing::Point(852, 282);
			this->cnic->Name = L"cnic";
			this->cnic->Size = System::Drawing::Size(105, 24);
			this->cnic->TabIndex = 115;
			this->cnic->Text = L"CNIC No.:";
			// 
			// tbpostal
			// 
			this->tbpostal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbpostal->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbpostal->Location = System::Drawing::Point(1029, 533);
			this->tbpostal->Name = L"tbpostal";
			this->tbpostal->ReadOnly = true;
			this->tbpostal->Size = System::Drawing::Size(177, 29);
			this->tbpostal->TabIndex = 113;
			// 
			// postalcode
			// 
			this->postalcode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->postalcode->AutoSize = true;
			this->postalcode->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->postalcode->Location = System::Drawing::Point(852, 538);
			this->postalcode->Name = L"postalcode";
			this->postalcode->Size = System::Drawing::Size(139, 24);
			this->postalcode->TabIndex = 112;
			this->postalcode->Text = L"Postal Code:";
			// 
			// tbcity
			// 
			this->tbcity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcity->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbcity->Location = System::Drawing::Point(1029, 490);
			this->tbcity->Name = L"tbcity";
			this->tbcity->ReadOnly = true;
			this->tbcity->Size = System::Drawing::Size(177, 29);
			this->tbcity->TabIndex = 111;
			// 
			// city
			// 
			this->city->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->city->AutoSize = true;
			this->city->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->city->Location = System::Drawing::Point(852, 485);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(55, 24);
			this->city->TabIndex = 110;
			this->city->Text = L"City:";
			// 
			// tbcountry
			// 
			this->tbcountry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcountry->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbcountry->Location = System::Drawing::Point(1029, 437);
			this->tbcountry->Multiline = true;
			this->tbcountry->Name = L"tbcountry";
			this->tbcountry->ReadOnly = true;
			this->tbcountry->Size = System::Drawing::Size(177, 29);
			this->tbcountry->TabIndex = 109;
			// 
			// country
			// 
			this->country->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->country->AutoSize = true;
			this->country->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->country->Location = System::Drawing::Point(852, 433);
			this->country->Name = L"country";
			this->country->Size = System::Drawing::Size(97, 24);
			this->country->TabIndex = 108;
			this->country->Text = L"Country:";
			// 
			// tbeducation
			// 
			this->tbeducation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbeducation->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbeducation->Location = System::Drawing::Point(1029, 327);
			this->tbeducation->Name = L"tbeducation";
			this->tbeducation->ReadOnly = true;
			this->tbeducation->Size = System::Drawing::Size(177, 29);
			this->tbeducation->TabIndex = 107;
			// 
			// education
			// 
			this->education->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->education->AutoSize = true;
			this->education->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->education->Location = System::Drawing::Point(852, 330);
			this->education->Name = L"education";
			this->education->Size = System::Drawing::Size(119, 24);
			this->education->TabIndex = 106;
			this->education->Text = L"Education:";
			// 
			// phonenumber
			// 
			this->phonenumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->phonenumber->AutoSize = true;
			this->phonenumber->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phonenumber->Location = System::Drawing::Point(277, 493);
			this->phonenumber->Name = L"phonenumber";
			this->phonenumber->Size = System::Drawing::Size(167, 24);
			this->phonenumber->TabIndex = 105;
			this->phonenumber->Text = L"Phone Number:";
			// 
			// tbemail
			// 
			this->tbemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbemail->Location = System::Drawing::Point(539, 435);
			this->tbemail->Name = L"tbemail";
			this->tbemail->ReadOnly = true;
			this->tbemail->Size = System::Drawing::Size(177, 29);
			this->tbemail->TabIndex = 103;
			// 
			// email
			// 
			this->email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->email->AutoSize = true;
			this->email->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(277, 440);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(72, 24);
			this->email->TabIndex = 102;
			this->email->Text = L"Email:";
			// 
			// gender
			// 
			this->gender->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->gender->AutoSize = true;
			this->gender->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender->Location = System::Drawing::Point(277, 382);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(91, 24);
			this->gender->TabIndex = 101;
			this->gender->Text = L"Gender:";
			// 
			// tbl_name
			// 
			this->tbl_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbl_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbl_name->Location = System::Drawing::Point(539, 331);
			this->tbl_name->Multiline = true;
			this->tbl_name->Name = L"tbl_name";
			this->tbl_name->ReadOnly = true;
			this->tbl_name->Size = System::Drawing::Size(177, 26);
			this->tbl_name->TabIndex = 100;
			// 
			// lastname
			// 
			this->lastname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lastname->AutoSize = true;
			this->lastname->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastname->Location = System::Drawing::Point(277, 330);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(124, 24);
			this->lastname->TabIndex = 99;
			this->lastname->Text = L"Last Name:";
			// 
			// tbf_name
			// 
			this->tbf_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbf_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbf_name->Location = System::Drawing::Point(539, 283);
			this->tbf_name->Name = L"tbf_name";
			this->tbf_name->ReadOnly = true;
			this->tbf_name->Size = System::Drawing::Size(177, 29);
			this->tbf_name->TabIndex = 98;
			// 
			// firstname
			// 
			this->firstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->firstname->AutoSize = true;
			this->firstname->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstname->Location = System::Drawing::Point(277, 277);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(125, 24);
			this->firstname->TabIndex = 97;
			this->firstname->Text = L"First Name:";
			// 
			// tbgender
			// 
			this->tbgender->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbgender->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbgender->Location = System::Drawing::Point(538, 382);
			this->tbgender->Multiline = true;
			this->tbgender->Name = L"tbgender";
			this->tbgender->ReadOnly = true;
			this->tbgender->Size = System::Drawing::Size(177, 26);
			this->tbgender->TabIndex = 125;
			// 
			// tbphone
			// 
			this->tbphone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbphone->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbphone->Location = System::Drawing::Point(538, 488);
			this->tbphone->Name = L"tbphone";
			this->tbphone->ReadOnly = true;
			this->tbphone->Size = System::Drawing::Size(177, 29);
			this->tbphone->TabIndex = 126;
			// 
			// tbdepartment
			// 
			this->tbdepartment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbdepartment->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbdepartment->Location = System::Drawing::Point(538, 577);
			this->tbdepartment->Name = L"tbdepartment";
			this->tbdepartment->ReadOnly = true;
			this->tbdepartment->Size = System::Drawing::Size(177, 29);
			this->tbdepartment->TabIndex = 128;
			// 
			// tbposition
			// 
			this->tbposition->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbposition->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbposition->Location = System::Drawing::Point(538, 535);
			this->tbposition->Name = L"tbposition";
			this->tbposition->ReadOnly = true;
			this->tbposition->Size = System::Drawing::Size(177, 29);
			this->tbposition->TabIndex = 127;
			// 
			// tbcnic
			// 
			this->tbcnic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcnic->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbcnic->Location = System::Drawing::Point(1029, 282);
			this->tbcnic->Name = L"tbcnic";
			this->tbcnic->ReadOnly = true;
			this->tbcnic->Size = System::Drawing::Size(177, 29);
			this->tbcnic->TabIndex = 129;
			// 
			// tbjoindate
			// 
			this->tbjoindate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbjoindate->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbjoindate->Location = System::Drawing::Point(539, 622);
			this->tbjoindate->Name = L"tbjoindate";
			this->tbjoindate->ReadOnly = true;
			this->tbjoindate->Size = System::Drawing::Size(177, 29);
			this->tbjoindate->TabIndex = 131;
			this->tbjoindate->TextChanged += gcnew System::EventHandler(this, &ShowData::tbjoindate_TextChanged);
			// 
			// joindate
			// 
			this->joindate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->joindate->AutoSize = true;
			this->joindate->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->joindate->Location = System::Drawing::Point(278, 622);
			this->joindate->Name = L"joindate";
			this->joindate->Size = System::Drawing::Size(136, 24);
			this->joindate->TabIndex = 130;
			this->joindate->Text = L"Joining Date";
			// 
			// tbleave
			// 
			this->tbleave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbleave->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tbleave->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbleave->Location = System::Drawing::Point(1029, 622);
			this->tbleave->Name = L"tbleave";
			this->tbleave->ReadOnly = true;
			this->tbleave->Size = System::Drawing::Size(177, 29);
			this->tbleave->TabIndex = 133;
			// 
			// total
			// 
			this->total->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->total->Location = System::Drawing::Point(852, 625);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(126, 24);
			this->total->TabIndex = 132;
			this->total->Text = L"Total Leave";
			// 
			// ShowData
			// 
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1290, 741);
			this->Controls->Add(this->tbleave);
			this->Controls->Add(this->total);
			this->Controls->Add(this->tbjoindate);
			this->Controls->Add(this->joindate);
			this->Controls->Add(this->tbcnic);
			this->Controls->Add(this->tbdepartment);
			this->Controls->Add(this->tbposition);
			this->Controls->Add(this->tbphone);
			this->Controls->Add(this->tbgender);
			this->Controls->Add(this->tbsalary);
			this->Controls->Add(this->lsalary);
			this->Controls->Add(this->department);
			this->Controls->Add(this->position);
			this->Controls->Add(this->tbaddress);
			this->Controls->Add(this->address);
			this->Controls->Add(this->cnic);
			this->Controls->Add(this->tbpostal);
			this->Controls->Add(this->postalcode);
			this->Controls->Add(this->tbcity);
			this->Controls->Add(this->city);
			this->Controls->Add(this->tbcountry);
			this->Controls->Add(this->country);
			this->Controls->Add(this->tbeducation);
			this->Controls->Add(this->education);
			this->Controls->Add(this->phonenumber);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->email);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->tbl_name);
			this->Controls->Add(this->lastname);
			this->Controls->Add(this->tbf_name);
			this->Controls->Add(this->firstname);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->employeeid);
			this->Controls->Add(this->del);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"ShowData";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ShowData::AddData_Load_1);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddData_Load_1(System::Object^ sender, System::EventArgs^ e) {
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
			comboBox1->DataSource = table;
			comboBox1->DisplayMember = "Employee_ID";
		}

		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect to database: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void hom_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->Hide(); // Hide current form
		previousForm->Show(); // Show previous form

	}
	public:
		// Method to set the previous form
		void SetPreviousForm(Form^ form) {
			previousForm = form;
		}

	private: System::Void showdata_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void tbf_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbl_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbgender_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ employeeID = comboBox1->Text;
			try {
				String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "SELECT E.First_Name,E.Last_Name,E.Gender, E.Phone_Number,E.Email, E.Education, E.CNIC, A.Country, A.Address, A.Postal_Code,A.City, COALESCE(J.Position,''), COALESCE(D.Department_Name,''),COALESCE(J.Joining_Date,''),COALESCE(S.Salary,0) AS SALARY, (SELECT COALESCE(SUM(Total_Leave),0) FROM Leave WHERE Employee_ID = E.Employee_ID) AS Total_Leave_Days FROM Employee E INNER JOIN Address A ON E.Employee_ID = A.Employee_ID LEFT JOIN Job J ON E.Employee_ID = J.Employee_ID LEFT JOIN Department D ON E.Employee_ID = D.Employee_ID LEFT JOIN Salary S ON E.Employee_ID = S.Employee_ID LEFT JOIN Leave L ON E.Employee_ID = L.Employee_ID WHERE E.Employee_ID = @employeeID;";				
				SqlCommand command(sqlQuery, % sqlConn);

				command.Parameters->AddWithValue("@employeeID", employeeID);
				SqlDataReader^ reader = command.ExecuteReader();
				String^ check = nullptr;
				while (reader->Read()) {
					tbf_name->Text = reader->GetString(0);
					tbl_name->Text = reader->GetString(1);
					tbgender->Text = reader->GetString(2);
					tbemail->Text = reader->GetString(4);
					tbphone->Text = reader->GetString(3);
					tbcnic->Text = reader->GetString(6);
					tbeducation->Text = reader->GetString(5);
					tbaddress->Text = reader->GetString(8);
					tbcountry->Text = reader->GetString(7);
					tbcity->Text = reader->GetString(10);
					tbpostal->Text = reader->GetString(9);
					tbdepartment->Text = reader->GetString(12);
					tbposition->Text = reader->GetString(11);
					tbjoindate->Text = reader->GetDateTime(13).ToString("dd-MM-yyyy");
					tbsalary->Text = reader->GetDecimal(14).ToString("");
					tbleave->Text = reader->GetInt32(15).ToString("");
					check = "1";
				}
				if (check == nullptr) {
					// No data found in the database
					MessageBox::Show("No data found for the given employee ID.", "Data Not Found", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					// Optionally, display a success message
					MessageBox::Show("Data  retrieved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

				}
				sqlConn.Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK);
			}
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gender_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbjoindate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
