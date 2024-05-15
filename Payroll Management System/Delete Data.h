
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
	public ref class DeleteData : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
	public:

		DeleteData(void)
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
		~DeleteData()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ home;
	private: System::Windows::Forms::Button^ del;





	private: System::Windows::Forms::Label^ cnic;





	private: System::Windows::Forms::Label^ postalcode;



	private: System::Windows::Forms::Label^ city;



	private: System::Windows::Forms::Label^ country;



	private: System::Windows::Forms::Label^ education;

	private: System::Windows::Forms::Label^ phonenumber;






	private: System::Windows::Forms::Label^ email;



	private: System::Windows::Forms::Label^ gender;



	private: System::Windows::Forms::Label^ lastname;




	private: System::Windows::Forms::Label^ firstname;
	private: System::Windows::Forms::Label^ employeeid;


	private: System::Windows::Forms::Label^ address;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ showdata;
	private: System::Windows::Forms::Label^ tbaddress;

	private: System::Windows::Forms::Label^ tbcnic;
	private: System::Windows::Forms::Label^ tbpostal;


	private: System::Windows::Forms::Label^ tbcity;

	private: System::Windows::Forms::Label^ tbcountry;

	private: System::Windows::Forms::Label^ tbeducation;

	private: System::Windows::Forms::Label^ tbphone;

	private: System::Windows::Forms::Label^ tbemail;
	private: System::Windows::Forms::Label^ tbgender;
	private: System::Windows::Forms::Label^ tbl_name;
	private: System::Windows::Forms::Label^ tbf_name;
	private: System::Windows::Forms::ComboBox^ tbemployeeid;
