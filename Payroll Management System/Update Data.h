
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
	public ref class UpdateData : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
	public:

		UpdateData(void)
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
		~UpdateData()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ home;
	private: System::Windows::Forms::Button^ update;




	private: System::Windows::Forms::Label^ cnic;
	private: System::Windows::Forms::MaskedTextBox^ tbcnic;
	private: System::Windows::Forms::TextBox^ tbpostal;



	private: System::Windows::Forms::Label^ postalcode;
	private: System::Windows::Forms::TextBox^ tbcity;


	private: System::Windows::Forms::Label^ city;
	private: System::Windows::Forms::TextBox^ tbcountry;


	private: System::Windows::Forms::Label^ country;
	private: System::Windows::Forms::TextBox^ tbeducation;


	private: System::Windows::Forms::Label^ education;

	private: System::Windows::Forms::Label^ phonenumber;
	private: System::Windows::Forms::MaskedTextBox^ tbphone;



	private: System::Windows::Forms::TextBox^ tbemail;

	private: System::Windows::Forms::Label^ email;



	private: System::Windows::Forms::Label^ gender;
	private: System::Windows::Forms::TextBox^ tbl_name;


	private: System::Windows::Forms::Label^ lastname;
	private: System::Windows::Forms::TextBox^ tbf_name;



	private: System::Windows::Forms::Label^ firstname;
	private: System::Windows::Forms::Label^ employeeid;

	private: System::Windows::Forms::TextBox^ tbaddress;
	private: System::Windows::Forms::Label^ address;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ showdata;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ tbgender;


	private: System::Windows::Forms::ComboBox^ tbdepartment;
	private: System::Windows::Forms::Label^ department;
	private: System::Windows::Forms::ComboBox^ tbposition;
	private: System::Windows::Forms::Label^ position;
	private: System::Windows::Forms::TextBox^ tbsalary;
	private: System::Windows::Forms::Label^ lsalary;















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
			this->update = (gcnew System::Windows::Forms::Button());
			this->cnic = (gcnew System::Windows::Forms::Label());
			this->tbcnic = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbpostal = (gcnew System::Windows::Forms::TextBox());
			this->postalcode = (gcnew System::Windows::Forms::Label());
			this->tbcity = (gcnew System::Windows::Forms::TextBox());
			this->city = (gcnew System::Windows::Forms::Label());
			this->tbcountry = (gcnew System::Windows::Forms::TextBox());
			this->country = (gcnew System::Windows::Forms::Label());
			this->tbeducation = (gcnew System::Windows::Forms::TextBox());
			this->education = (gcnew System::Windows::Forms::Label());
			this->phonenumber = (gcnew System::Windows::Forms::Label());
			this->tbphone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::Label());
			this->tbl_name = (gcnew System::Windows::Forms::TextBox());
			this->lastname = (gcnew System::Windows::Forms::Label());
			this->tbf_name = (gcnew System::Windows::Forms::TextBox());
			this->firstname = (gcnew System::Windows::Forms::Label());
			this->employeeid = (gcnew System::Windows::Forms::Label());
			this->tbaddress = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->showdata = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tbgender = (gcnew System::Windows::Forms::ComboBox());
			this->tbdepartment = (gcnew System::Windows::Forms::ComboBox());
			this->department = (gcnew System::Windows::Forms::Label());
			this->tbposition = (gcnew System::Windows::Forms::ComboBox());
			this->position = (gcnew System::Windows::Forms::Label());
			this->tbsalary = (gcnew System::Windows::Forms::TextBox());
			this->lsalary = (gcnew System::Windows::Forms::Label());
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
			this->panel3->Size = System::Drawing::Size(200, 649);
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
			this->home->Click += gcnew System::EventHandler(this, &UpdateData::hom_Click);
			// 
			// update
			// 
			this->update->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->update->BackColor = System::Drawing::Color::DarkCyan;
			this->update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->update->FlatAppearance->BorderSize = 0;
			this->update->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->update->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->update->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::Color::White;
			this->update->Location = System::Drawing::Point(739, 626);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(91, 33);
			this->update->TabIndex = 45;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = false;
			this->update->Click += gcnew System::EventHandler(this, &UpdateData::update_Click);
			// 
			// cnic
			// 
			this->cnic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->cnic->AutoSize = true;
			this->cnic->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnic->Location = System::Drawing::Point(826, 306);
			this->cnic->Name = L"cnic";
			this->cnic->Size = System::Drawing::Size(105, 24);
			this->cnic->TabIndex = 44;
			this->cnic->Text = L"CNIC No.:";
			// 
			// tbcnic
			// 
			this->tbcnic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcnic->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbcnic->Location = System::Drawing::Point(1017, 306);
			this->tbcnic->Mask = L"00000-0000000-0";
			this->tbcnic->Name = L"tbcnic";
			this->tbcnic->Size = System::Drawing::Size(177, 29);
			this->tbcnic->TabIndex = 43;
			// 
			// tbpostal
			// 
			this->tbpostal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbpostal->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbpostal->Location = System::Drawing::Point(1017, 502);
			this->tbpostal->Name = L"tbpostal";
			this->tbpostal->Size = System::Drawing::Size(177, 29);
			this->tbpostal->TabIndex = 42;
			// 
			// postalcode
			// 
			this->postalcode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->postalcode->AutoSize = true;
			this->postalcode->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->postalcode->Location = System::Drawing::Point(826, 508);
			this->postalcode->Name = L"postalcode";
			this->postalcode->Size = System::Drawing::Size(139, 24);
			this->postalcode->TabIndex = 41;
			this->postalcode->Text = L"Postal Code:";
			// 
			// tbcity
			// 
			this->tbcity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcity->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbcity->Location = System::Drawing::Point(1017, 464);
			this->tbcity->Name = L"tbcity";
			this->tbcity->Size = System::Drawing::Size(177, 29);
			this->tbcity->TabIndex = 40;
			// 
			// city
			// 
			this->city->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->city->AutoSize = true;
			this->city->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->city->Location = System::Drawing::Point(826, 467);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(55, 24);
			this->city->TabIndex = 39;
			this->city->Text = L"City:";
			// 
			// tbcountry
			// 
			this->tbcountry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcountry->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbcountry->Location = System::Drawing::Point(1017, 427);
			this->tbcountry->Multiline = true;
			this->tbcountry->Name = L"tbcountry";
			this->tbcountry->Size = System::Drawing::Size(177, 29);
			this->tbcountry->TabIndex = 38;
			// 
			// country
			// 
			this->country->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->country->AutoSize = true;
			this->country->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->country->Location = System::Drawing::Point(826, 423);
			this->country->Name = L"country";
			this->country->Size = System::Drawing::Size(97, 24);
			this->country->TabIndex = 37;
			this->country->Text = L"Country:";
			// 
			// tbeducation
			// 
			this->tbeducation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbeducation->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbeducation->Location = System::Drawing::Point(1017, 345);
			this->tbeducation->Name = L"tbeducation";
			this->tbeducation->Size = System::Drawing::Size(177, 29);
			this->tbeducation->TabIndex = 36;
			// 
			// education
			// 
			this->education->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->education->AutoSize = true;
			this->education->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->education->Location = System::Drawing::Point(826, 348);
			this->education->Name = L"education";
			this->education->Size = System::Drawing::Size(119, 24);
			this->education->TabIndex = 35;
			this->education->Text = L"Education:";
			// 
			// phonenumber
			// 
			this->phonenumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->phonenumber->AutoSize = true;
			this->phonenumber->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phonenumber->Location = System::Drawing::Point(324, 467);
			this->phonenumber->Name = L"phonenumber";
			this->phonenumber->Size = System::Drawing::Size(167, 24);
			this->phonenumber->TabIndex = 34;
			this->phonenumber->Text = L"Phone Number:";
			// 
			// tbphone
			// 
			this->tbphone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbphone->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbphone->Location = System::Drawing::Point(560, 464);
			this->tbphone->Mask = L"0000-0000000";
			this->tbphone->Name = L"tbphone";
			this->tbphone->Size = System::Drawing::Size(177, 29);
			this->tbphone->TabIndex = 33;
			// 
			// tbemail
			// 
			this->tbemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbemail->Location = System::Drawing::Point(560, 425);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(177, 29);
			this->tbemail->TabIndex = 32;
			// 
			// email
			// 
			this->email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->email->AutoSize = true;
			this->email->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(324, 430);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(72, 24);
			this->email->TabIndex = 31;
			this->email->Text = L"Email:";
			// 
			// gender
			// 
			this->gender->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->gender->AutoSize = true;
			this->gender->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender->Location = System::Drawing::Point(324, 389);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(91, 24);
			this->gender->TabIndex = 29;
			this->gender->Text = L"Gender:";
			// 
			// tbl_name
			// 
			this->tbl_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbl_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbl_name->Location = System::Drawing::Point(560, 349);
			this->tbl_name->Multiline = true;
			this->tbl_name->Name = L"tbl_name";
			this->tbl_name->Size = System::Drawing::Size(177, 26);
			this->tbl_name->TabIndex = 28;
			// 
			// lastname
			// 
			this->lastname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lastname->AutoSize = true;
			this->lastname->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastname->Location = System::Drawing::Point(324, 348);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(124, 24);
			this->lastname->TabIndex = 27;
			this->lastname->Text = L"Last Name:";
			// 
			// tbf_name
			// 
			this->tbf_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbf_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbf_name->Location = System::Drawing::Point(560, 307);
			this->tbf_name->Name = L"tbf_name";
			this->tbf_name->Size = System::Drawing::Size(177, 29);
			this->tbf_name->TabIndex = 26;
			// 
			// firstname
			// 
			this->firstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->firstname->AutoSize = true;
			this->firstname->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstname->Location = System::Drawing::Point(325, 309);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(125, 24);
			this->firstname->TabIndex = 25;
			this->firstname->Text = L"First Name:";
			this->firstname->Click += gcnew System::EventHandler(this, &UpdateData::firstname_Click);
			// 
			// employeeid
			// 
			this->employeeid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->employeeid->AutoSize = true;
			this->employeeid->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeid->Location = System::Drawing::Point(508, 204);
			this->employeeid->Name = L"employeeid";
			this->employeeid->Size = System::Drawing::Size(133, 24);
			this->employeeid->TabIndex = 50;
			this->employeeid->Text = L"Employee id";
			// 
			// tbaddress
			// 
			this->tbaddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbaddress->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbaddress->Location = System::Drawing::Point(1017, 384);
			this->tbaddress->Multiline = true;
			this->tbaddress->Name = L"tbaddress";
			this->tbaddress->Size = System::Drawing::Size(177, 31);
			this->tbaddress->TabIndex = 52;
			// 
			// address
			// 
			this->address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->address->AutoSize = true;
			this->address->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->Location = System::Drawing::Point(826, 387);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(102, 24);
			this->address->TabIndex = 51;
			this->address->Text = L"Address:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(484, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(490, 57);
			this->label2->TabIndex = 53;
			this->label2->Text = L"UPDATE EMPLOYEE INFORMATION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// showdata
			// 
			this->showdata->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->showdata->BackColor = System::Drawing::Color::DarkCyan;
			this->showdata->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showdata->FlatAppearance->BorderSize = 0;
			this->showdata->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->showdata->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->showdata->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->showdata->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showdata->ForeColor = System::Drawing::Color::White;
			this->showdata->Location = System::Drawing::Point(914, 197);
			this->showdata->Name = L"showdata";
			this->showdata->Size = System::Drawing::Size(129, 31);
			this->showdata->TabIndex = 54;
			this->showdata->Text = L"Show Data";
			this->showdata->UseVisualStyleBackColor = false;
			this->showdata->Click += gcnew System::EventHandler(this, &UpdateData::showdata_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->comboBox1->Location = System::Drawing::Point(704, 197);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 31);
			this->comboBox1->TabIndex = 67;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UpdateData::comboBox1_SelectedIndexChanged);
			// 
			// tbgender
			// 
			this->tbgender->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbgender->BackColor = System::Drawing::SystemColors::Window;
			this->tbgender->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbgender->ForeColor = System::Drawing::Color::Black;
			this->tbgender->FormattingEnabled = true;
			this->tbgender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Other" });
			this->tbgender->Location = System::Drawing::Point(560, 387);
			this->tbgender->Name = L"tbgender";
			this->tbgender->Size = System::Drawing::Size(177, 31);
			this->tbgender->TabIndex = 68;
			this->tbgender->SelectedIndexChanged += gcnew System::EventHandler(this, &UpdateData::tbgender_SelectedIndexChanged);
			// 
			// tbdepartment
			// 
			this->tbdepartment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbdepartment->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbdepartment->FormattingEnabled = true;
			this->tbdepartment->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Administrative", L"Account department", L"Computers and information technology",
					L"Customer service", L"Human Resources", L"Marketing", L"Research and development"
			});
			this->tbdepartment->Location = System::Drawing::Point(560, 543);
			this->tbdepartment->Name = L"tbdepartment";
			this->tbdepartment->Size = System::Drawing::Size(177, 31);
			this->tbdepartment->TabIndex = 83;
			// 
			// department
			// 
			this->department->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->department->AutoSize = true;
			this->department->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->department->Location = System::Drawing::Point(324, 546);
			this->department->Name = L"department";
			this->department->Size = System::Drawing::Size(233, 24);
			this->department->TabIndex = 82;
			this->department->Text = L"Employee Department";
			// 
			// tbposition
			// 
			this->tbposition->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbposition->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbposition->FormattingEnabled = true;
			this->tbposition->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Board member", L"CEO", L"Department Head", L"Department Specialist",
					L"Executive Assistant", L"Intern", L"Junior Staffer", L"Senior Staffer", L"Team Leader"
			});
			this->tbposition->Location = System::Drawing::Point(560, 501);
			this->tbposition->Name = L"tbposition";
			this->tbposition->Size = System::Drawing::Size(177, 31);
			this->tbposition->TabIndex = 81;
			// 
			// position
			// 
			this->position->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->position->AutoSize = true;
			this->position->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->position->Location = System::Drawing::Point(324, 508);
			this->position->Name = L"position";
			this->position->Size = System::Drawing::Size(197, 24);
			this->position->TabIndex = 80;
			this->position->Text = L"Employee Position";
			// 
			// tbsalary
			// 
			this->tbsalary->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbsalary->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbsalary->Location = System::Drawing::Point(1017, 543);
			this->tbsalary->Name = L"tbsalary";
			this->tbsalary->Size = System::Drawing::Size(177, 29);
			this->tbsalary->TabIndex = 96;
			this->tbsalary->TextChanged += gcnew System::EventHandler(this, &UpdateData::tbsalary_TextChanged);
			// 
			// lsalary
			// 
			this->lsalary->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lsalary->AutoSize = true;
			this->lsalary->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->lsalary->Location = System::Drawing::Point(826, 546);
			this->lsalary->Name = L"lsalary";
			this->lsalary->Size = System::Drawing::Size(72, 24);
			this->lsalary->TabIndex = 95;
			this->lsalary->Text = L"Salary";
			// 
			// UpdateData
			// 
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1290, 749);
			this->Controls->Add(this->tbsalary);
			this->Controls->Add(this->lsalary);
			this->Controls->Add(this->tbdepartment);
			this->Controls->Add(this->department);
			this->Controls->Add(this->tbposition);
			this->Controls->Add(this->position);
			this->Controls->Add(this->tbgender);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->showdata);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbaddress);
			this->Controls->Add(this->address);
			this->Controls->Add(this->employeeid);
			this->Controls->Add(this->update);
			this->Controls->Add(this->cnic);
			this->Controls->Add(this->tbcnic);
			this->Controls->Add(this->tbpostal);
			this->Controls->Add(this->postalcode);
			this->Controls->Add(this->tbcity);
			this->Controls->Add(this->city);
			this->Controls->Add(this->tbcountry);
			this->Controls->Add(this->country);
			this->Controls->Add(this->tbeducation);
			this->Controls->Add(this->education);
			this->Controls->Add(this->phonenumber);
			this->Controls->Add(this->tbphone);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->email);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->tbl_name);
			this->Controls->Add(this->lastname);
			this->Controls->Add(this->tbf_name);
			this->Controls->Add(this->firstname);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"UpdateData";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &UpdateData::AddData_Load_1);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddData_Load_1(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			String^ sqlQuery = "SELECT Employee_ID FROM Employee;";

			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

			SqlDataReader^ reader = command->ExecuteReader();
			DataTable^ table = gcnew DataTable();
			table->Load(reader); // Load data directly into DataTable
			comboBox1->DataSource = table;
			comboBox1->DisplayMember = "Employee_ID";

			reader->Close(); // Close the SqlDataReader

			sqlConn->Close();
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
	String^ employeeID = comboBox1->Text;
	try {
		String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		String^ sqlQuery = "SELECT E.First_Name,E.Last_Name,E.Gender, E.Phone_Number,E.Email, E.Education, E.CNIC, A.Country, A.Address, A.Postal_Code,A.City, COALESCE(J.Position,''), COALESCE(D.Department_Name,''),COALESCE(S.Salary,0) FROM Employee E INNER JOIN Address A ON E.Employee_ID = A.Employee_ID LEFT JOIN Job J ON E.Employee_ID = J.Employee_ID LEFT JOIN Department D ON E.Employee_ID = D.Employee_ID LEFT JOIN Salary S ON E.Employee_ID = S.Employee_ID WHERE E.Employee_ID = @employeeID;";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

		command->Parameters->AddWithValue("@employeeID", employeeID);
		SqlDataReader^ reader = command->ExecuteReader();
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
			tbposition->Text = reader->GetString(11);
			tbdepartment->Text = reader->GetString(12);
			tbsalary->Text = reader->GetDecimal(13).ToString("");
			check = "1";
		}
		reader->Close(); // Close the SqlDataReader

		if (check == nullptr) {
			// No data found in the database
			MessageBox::Show("No data found for the given employee ID.", "Data Not Found", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			// Optionally, display a success message
			MessageBox::Show("Data retrieved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		sqlConn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ firstName = tbf_name->Text;
	String^ lastName = tbl_name->Text;
	String^ gender = tbgender->Text;
	String^ email = tbemail->Text;
	String^ phone = tbphone->Text;
	String^ cnic = tbcnic->Text;
	String^ country = tbcountry->Text;
	String^ address = tbaddress->Text;
	String^ postal = tbpostal->Text;
	String^ employeeID = comboBox1->Text;
	String^ city = tbcity->Text;
	String^ education = tbeducation->Text;
	String^ position = tbposition->Text;
	String^ department = tbdepartment->Text;
	String^ salary = tbsalary->Text;

	//Let’s check if any of 2 fields are empty
	if (salary->Length == 0 || firstName->Length == 0 || lastName->Length == 0 || gender->Length == 0 || email->Length == 0 || phone->Length == 0 || education->Length == 0 || cnic->Length == 0 || country->Length == 0 || address->Length == 0 || postal->Length == 0 || city->Length == 0 ) {
		MessageBox::Show("Please Fill All Fields", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	String^ sqlUpdateEmployeeQuery = "UPDATE Employee "
		"SET First_Name = @firstName, Last_Name = @lastName, "
		"Gender = @gender, Phone_Number = @phone, "
		"Email = @email, Education = @education, "
		"CNIC = @cnic "
		"WHERE Employee_ID = @employeeID;";

	String^ sqlUpdateAddressQuery = "UPDATE Address "
		"SET Country = @country, Address = @address, "
		"Postal_Code = @postal, City = @city "
		"WHERE Employee_ID = @employeeID;";

	String^ updateJobQuery = "UPDATE Job SET Position = @position, Joining_Date = @joinDate WHERE Employee_ID = @employeeID;";
	
	String^ updateDepartmentQuery = "UPDATE Department SET Department_Name = @department WHERE Employee_ID = @employeeID;"; 

	String^ fetchJoinDateQuery = "SELECT Joining_Date FROM Job WHERE Employee_ID = @employeeID;";

	String^ updateSalaryQuery = "UPDATE Salary SET Salary=@salary WHERE Employee_ID = @employeeID;";
	//String^ fetchPositionQuery = "SELECT Position FROM Job WHERE Employee_ID = @employeeID;";
	
	try {
		// Open SQL connection and begin transaction
		String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();
		SqlTransaction^ transaction = sqlConn->BeginTransaction();

		try {
			// Execute update query for Employee table
			SqlCommand^ cmdUpdateEmployee = gcnew SqlCommand(sqlUpdateEmployeeQuery, sqlConn, transaction);
			cmdUpdateEmployee->Parameters->AddWithValue("@firstName", firstName);
			cmdUpdateEmployee->Parameters->AddWithValue("@lastName", lastName);
			cmdUpdateEmployee->Parameters->AddWithValue("@gender", gender);
			cmdUpdateEmployee->Parameters->AddWithValue("@phone", phone);
			cmdUpdateEmployee->Parameters->AddWithValue("@email", email);
			cmdUpdateEmployee->Parameters->AddWithValue("@education", education);
			cmdUpdateEmployee->Parameters->AddWithValue("@cnic", cnic);
			cmdUpdateEmployee->Parameters->AddWithValue("@employeeID", employeeID);
			cmdUpdateEmployee->ExecuteNonQuery();

			// Execute update query for Address table
			SqlCommand^ cmdUpdateAddress = gcnew SqlCommand(sqlUpdateAddressQuery, sqlConn, transaction);
			cmdUpdateAddress->Parameters->AddWithValue("@country", country);
			cmdUpdateAddress->Parameters->AddWithValue("@address", address);
			cmdUpdateAddress->Parameters->AddWithValue("@postal", postal);
			cmdUpdateAddress->Parameters->AddWithValue("@city", city);
			cmdUpdateAddress->Parameters->AddWithValue("@employeeID", employeeID);
			cmdUpdateAddress->ExecuteNonQuery();

			// Execute update query for Depatment table
			SqlCommand^ cmdUpdateDepartment = gcnew SqlCommand(updateDepartmentQuery, sqlConn, transaction);
			cmdUpdateDepartment->Parameters->AddWithValue("@department", department);
			cmdUpdateDepartment->Parameters->AddWithValue("@employeeID", employeeID);
			cmdUpdateDepartment->ExecuteNonQuery();

			SqlCommand^ cmdFetchJoinDate = gcnew SqlCommand(fetchJoinDateQuery, sqlConn, transaction);
			cmdFetchJoinDate->Parameters->AddWithValue("@employeeID", employeeID);
			
			SqlDataReader^ reader = cmdFetchJoinDate->ExecuteReader();
			DateTime^ joiningDate = nullptr;
			if (reader->Read()) {
				joiningDate = reader->GetDateTime(0); // Assuming Joining_Date is the first column
			}
			reader->Close();

			// Execute update query for Job table
			SqlCommand^ cmdUpdateJob = gcnew SqlCommand(updateJobQuery, sqlConn, transaction);
			cmdUpdateJob->Parameters->AddWithValue("@position", position);
			cmdUpdateJob->Parameters->AddWithValue("@joinDate", joiningDate); // Add joining date parameter
			cmdUpdateJob->Parameters->AddWithValue("@employeeID", employeeID);
			cmdUpdateJob->ExecuteNonQuery();

			//SqlCommand^ cmdFetchPosition = gcnew SqlCommand(fetchPositionQuery, sqlConn, transaction);
			//cmdFetchPosition->Parameters->AddWithValue("@employeeID", employeeID);

			/*SqlDataReader^ reader1 = cmdFetchPosition->ExecuteReader();
			String^ position1 = nullptr;

			if (reader1->Read()) {
				position1 = reader1->GetString(0); // Assuming Position is the first column
			}

			reader1->Close();*/

			// Execute update query for Salary table
			SqlCommand^ cmdUpdateSalary = gcnew SqlCommand(updateSalaryQuery, sqlConn, transaction);
			cmdUpdateSalary->Parameters->AddWithValue("@position", position);
			cmdUpdateSalary->Parameters->AddWithValue("@salary", salary); 
			cmdUpdateSalary->Parameters->AddWithValue("@employeeID", employeeID);
			cmdUpdateSalary->ExecuteNonQuery();


			// Commit transaction if all updates succeed
			transaction->Commit();

			MessageBox::Show("Record updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tbf_name->Text = "";
			tbl_name->Text = "";
			tbgender->DisplayMember = "";
			tbemail->Text = "";
			tbphone->Text = "";
			tbcnic->Text = "";
			tbcountry->Text = "";
			tbaddress->Text = "";
			tbpostal->Text = "";
			tbcity->Text = "";
			tbeducation->Text = "";
			tbposition->Text = "";
			tbdepartment->Text = "";
			tbsalary->Text = "";
		}
		catch (Exception^ ex) {
			// Rollback transaction if there's an error
			transaction->Rollback();
			throw ex;
		}
		finally {
			// Close SQL connection
			sqlConn->Close();
		}
	}
	catch (Exception^ ex) {
		// Handle exception
		MessageBox::Show("Error1 : " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbgender_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbsalary_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbleavedatefrom_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void firstname_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
