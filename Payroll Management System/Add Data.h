
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
	public ref class AddData : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
	public:
		
		AddData(void)
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
		~AddData()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ home;


	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::Button^ save;
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
	private: System::Windows::Forms::MaskedTextBox^ tbemployeeid;
	private: System::Windows::Forms::TextBox^ tbaddress;
	private: System::Windows::Forms::Label^ address;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ tbgender;





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
			this->reset = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
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
			this->tbemployeeid = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbaddress = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbgender = (gcnew System::Windows::Forms::ComboBox());
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
			this->label1->Size = System::Drawing::Size(1290, 79);
			this->label1->TabIndex = 2;
			this->label1->Text = L"PAYROLL MANAGEMENT SYSTEM";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel3->Controls->Add(this->home);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 79);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 540);
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
			this->home->Location = System::Drawing::Point(49, 82);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(75, 29);
			this->home->TabIndex = 4;
			this->home->Text = L"Home";
			this->home->UseVisualStyleBackColor = false;
			this->home->Click += gcnew System::EventHandler(this, &AddData::hom_Click);
			// 
			// reset
			// 
			this->reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->reset->BackColor = System::Drawing::Color::DarkCyan;
			this->reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reset->FlatAppearance->BorderSize = 0;
			this->reset->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->reset->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reset->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset->ForeColor = System::Drawing::Color::White;
			this->reset->Location = System::Drawing::Point(831, 580);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(89, 33);
			this->reset->TabIndex = 46;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = false;
			this->reset->Click += gcnew System::EventHandler(this, &AddData::reset_Click);
			// 
			// save
			// 
			this->save->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->save->BackColor = System::Drawing::Color::DarkCyan;
			this->save->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save->FlatAppearance->BorderSize = 0;
			this->save->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->save->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->ForeColor = System::Drawing::Color::White;
			this->save->Location = System::Drawing::Point(627, 580);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(85, 33);
			this->save->TabIndex = 45;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &AddData::save_Click);
			// 
			// cnic
			// 
			this->cnic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->cnic->AutoSize = true;
			this->cnic->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnic->Location = System::Drawing::Point(823, 222);
			this->cnic->Name = L"cnic";
			this->cnic->Size = System::Drawing::Size(105, 24);
			this->cnic->TabIndex = 44;
			this->cnic->Text = L"CNIC No.:";
			// 
			// tbcnic
			// 
			this->tbcnic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcnic->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbcnic->Location = System::Drawing::Point(1000, 222);
			this->tbcnic->Mask = L"00000-0000000-0";
			this->tbcnic->Name = L"tbcnic";
			this->tbcnic->Size = System::Drawing::Size(177, 29);
			this->tbcnic->TabIndex = 43;
			// 
			// tbpostal
			// 
			this->tbpostal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbpostal->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbpostal->Location = System::Drawing::Point(1000, 486);
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
			this->postalcode->Location = System::Drawing::Point(823, 486);
			this->postalcode->Name = L"postalcode";
			this->postalcode->Size = System::Drawing::Size(139, 24);
			this->postalcode->TabIndex = 41;
			this->postalcode->Text = L"Postal Code:";
			// 
			// tbcity
			// 
			this->tbcity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcity->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbcity->Location = System::Drawing::Point(1000, 433);
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
			this->city->Location = System::Drawing::Point(823, 428);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(55, 24);
			this->city->TabIndex = 39;
			this->city->Text = L"City:";
			// 
			// tbcountry
			// 
			this->tbcountry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbcountry->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbcountry->Location = System::Drawing::Point(1000, 376);
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
			this->country->Location = System::Drawing::Point(823, 376);
			this->country->Name = L"country";
			this->country->Size = System::Drawing::Size(97, 24);
			this->country->TabIndex = 37;
			this->country->Text = L"Country:";
			// 
			// tbeducation
			// 
			this->tbeducation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbeducation->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbeducation->Location = System::Drawing::Point(1000, 270);
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
			this->education->Location = System::Drawing::Point(823, 270);
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
			this->phonenumber->Location = System::Drawing::Point(313, 430);
			this->phonenumber->Name = L"phonenumber";
			this->phonenumber->Size = System::Drawing::Size(167, 24);
			this->phonenumber->TabIndex = 34;
			this->phonenumber->Text = L"Phone Number:";
			// 
			// tbphone
			// 
			this->tbphone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbphone->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbphone->Location = System::Drawing::Point(490, 424);
			this->tbphone->Mask = L"0000-0000000";
			this->tbphone->Name = L"tbphone";
			this->tbphone->Size = System::Drawing::Size(177, 29);
			this->tbphone->TabIndex = 33;
			// 
			// tbemail
			// 
			this->tbemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbemail->Location = System::Drawing::Point(490, 374);
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
			this->email->Location = System::Drawing::Point(313, 377);
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
			this->gender->Location = System::Drawing::Point(313, 319);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(91, 24);
			this->gender->TabIndex = 29;
			this->gender->Text = L"Gender:";
			// 
			// tbl_name
			// 
			this->tbl_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbl_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbl_name->Location = System::Drawing::Point(490, 264);
			this->tbl_name->Multiline = true;
			this->tbl_name->Name = L"tbl_name";
			this->tbl_name->Size = System::Drawing::Size(177, 27);
			this->tbl_name->TabIndex = 28;
			// 
			// lastname
			// 
			this->lastname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lastname->AutoSize = true;
			this->lastname->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastname->Location = System::Drawing::Point(313, 267);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(124, 24);
			this->lastname->TabIndex = 27;
			this->lastname->Text = L"Last Name:";
			// 
			// tbf_name
			// 
			this->tbf_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbf_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbf_name->Location = System::Drawing::Point(490, 211);
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
			this->firstname->Location = System::Drawing::Point(313, 214);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(125, 24);
			this->firstname->TabIndex = 25;
			this->firstname->Text = L"First Name:";
			// 
			// employeeid
			// 
			this->employeeid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->employeeid->AutoSize = true;
			this->employeeid->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeid->Location = System::Drawing::Point(313, 489);
			this->employeeid->Name = L"employeeid";
			this->employeeid->Size = System::Drawing::Size(133, 24);
			this->employeeid->TabIndex = 50;
			this->employeeid->Text = L"Employee id";
			// 
			// tbemployeeid
			// 
			this->tbemployeeid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbemployeeid->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbemployeeid->Location = System::Drawing::Point(490, 483);
			this->tbemployeeid->Mask = L"00000";
			this->tbemployeeid->Name = L"tbemployeeid";
			this->tbemployeeid->Size = System::Drawing::Size(177, 29);
			this->tbemployeeid->TabIndex = 49;
			// 
			// tbaddress
			// 
			this->tbaddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbaddress->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbaddress->Location = System::Drawing::Point(1000, 323);
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
			this->address->Location = System::Drawing::Point(823, 323);
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
			this->label2->Location = System::Drawing::Point(494, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(490, 57);
			this->label2->TabIndex = 53;
			this->label2->Text = L"ADD EMPLOYEE INFORMATION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbgender
			// 
			this->tbgender->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbgender->BackColor = System::Drawing::SystemColors::Window;
			this->tbgender->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold));
			this->tbgender->ForeColor = System::Drawing::Color::Black;
			this->tbgender->FormattingEnabled = true;
			this->tbgender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Other" });
			this->tbgender->Location = System::Drawing::Point(490, 318);
			this->tbgender->Name = L"tbgender";
			this->tbgender->Size = System::Drawing::Size(177, 31);
			this->tbgender->TabIndex = 54;
			// 
			// AddData
			// 
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1290, 619);
			this->Controls->Add(this->tbgender);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbaddress);
			this->Controls->Add(this->address);
			this->Controls->Add(this->employeeid);
			this->Controls->Add(this->tbemployeeid);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->save);
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
			this->Name = L"AddData";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AddData::AddData_Load_1);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void AddData_Load_1(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ firstName = tbf_name->Text;
	String^ lastName = tbl_name->Text;
	String^ gender = tbgender->Text;
	String^ email = tbemail->Text;
	String^ phone = tbphone->Text;
	String^ cnic = tbcnic->Text;
	String^ country = tbcountry->Text;
	String^ address = tbaddress->Text;
	String^ postal = tbpostal->Text;
	String^ employeeID = tbemployeeid->Text;
	String^ city = tbcity->Text;
	String^ education = tbeducation->Text;
	//Let’s check if any of 2 fields are empty
	if (firstName->Length == 0 || lastName->Length == 0 || gender->Length == 0 || email->Length == 0 || phone->Length == 0 || education->Length == 0 || cnic->Length == 0 || country->Length == 0 || address->Length == 0 || postal->Length == 0 || city->Length == 0) {
		MessageBox::Show("Please Fill All Fields", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	//In try Lets connect to Database
	try {
		String^ connString = "Data Source=localhost;Initial Catalog=Payroll_Management_System;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// Now let’s create the SQL Query

		String^ sqlQuery = "INSERT INTO Employee (Employee_ID,First_Name,Last_Name,Gender,Phone_Number,Email,Education,CNIC) VALUES (@employeeID,@firstName,@lastName,@gender,@phone,@email,@education,@cnic);";
		String^ sqlQuery2 = "INSERT INTO Address (Employee_ID,Country,Address,Postal_Code,City) VALUES (@employeeID,@country,@address,@postal,@city);";
		SqlCommand command(sqlQuery, % sqlConn);
		SqlCommand command2(sqlQuery2, % sqlConn);
		command.Parameters->AddWithValue("@firstName", firstName);
		command.Parameters->AddWithValue("@lastName", lastName);
		command.Parameters->AddWithValue("@gender", gender);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@education", education);
		command.Parameters->AddWithValue("@employeeID", employeeID);
		command.Parameters->AddWithValue("@cnic", cnic);

		command2.Parameters->AddWithValue("@employeeID", employeeID);
		command2.Parameters->AddWithValue("@country", country);
		command2.Parameters->AddWithValue("@address", address);
		command2.Parameters->AddWithValue("@postal", postal);
		command2.Parameters->AddWithValue("@city", city);
		int^ reader = command.ExecuteNonQuery();
		int^ reader2 = command2.ExecuteNonQuery();
		if (reader != nullptr || reader2 != nullptr) {
			// Authentication successful
			MessageBox::Show("Data Added Sucessfully!", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
			//this->Hide();

		}
		else {
			// Authentication failed
			MessageBox::Show("Record Not Insertedd", "Record Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	catch (Exception^ ex) {
		MessageBox::Show("Failed to connect to database: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK,MessageBoxIcon::Error);
	}
}
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
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
}
};
}