private: System::Windows::Forms::Label^ tbjoindate;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ tbposition;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ tbdepartment;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ tbsalary;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ total;
private: System::Windows::Forms::Label^ tbleave;





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
			this->del = (gcnew System::Windows::Forms::Button());
			this->cnic = (gcnew System::Windows::Forms::Label());
			this->postalcode = (gcnew System::Windows::Forms::Label());
			this->city = (gcnew System::Windows::Forms::Label());
			this->country = (gcnew System::Windows::Forms::Label());
			this->education = (gcnew System::Windows::Forms::Label());
			this->phonenumber = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::Label());
			this->lastname = (gcnew System::Windows::Forms::Label());
			this->firstname = (gcnew System::Windows::Forms::Label());
			this->employeeid = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->showdata = (gcnew System::Windows::Forms::Button());
			this->tbaddress = (gcnew System::Windows::Forms::Label());
			this->tbcnic = (gcnew System::Windows::Forms::Label());
			this->tbpostal = (gcnew System::Windows::Forms::Label());
			this->tbcity = (gcnew System::Windows::Forms::Label());
			this->tbcountry = (gcnew System::Windows::Forms::Label());
			this->tbeducation = (gcnew System::Windows::Forms::Label());
			this->tbphone = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::Label());
			this->tbgender = (gcnew System::Windows::Forms::Label());
			this->tbl_name = (gcnew System::Windows::Forms::Label());
			this->tbf_name = (gcnew System::Windows::Forms::Label());
			this->tbemployeeid = (gcnew System::Windows::Forms::ComboBox());
			this->tbjoindate = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbposition = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbdepartment = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbsalary = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->total = (gcnew System::Windows::Forms::Label());
			this->tbleave = (gcnew System::Windows::Forms::Label());
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
			this->home->Click += gcnew System::EventHandler(this, &DeleteData::hom_Click);
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
			this->del->Location = System::Drawing::Point(685, 684);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(91, 33);
			this->del->TabIndex = 45;
			this->del->Text = L"Delete";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &DeleteData::del_Click);
			// 
			// cnic
			// 
			this->cnic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->cnic->AutoSize = true;
			this->cnic->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnic->Location = System::Drawing::Point(834, 280);
			this->cnic->Name = L"cnic";
			this->cnic->Size = System::Drawing::Size(105, 24);
			this->cnic->TabIndex = 44;
			this->cnic->Text = L"CNIC No.:";
			// 
			// postalcode
			// 
			this->postalcode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->postalcode->AutoSize = true;
			this->postalcode->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->postalcode->Location = System::Drawing::Point(834, 541);
			this->postalcode->Name = L"postalcode";
			this->postalcode->Size = System::Drawing::Size(139, 24);
			this->postalcode->TabIndex = 41;
			this->postalcode->Text = L"Postal Code:";
			this->postalcode->Click += gcnew System::EventHandler(this, &DeleteData::postalcode_Click);
			// 
			// city
			// 
			this->city->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->city->AutoSize = true;
			this->city->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->city->Location = System::Drawing::Point(834, 496);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(55, 24);
			this->city->TabIndex = 39;
			this->city->Text = L"City:";
			// 
			// country
			// 
			this->country->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->country->AutoSize = true;
			this->country->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->country->Location = System::Drawing::Point(834, 443);
			this->country->Name = L"country";
			this->country->Size = System::Drawing::Size(97, 24);
			this->country->TabIndex = 37;
			this->country->Text = L"Country:";
			// 
			// education
			// 
			this->education->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->education->AutoSize = true;
			this->education->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->education->Location = System::Drawing::Point(834, 333);
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
			this->phonenumber->Location = System::Drawing::Point(324, 493);
			this->phonenumber->Name = L"phonenumber";
			this->phonenumber->Size = System::Drawing::Size(167, 24);
			this->phonenumber->TabIndex = 34;
			this->phonenumber->Text = L"Phone Number:";
			// 
			// email
			// 
			this->email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->email->AutoSize = true;
			this->email->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(324, 440);
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
			this->gender->Location = System::Drawing::Point(324, 382);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(91, 24);
			this->gender->TabIndex = 29;
			this->gender->Text = L"Gender:";
			// 
			// lastname
			// 
			this->lastname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lastname->AutoSize = true;
			this->lastname->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastname->Location = System::Drawing::Point(324, 330);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(124, 24);
			this->lastname->TabIndex = 27;
			this->lastname->Text = L"Last Name:";
			// 
			// firstname
			// 
			this->firstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->firstname->AutoSize = true;
			this->firstname->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstname->Location = System::Drawing::Point(324, 277);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(125, 24);
			this->firstname->TabIndex = 25;
			this->firstname->Text = L"First Name:";
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
			// address
			// 
			this->address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->address->AutoSize = true;
			this->address->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->Location = System::Drawing::Point(834, 385);
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
			this->label2->Location = System::Drawing::Point(484, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(490, 57);
			this->label2->TabIndex = 53;
			this->label2->Text = L"DELETE EMPLOYEE INFORMATION";
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
			this->showdata->Location = System::Drawing::Point(916, 197);
			this->showdata->Name = L"showdata";
			this->showdata->Size = System::Drawing::Size(129, 31);
			this->showdata->TabIndex = 54;
			this->showdata->Text = L"Show Data";
			this->showdata->UseVisualStyleBackColor = false;
			this->showdata->Click += gcnew System::EventHandler(this, &DeleteData::showdata_Click);
			// 
			// tbaddress
			// 
			this->tbaddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbaddress->AutoSize = true;
			this->tbaddress->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->tbaddress->Location = System::Drawing::Point(1015, 386);
			this->tbaddress->Name = L"tbaddress";
			this->tbaddress->Size = System::Drawing::Size(0, 20);
			this->tbaddress->TabIndex = 65;
			// 
			// tbcnic
			// 
			this->tbcnic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcnic->AutoSize = true;
			this->tbcnic->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->tbcnic->Location = System::Drawing::Point(1015, 281);
			this->tbcnic->Name = L"tbcnic";
			this->tbcnic->Size = System::Drawing::Size(0, 20);
			this->tbcnic->TabIndex = 64;
			// 
			// tbpostal
			// 
			this->tbpostal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbpostal->AutoSize = true;
			this->tbpostal->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->tbpostal->Location = System::Drawing::Point(1015, 542);
			this->tbpostal->Name = L"tbpostal";
			this->tbpostal->Size = System::Drawing::Size(0, 20);
			this->tbpostal->TabIndex = 63;
			// 
			// tbcity
			// 
			this->tbcity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcity->AutoSize = true;
			this->tbcity->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->tbcity->Location = System::Drawing::Point(1015, 497);
			this->tbcity->Name = L"tbcity";
			this->tbcity->Size = System::Drawing::Size(0, 20);
			this->tbcity->TabIndex = 62;
			// 
			// tbcountry
			// 
			this->tbcountry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcountry->AutoSize = true;
			this->tbcountry->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->tbcountry->Location = System::Drawing::Point(1015, 444);
			this->tbcountry->Name = L"tbcountry";
			this->tbcountry->Size = System::Drawing::Size(0, 20);
			this->tbcountry->TabIndex = 61;
			// 
			// tbeducation
			// 
			this->tbeducation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbeducation->AutoSize = true;
			this->tbeducation->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->tbeducation->Location = System::Drawing::Point(1015, 334);
			this->tbeducation->Name = L"tbeducation";
			this->tbeducation->Size = System::Drawing::Size(0, 20);
			this->tbeducation->TabIndex = 60;
			// 
			// tbphone
			// 
			this->tbphone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbphone->AutoSize = true;
			this->tbphone->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbphone->Location = System::Drawing::Point(581, 496);
			this->tbphone->Name = L"tbphone";
			this->tbphone->Size = System::Drawing::Size(0, 20);
			this->tbphone->TabIndex = 59;
			// 
			// tbemail
			// 
			this->tbemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbemail->AutoSize = true;
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbemail->Location = System::Drawing::Point(581, 443);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(0, 20);
			this->tbemail->TabIndex = 58;
			// 
			// tbgender
			// 
			this->tbgender->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbgender->AutoSize = true;
			this->tbgender->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbgender->Location = System::Drawing::Point(581, 385);
			this->tbgender->Name = L"tbgender";
			this->tbgender->Size = System::Drawing::Size(0, 20);
			this->tbgender->TabIndex = 57;
			// 
			// tbl_name
			// 
			this->tbl_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbl_name->AutoSize = true;
			this->tbl_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbl_name->Location = System::Drawing::Point(581, 333);
			this->tbl_name->Name = L"tbl_name";
			this->tbl_name->Size = System::Drawing::Size(0, 20);
			this->tbl_name->TabIndex = 56;
			// 
			// tbf_name
			// 
			this->tbf_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbf_name->AutoSize = true;
			this->tbf_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbf_name->Location = System::Drawing::Point(581, 280);
			this->tbf_name->Name = L"tbf_name";
			this->tbf_name->Size = System::Drawing::Size(0, 20);
			this->tbf_name->TabIndex = 55;
			// 
			// tbemployeeid
			// 
			this->tbemployeeid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbemployeeid->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbemployeeid->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"514", L"512", L"513" });
			this->tbemployeeid->Location = System::Drawing::Point(685, 197);
			this->tbemployeeid->Name = L"tbemployeeid";
			this->tbemployeeid->Size = System::Drawing::Size(177, 31);
			this->tbemployeeid->TabIndex = 66;
			// 
			// tbjoindate
			// 
			this->tbjoindate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbjoindate->AutoSize = true;
			this->tbjoindate->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbjoindate->Location = System::Drawing::Point(1015, 585);
			this->tbjoindate->Name = L"tbjoindate";
			this->tbjoindate->Size = System::Drawing::Size(0, 20);
			this->tbjoindate->TabIndex = 79;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(834, 584);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 24);
			this->label8->TabIndex = 78;
			this->label8->Text = L"Joining Date:";
			// 
			// tbposition
			// 
			this->tbposition->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbposition->AutoSize = true;
			this->tbposition->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbposition->Location = System::Drawing::Point(581, 591);
			this->tbposition->Name = L"tbposition";
			this->tbposition->Size = System::Drawing::Size(0, 20);
			this->tbposition->TabIndex = 77;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(324, 587);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(204, 24);
			this->label6->TabIndex = 76;
			this->label6->Text = L"Employee Position:";
			// 
			// tbdepartment
			// 
			this->tbdepartment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbdepartment->AutoSize = true;
			this->tbdepartment->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbdepartment->Location = System::Drawing::Point(581, 546);
			this->tbdepartment->Name = L"tbdepartment";
			this->tbdepartment->Size = System::Drawing::Size(0, 20);
			this->tbdepartment->TabIndex = 75;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(324, 538);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 24);
			this->label4->TabIndex = 74;
			this->label4->Text = L"Emplyee Department:";
			// 
			// tbsalary
			// 
			this->tbsalary->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbsalary->AutoSize = true;
			this->tbsalary->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbsalary->Location = System::Drawing::Point(581, 631);
			this->tbsalary->Name = L"tbsalary";
			this->tbsalary->Size = System::Drawing::Size(0, 20);
			this->tbsalary->TabIndex = 81;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(324, 627);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 24);
			this->label5->TabIndex = 80;
			this->label5->Text = L"Salary:";
			// 
			// total
			// 
			this->total->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->total->Location = System::Drawing::Point(834, 627);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(126, 24);
			this->total->TabIndex = 134;
			this->total->Text = L"Total Leave";
			// 
			// tbleave
			// 
			this->tbleave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbleave->AutoSize = true;
			this->tbleave->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbleave->Location = System::Drawing::Point(1015, 627);
			this->tbleave->Name = L"tbleave";
			this->tbleave->Size = System::Drawing::Size(0, 20);
			this->tbleave->TabIndex = 135;
			// 
			// DeleteData
			// 
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1290, 741);
			this->Controls->Add(this->tbleave);
			this->Controls->Add(this->total);
			this->Controls->Add(this->tbsalary);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbjoindate);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbposition);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbdepartment);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbemployeeid);
			this->Controls->Add(this->tbaddress);
			this->Controls->Add(this->tbcnic);
			this->Controls->Add(this->tbpostal);
			this->Controls->Add(this->tbcity);
			this->Controls->Add(this->tbcountry);
			this->Controls->Add(this->tbeducation);
			this->Controls->Add(this->tbphone);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->tbgender);
			this->Controls->Add(this->tbl_name);
			this->Controls->Add(this->tbf_name);
			this->Controls->Add(this->showdata);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->address);
			this->Controls->Add(this->employeeid);
			this->Controls->Add(this->del);
			this->Controls->Add(this->cnic);
			this->Controls->Add(this->postalcode);
			this->Controls->Add(this->city);
			this->Controls->Add(this->country);
			this->Controls->Add(this->education);
			this->Controls->Add(this->phonenumber);
			this->Controls->Add(this->email);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->lastname);
			this->Controls->Add(this->firstname);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"DeleteData";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &DeleteData::AddData_Load_1);
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
			String^ sqlQuery = "SELECT Employee_ID FROM Employee;";

			SqlCommand^ command = gcnew SqlCommand(sqlQuery, % sqlConn); // Corrected line

			SqlDataAdapter^ da = gcnew SqlDataAdapter();
			da->SelectCommand = command;
			DataTable^ table = gcnew DataTable();
			da->Fill(table);
			tbemployeeid->DataSource = table;
			tbemployeeid->DisplayMember = "Employee_ID";
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
		String^ employeeID = tbemployeeid->Text;
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
			MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK,MessageBoxIcon::Error);
		}
	}
	private: System::Void tbf_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbl_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbgender_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ employeeID = tbemployeeid->Text;
	if (employeeID->Length == 0) {
		MessageBox::Show("Please Select The Employee", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	String^ sqlDeleteAddressQuery = "DELETE FROM Address "
		"WHERE Employee_ID = @employeeID;";

	String^ sqlDeleteEmployeeQuery = "DELETE FROM Employee "
		"WHERE Employee_ID = @employeeID;";
	
	String^ sqlDeleteDepartmentQuery = "DELETE FROM Department "
		"WHERE Employee_ID = @employeeID;";

	String^ sqlDeleteJobQuery = "DELETE FROM Job "
		"WHERE Employee_ID = @employeeID;";
	
	String^ sqlDeleteSalaryQuery = "DELETE FROM Salary "
		"WHERE Employee_ID = @employeeID;";
	
	String^ sqlDeleteLeaveQuery = "DELETE FROM Leave "
		"WHERE Employee_ID = @employeeID;";

	try {
		String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();
		SqlTransaction^ transaction = sqlConn->BeginTransaction();

		try {
			// Execute delete query for Address table first
			SqlCommand^ cmdDeleteAddress = gcnew SqlCommand(sqlDeleteAddressQuery, sqlConn, transaction);
			cmdDeleteAddress->Parameters->AddWithValue("@employeeID", employeeID);
			int rowsAffectedAddress = cmdDeleteAddress->ExecuteNonQuery();
			
			// Execute delete query for Salary table first
			SqlCommand^ cmdDeleteSalary = gcnew SqlCommand(sqlDeleteSalaryQuery, sqlConn, transaction);
			cmdDeleteSalary->Parameters->AddWithValue("@employeeID", employeeID);
			int rowsAffectedSalary = cmdDeleteSalary->ExecuteNonQuery();

			// Execute delete query for Job table after Address table
			SqlCommand^ cmdDeleteJob = gcnew SqlCommand(sqlDeleteJobQuery, sqlConn, transaction);
			cmdDeleteJob->Parameters->AddWithValue("@employeeID", employeeID);
			int rowsAffectedJob = cmdDeleteJob->ExecuteNonQuery();
			
			// Execute delete query for Department table first
			SqlCommand^ cmdDeleteDepartment = gcnew SqlCommand(sqlDeleteDepartmentQuery, sqlConn, transaction);
			cmdDeleteDepartment->Parameters->AddWithValue("@employeeID", employeeID);
			int rowsAffectedDepartment = cmdDeleteDepartment->ExecuteNonQuery();
			
			// Execute delete query for Leave table first
			SqlCommand^ cmdDeleteLeave = gcnew SqlCommand(sqlDeleteLeaveQuery, sqlConn, transaction);
			cmdDeleteLeave->Parameters->AddWithValue("@employeeID", employeeID);
			int rowsAffectedLeave = cmdDeleteLeave->ExecuteNonQuery();

			// Execute delete query for Employee table after Address table
			SqlCommand^ cmdDeleteEmployee = gcnew SqlCommand(sqlDeleteEmployeeQuery, sqlConn, transaction);
			cmdDeleteEmployee->Parameters->AddWithValue("@employeeID", employeeID);
			int rowsAffectedEmployee = cmdDeleteEmployee->ExecuteNonQuery();



			// Commit transaction if both deletes succeed
			transaction->Commit();

			if (rowsAffectedSalary > 0 || rowsAffectedAddress > 0 || rowsAffectedEmployee > 0 || rowsAffectedDepartment > 0 || rowsAffectedJob > 0) {
				MessageBox::Show("Record deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				tbf_name->Text = "";
				tbl_name->Text = "";
				tbgender->Text = "";
				tbemail->Text = "";
				tbphone->Text = "";
				tbcnic->Text = "";
				tbcountry->Text = "";
				tbaddress->Text = "";
				tbpostal->Text = "";
				tbemployeeid->Text = "";
				tbcity->Text = "";
				tbeducation->Text = ""; 
				tbdepartment->Text = "";
				tbposition->Text = "";
				tbjoindate->Text = "";
				tbsalary->Text = "";
				tbleave->Text = "";
			}
			else {
				MessageBox::Show("Record not found in the database.", "Not Found", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
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
		MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}



}
private: System::Void postalcode_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
