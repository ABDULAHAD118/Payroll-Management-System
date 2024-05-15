#pragma once
#include "Add Data.h"
#include "Update Data.h"
#include "Delete Data.h"
#include "Show Data.h"
#include "Job_Position.h"
#include "Salary.h"
#include "Leave.h"
namespace PayrollManagementSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Form^ previousForm;
		Dashboard(void) {
			InitializeComponent();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ logout;
	protected:



	protected:


	private: System::Windows::Forms::Button^ add_data;
	private: System::Windows::Forms::Button^ update_data;
	private: System::Windows::Forms::Button^ delete_data;
	private: System::Windows::Forms::Button^ salary;

	private: System::Windows::Forms::Button^ showdata;




	private: System::Windows::Forms::Button^ job_position;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ INFORMATION;
	private: System::Windows::Forms::Button^ leave;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->logout = (gcnew System::Windows::Forms::Button());
			this->add_data = (gcnew System::Windows::Forms::Button());
			this->update_data = (gcnew System::Windows::Forms::Button());
			this->delete_data = (gcnew System::Windows::Forms::Button());
			this->salary = (gcnew System::Windows::Forms::Button());
			this->showdata = (gcnew System::Windows::Forms::Button());
			this->job_position = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->INFORMATION = (gcnew System::Windows::Forms::Label());
			this->leave = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// logout
			// 
			this->logout->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logout->BackColor = System::Drawing::Color::DarkCyan;
			this->logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logout->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->logout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->logout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logout->ForeColor = System::Drawing::Color::White;
			this->logout->Location = System::Drawing::Point(524, 458);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(260, 35);
			this->logout->TabIndex = 8;
			this->logout->Text = L"LOG OUT";
			this->logout->UseVisualStyleBackColor = false;
			this->logout->Click += gcnew System::EventHandler(this, &Dashboard::logout_Click);
			// 
			// add_data
			// 
			this->add_data->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->add_data->BackColor = System::Drawing::Color::DarkCyan;
			this->add_data->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_data->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->add_data->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->add_data->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_data->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_data->ForeColor = System::Drawing::Color::White;
			this->add_data->Location = System::Drawing::Point(154, 263);
			this->add_data->Name = L"add_data";
			this->add_data->Size = System::Drawing::Size(260, 43);
			this->add_data->TabIndex = 1;
			this->add_data->Text = L"ADD DATA";
			this->add_data->UseVisualStyleBackColor = false;
			this->add_data->Click += gcnew System::EventHandler(this, &Dashboard::add_data_Click);
			// 
			// update_data
			// 
			this->update_data->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->update_data->BackColor = System::Drawing::Color::DarkCyan;
			this->update_data->Cursor = System::Windows::Forms::Cursors::Hand;
			this->update_data->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->update_data->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->update_data->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->update_data->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_data->ForeColor = System::Drawing::Color::White;
			this->update_data->Location = System::Drawing::Point(524, 344);
			this->update_data->Name = L"update_data";
			this->update_data->Size = System::Drawing::Size(260, 43);
			this->update_data->TabIndex = 5;
			this->update_data->Text = L"UPDATE DATA";
			this->update_data->UseVisualStyleBackColor = false;
			this->update_data->Click += gcnew System::EventHandler(this, &Dashboard::update_data_Click);
			// 
			// delete_data
			// 
			this->delete_data->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->delete_data->BackColor = System::Drawing::Color::DarkCyan;
			this->delete_data->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_data->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->delete_data->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->delete_data->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_data->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_data->ForeColor = System::Drawing::Color::White;
			this->delete_data->Location = System::Drawing::Point(900, 344);
			this->delete_data->Name = L"delete_data";
			this->delete_data->Size = System::Drawing::Size(260, 43);
			this->delete_data->TabIndex = 6;
			this->delete_data->Text = L"DELETE DATA";
			this->delete_data->UseVisualStyleBackColor = false;
			this->delete_data->Click += gcnew System::EventHandler(this, &Dashboard::delete_data_Click);
			// 
			// salary
			// 
			this->salary->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->salary->BackColor = System::Drawing::Color::DarkCyan;
			this->salary->Cursor = System::Windows::Forms::Cursors::Hand;
			this->salary->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->salary->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->salary->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->salary->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salary->ForeColor = System::Drawing::Color::White;
			this->salary->Location = System::Drawing::Point(900, 263);
			this->salary->Name = L"salary";
			this->salary->Size = System::Drawing::Size(260, 43);
			this->salary->TabIndex = 3;
			this->salary->Text = L"SALARY";
			this->salary->UseVisualStyleBackColor = false;
			this->salary->Click += gcnew System::EventHandler(this, &Dashboard::salary_Click);
			// 
			// showdata
			// 
			this->showdata->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->showdata->BackColor = System::Drawing::Color::DarkCyan;
			this->showdata->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showdata->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->showdata->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->showdata->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->showdata->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showdata->ForeColor = System::Drawing::Color::White;
			this->showdata->Location = System::Drawing::Point(154, 344);
			this->showdata->Name = L"showdata";
			this->showdata->Size = System::Drawing::Size(260, 43);
			this->showdata->TabIndex = 4;
			this->showdata->Text = L"SHOW DATA";
			this->showdata->UseVisualStyleBackColor = false;
			this->showdata->Click += gcnew System::EventHandler(this, &Dashboard::showdata_Click);
			// 
			// job_position
			// 
			this->job_position->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->job_position->BackColor = System::Drawing::Color::DarkCyan;
			this->job_position->Cursor = System::Windows::Forms::Cursors::Hand;
			this->job_position->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->job_position->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->job_position->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->job_position->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->job_position->ForeColor = System::Drawing::Color::White;
			this->job_position->Location = System::Drawing::Point(524, 263);
			this->job_position->Name = L"job_position";
			this->job_position->Size = System::Drawing::Size(260, 43);
			this->job_position->TabIndex = 2;
			this->job_position->Text = L"JOB POSITION";
			this->job_position->UseVisualStyleBackColor = false;
			this->job_position->Click += gcnew System::EventHandler(this, &Dashboard::job_position_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1268, 100);
			this->panel1->TabIndex = 26;
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
			this->label1->Size = System::Drawing::Size(1268, 100);
			this->label1->TabIndex = 1;
			this->label1->Text = L"PAYROLL MANAGEMENT SYSTEM";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// INFORMATION
			// 
			this->INFORMATION->BackColor = System::Drawing::Color::MediumTurquoise;
			this->INFORMATION->Dock = System::Windows::Forms::DockStyle::Top;
			this->INFORMATION->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->INFORMATION->Location = System::Drawing::Point(0, 100);
			this->INFORMATION->Name = L"INFORMATION";
			this->INFORMATION->Size = System::Drawing::Size(1268, 74);
			this->INFORMATION->TabIndex = 27;
			this->INFORMATION->Text = L"DASHBOARD";
			this->INFORMATION->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// leave
			// 
			this->leave->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->leave->BackColor = System::Drawing::Color::DarkCyan;
			this->leave->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->leave->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->leave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->leave->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leave->ForeColor = System::Drawing::Color::White;
			this->leave->Location = System::Drawing::Point(524, 409);
			this->leave->Name = L"leave";
			this->leave->Size = System::Drawing::Size(260, 43);
			this->leave->TabIndex = 7;
			this->leave->Text = L"LEAVE";
			this->leave->UseVisualStyleBackColor = false;
			this->leave->Click += gcnew System::EventHandler(this, &Dashboard::leave_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1268, 505);
			this->Controls->Add(this->leave);
			this->Controls->Add(this->INFORMATION);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->salary);
			this->Controls->Add(this->showdata);
			this->Controls->Add(this->job_position);
			this->Controls->Add(this->delete_data);
			this->Controls->Add(this->update_data);
			this->Controls->Add(this->add_data);
			this->Controls->Add(this->logout);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void username_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Name_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void add_data_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AddData^ add = gcnew AddData();
		add->SetPreviousForm(this);
		add->ShowDialog();
	}

	private: System::Void INFORMATION_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void update_data_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		UpdateData^ update = gcnew UpdateData();
		update->SetPreviousForm(this);
		update->ShowDialog();
	}
	private: System::Void delete_data_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		DeleteData^ del = gcnew DeleteData();
		del->SetPreviousForm(this);
		del->ShowDialog();
	}
	private: System::Void logout_Click(System::Object^ sender, System::EventArgs^ e) {
		if (previousForm != nullptr) {
			previousForm->Show();
			this->Close();
		}
	}
	public:
		// Method to set the previous form
		void SetPreviousForm(Form^ form) {
			previousForm = form;
		}

	private: System::Void showdata_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ShowData^ show = gcnew ShowData();
		show->SetPreviousForm(this);
		show->ShowDialog();
	}
	private: System::Void job_position_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Job_Position^ job = gcnew Job_Position();
		job->SetPreviousForm(this);
		job->ShowDialog();
	}
	private: System::Void salary_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Salary^ sal = gcnew Salary();
		sal->SetPreviousForm(this);
		sal->ShowDialog();
	}
	private: System::Void leave_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PayrollManagementSystem::Leave^ lve = gcnew PayrollManagementSystem::Leave();
		lve->SetPreviousForm(this);
		lve->ShowDialog();
	}
	};
}
