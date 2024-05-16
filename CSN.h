#pragma once
#include "CSNAPP.h"
#include <vector>
#include <regex>

namespace CSN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CSN
	/// </summary>
	public ref class CSN : public System::Windows::Forms::Form
	{
	public:
		CSN(void)
		{

			InitializeComponent();
			/*std::vector<Label^> categoryButtons;
			std::vector<CheckBox^> categoryCheckbox;*/
			/*for (int i = 1; i <= 8; ++i)
			{
				String^ labelName = "home_cat" + i.ToString();
				Label^ lbl = safe_cast<Label^>(this->Controls->Find(labelName, true)[0]);
				if (lbl != nullptr)
				{
					categoryButtons.push_back(lbl);
				}
			}*/
			/*for (int i = 1; i <= 8; ++i)
			{
				String^ checkName = "checkBox_cat" + i.ToString();
				CheckBox^ check = safe_cast<CheckBox^>(this->Controls->Find(checkName, true)[0]);
				if (check != nullptr)
				{
					categoryCheckbox.push_back(check);
				}
			}*/
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CSN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ login_btn;
	private: System::Windows::Forms::Button^ signup_btn;
	protected:

	private: System::Windows::Forms::Panel^ login_panel;
	private: System::Windows::Forms::Panel^ signup_panel;
	private: System::Windows::Forms::TextBox^ username_txtbox;
	private: System::Windows::Forms::TextBox^ age_txtbox;


	private: System::Windows::Forms::TextBox^ pass_txtbox;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ password_lbl;

	private: System::Windows::Forms::Label^ username_lbl;

	private: System::Windows::Forms::TextBox^ pass_txtbox_login;

	private: System::Windows::Forms::TextBox^ username_txtbox_login;


	private: System::Windows::Forms::LinkLabel^ login_lnkLbl;
	private: System::Windows::Forms::LinkLabel^ createaccount_lbllnk;

	private: System::Windows::Forms::Label^ error_lbl_signup;
	private: System::Windows::Forms::Label^ error_lbl_login;
	private: System::Windows::Forms::Panel^ home_panel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ logout_btn;




	private: System::Windows::Forms::Button^ gotopostnews_btn;
	private: System::Windows::Forms::Label^ activeid_lbl;


	private: System::Windows::Forms::Label^ activeuser_lbl;


	private: System::Windows::Forms::Label^ activerole_lbl;



	private: System::Windows::Forms::Panel^ selectcategory_panel;




















	private: System::Windows::Forms::Button^ nextcategory_btn;


	private: System::Windows::Forms::Label^ done1;
	private: System::Windows::Forms::Label^ done2;
	private: System::Windows::Forms::Label^ done3;



	private: System::Windows::Forms::Panel^ addpic_panel;
	private: System::Windows::Forms::Button^ nextpic_btn;



	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ confirmpasssignup_txtbox;

	private: System::Windows::Forms::Label^ label15;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ email_txtbox;
	private: System::Windows::Forms::LinkLabel^ forgetpass_lbllnk;



private: System::Windows::Forms::Button^ confirmphone_btn;
private: System::Windows::Forms::Label^ confirmpassword_lbl;

private: System::Windows::Forms::TextBox^ confirmpass_txtbox_login;
private: System::Windows::Forms::Button^ change_pass_btn;
private: System::Windows::Forms::TextBox^ phone_txtbox;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ backtopic_btn;
private: System::Windows::Forms::Button^ backtologin_btn;



private: System::Windows::Forms::Panel^ panel_addnews;





private: System::Windows::Forms::Button^ addnews_btn;

private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ description_txtBox;
private: System::Windows::Forms::TextBox^ textBoxDay;




private: System::Windows::Forms::TextBox^ title_txtBox;
private: System::Windows::Forms::TextBox^ textBoxYear;

private: System::Windows::Forms::TextBox^ textBoxMonth;






private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button23;

private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::ComboBox^ category_comboBox;


private: System::Windows::Forms::Panel^ panel_news;




















private: System::Windows::Forms::Button^ udatenews_btn;

private: System::Windows::Forms::Button^ deletenews_btn;

private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::TextBox^ category_txtBox;
private: System::Windows::Forms::Button^ rate_btn;
private: System::Windows::Forms::Button^ gotonews_btn;






private: System::Windows::Forms::Button^ addcategory_btn;
private: System::Windows::Forms::PictureBox^ picuseradd;
private: System::Windows::Forms::Label^ unavailablepic_lbl;
private: System::Windows::Forms::Label^ n5;

private: System::Windows::Forms::Label^ n6;
private: System::Windows::Forms::Label^ n4;
private: System::Windows::Forms::Label^ n3;
private: System::Windows::Forms::Label^ n2;
private: System::Windows::Forms::Label^ n1;
















































private: System::Windows::Forms::PictureBox^ activepic;









private: System::Windows::Forms::TextBox^ search_txtBox;








private: System::Windows::Forms::Label^ home_cat8;

private: System::Windows::Forms::Label^ home_cat7;


private: System::Windows::Forms::Label^ home_cat6;


private: System::Windows::Forms::Label^ home_cat5;


private: System::Windows::Forms::Label^ home_cat4;



private: System::Windows::Forms::Label^ home_cat3;


private: System::Windows::Forms::Label^ home_cat2;




private: System::Windows::Forms::Label^ home_cat1;



private: System::Windows::Forms::Panel^ panel3;







private: System::Windows::Forms::ListBox^ NewsList;
private: System::Windows::Forms::Label^ showrate_lbl;
private: System::Windows::Forms::CheckBox^ checkBox_cat1;
private: System::Windows::Forms::CheckBox^ checkBox_cat6;



private: System::Windows::Forms::CheckBox^ checkBox_cat4;

private: System::Windows::Forms::CheckBox^ checkBox_cat3;

private: System::Windows::Forms::CheckBox^ checkBox_cat2;
private: System::Windows::Forms::CheckBox^ checkBox_cat7;
private: System::Windows::Forms::CheckBox^ checkBox_cat8;





private: System::Windows::Forms::CheckBox^ checkBox_cat5;
private: System::Windows::Forms::Button^ favcategoryuser_btn;
private: System::Windows::Forms::Button^ trend_btn;
private: System::Windows::Forms::Panel^ panel_trend;

private: System::Windows::Forms::Label^ trend9;

private: System::Windows::Forms::Label^ trend5;



private: System::Windows::Forms::Label^ trend2;
private: System::Windows::Forms::Label^ trend8;





private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ trend7;

private: System::Windows::Forms::Label^ trend4;

private: System::Windows::Forms::Label^ trend1;
private: System::Windows::Forms::Label^ trend6;





private: System::Windows::Forms::Label^ trend3;

private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ star1;
private: System::Windows::Forms::Label^ star9;


private: System::Windows::Forms::Label^ star8;

private: System::Windows::Forms::Label^ star7;

private: System::Windows::Forms::Label^ star6;

private: System::Windows::Forms::Label^ star5;

private: System::Windows::Forms::Label^ star4;

private: System::Windows::Forms::Label^ star3;

private: System::Windows::Forms::Label^ star2;
private: System::Windows::Forms::Label^ s5;

private: System::Windows::Forms::Label^ s4;

private: System::Windows::Forms::Label^ s3;

private: System::Windows::Forms::Label^ s2;

private: System::Windows::Forms::Label^ s1;
private: System::Windows::Forms::Panel^ panel_star;
private: System::Windows::Forms::Button^ addcat;
private: System::Windows::Forms::Label^ n15;
private: System::Windows::Forms::Label^ n16;
private: System::Windows::Forms::Label^ n17;

private: System::Windows::Forms::Label^ n14;
private: System::Windows::Forms::Label^ n13;
private: System::Windows::Forms::Label^ n18;


private: System::Windows::Forms::Label^ n12;
private: System::Windows::Forms::Label^ n11;
private: System::Windows::Forms::Label^ n10;
private: System::Windows::Forms::Label^ n9;
private: System::Windows::Forms::Label^ n8;
private: System::Windows::Forms::Label^ n7;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::Button^ like_btn;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;




































































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CSN::typeid));
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->signup_btn = (gcnew System::Windows::Forms::Button());
			this->login_panel = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->confirmpassword_lbl = (gcnew System::Windows::Forms::Label());
			this->confirmpass_txtbox_login = (gcnew System::Windows::Forms::TextBox());
			this->forgetpass_lbllnk = (gcnew System::Windows::Forms::LinkLabel());
			this->error_lbl_login = (gcnew System::Windows::Forms::Label());
			this->createaccount_lbllnk = (gcnew System::Windows::Forms::LinkLabel());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->pass_txtbox_login = (gcnew System::Windows::Forms::TextBox());
			this->username_txtbox_login = (gcnew System::Windows::Forms::TextBox());
			this->change_pass_btn = (gcnew System::Windows::Forms::Button());
			this->confirmphone_btn = (gcnew System::Windows::Forms::Button());
			this->signup_panel = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->phone_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->confirmpasssignup_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->email_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->error_lbl_signup = (gcnew System::Windows::Forms::Label());
			this->login_lnkLbl = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->age_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->pass_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->username_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->home_panel = (gcnew System::Windows::Forms::Panel());
			this->NewsList = (gcnew System::Windows::Forms::ListBox());
			this->search_txtBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->gotopostnews_btn = (gcnew System::Windows::Forms::Button());
			this->gotonews_btn = (gcnew System::Windows::Forms::Button());
			this->favcategoryuser_btn = (gcnew System::Windows::Forms::Button());
			this->trend_btn = (gcnew System::Windows::Forms::Button());
			this->activepic = (gcnew System::Windows::Forms::PictureBox());
			this->activerole_lbl = (gcnew System::Windows::Forms::Label());
			this->activeid_lbl = (gcnew System::Windows::Forms::Label());
			this->activeuser_lbl = (gcnew System::Windows::Forms::Label());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->panel_addnews = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->addcategory_btn = (gcnew System::Windows::Forms::Button());
			this->addcat = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->rate_btn = (gcnew System::Windows::Forms::Button());
			this->like_btn = (gcnew System::Windows::Forms::Button());
			this->addnews_btn = (gcnew System::Windows::Forms::Button());
			this->deletenews_btn = (gcnew System::Windows::Forms::Button());
			this->udatenews_btn = (gcnew System::Windows::Forms::Button());
			this->panel_star = (gcnew System::Windows::Forms::Panel());
			this->s5 = (gcnew System::Windows::Forms::Label());
			this->s1 = (gcnew System::Windows::Forms::Label());
			this->s4 = (gcnew System::Windows::Forms::Label());
			this->s2 = (gcnew System::Windows::Forms::Label());
			this->s3 = (gcnew System::Windows::Forms::Label());
			this->showrate_lbl = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMonth = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->description_txtBox = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDay = (gcnew System::Windows::Forms::TextBox());
			this->title_txtBox = (gcnew System::Windows::Forms::TextBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->category_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->category_txtBox = (gcnew System::Windows::Forms::TextBox());
			this->panel_trend = (gcnew System::Windows::Forms::Panel());
			this->star1 = (gcnew System::Windows::Forms::Label());
			this->star9 = (gcnew System::Windows::Forms::Label());
			this->star8 = (gcnew System::Windows::Forms::Label());
			this->star7 = (gcnew System::Windows::Forms::Label());
			this->star6 = (gcnew System::Windows::Forms::Label());
			this->star5 = (gcnew System::Windows::Forms::Label());
			this->star4 = (gcnew System::Windows::Forms::Label());
			this->star3 = (gcnew System::Windows::Forms::Label());
			this->star2 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trend9 = (gcnew System::Windows::Forms::Label());
			this->trend5 = (gcnew System::Windows::Forms::Label());
			this->trend2 = (gcnew System::Windows::Forms::Label());
			this->trend8 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->trend7 = (gcnew System::Windows::Forms::Label());
			this->trend1 = (gcnew System::Windows::Forms::Label());
			this->trend6 = (gcnew System::Windows::Forms::Label());
			this->trend3 = (gcnew System::Windows::Forms::Label());
			this->trend4 = (gcnew System::Windows::Forms::Label());
			this->panel_news = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->home_cat8 = (gcnew System::Windows::Forms::Label());
			this->home_cat1 = (gcnew System::Windows::Forms::Label());
			this->home_cat2 = (gcnew System::Windows::Forms::Label());
			this->home_cat7 = (gcnew System::Windows::Forms::Label());
			this->home_cat3 = (gcnew System::Windows::Forms::Label());
			this->home_cat6 = (gcnew System::Windows::Forms::Label());
			this->home_cat4 = (gcnew System::Windows::Forms::Label());
			this->home_cat5 = (gcnew System::Windows::Forms::Label());
			this->n15 = (gcnew System::Windows::Forms::Label());
			this->n16 = (gcnew System::Windows::Forms::Label());
			this->n17 = (gcnew System::Windows::Forms::Label());
			this->n14 = (gcnew System::Windows::Forms::Label());
			this->n13 = (gcnew System::Windows::Forms::Label());
			this->n18 = (gcnew System::Windows::Forms::Label());
			this->n5 = (gcnew System::Windows::Forms::Label());
			this->n12 = (gcnew System::Windows::Forms::Label());
			this->n11 = (gcnew System::Windows::Forms::Label());
			this->n10 = (gcnew System::Windows::Forms::Label());
			this->n9 = (gcnew System::Windows::Forms::Label());
			this->n8 = (gcnew System::Windows::Forms::Label());
			this->n7 = (gcnew System::Windows::Forms::Label());
			this->n6 = (gcnew System::Windows::Forms::Label());
			this->n4 = (gcnew System::Windows::Forms::Label());
			this->n3 = (gcnew System::Windows::Forms::Label());
			this->n2 = (gcnew System::Windows::Forms::Label());
			this->n1 = (gcnew System::Windows::Forms::Label());
			this->selectcategory_panel = (gcnew System::Windows::Forms::Panel());
			this->checkBox_cat7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cat8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cat5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cat6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cat4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cat3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cat2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cat1 = (gcnew System::Windows::Forms::CheckBox());
			this->backtopic_btn = (gcnew System::Windows::Forms::Button());
			this->nextcategory_btn = (gcnew System::Windows::Forms::Button());
			this->done1 = (gcnew System::Windows::Forms::Label());
			this->done2 = (gcnew System::Windows::Forms::Label());
			this->done3 = (gcnew System::Windows::Forms::Label());
			this->addpic_panel = (gcnew System::Windows::Forms::Panel());
			this->unavailablepic_lbl = (gcnew System::Windows::Forms::Label());
			this->picuseradd = (gcnew System::Windows::Forms::PictureBox());
			this->backtologin_btn = (gcnew System::Windows::Forms::Button());
			this->nextpic_btn = (gcnew System::Windows::Forms::Button());
			this->login_panel->SuspendLayout();
			this->signup_panel->SuspendLayout();
			this->home_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->activepic))->BeginInit();
			this->panel_addnews->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel_star->SuspendLayout();
			this->panel_trend->SuspendLayout();
			this->panel_news->SuspendLayout();
			this->panel3->SuspendLayout();
			this->selectcategory_panel->SuspendLayout();
			this->addpic_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picuseradd))->BeginInit();
			this->SuspendLayout();
			// 
			// login_btn
			// 
			this->login_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->login_btn->BackColor = System::Drawing::Color::Black;
			this->login_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->login_btn->Location = System::Drawing::Point(429, 584);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(454, 41);
			this->login_btn->TabIndex = 0;
			this->login_btn->Text = L"Log In";
			this->login_btn->UseVisualStyleBackColor = false;
			this->login_btn->Click += gcnew System::EventHandler(this, &CSN::login_btn_Click);
			// 
			// signup_btn
			// 
			this->signup_btn->BackColor = System::Drawing::Color::Black;
			this->signup_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signup_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->signup_btn->Location = System::Drawing::Point(463, 582);
			this->signup_btn->Name = L"signup_btn";
			this->signup_btn->Size = System::Drawing::Size(375, 41);
			this->signup_btn->TabIndex = 1;
			this->signup_btn->Text = L"Sign Up";
			this->signup_btn->UseVisualStyleBackColor = false;
			this->signup_btn->Click += gcnew System::EventHandler(this, &CSN::signup_btn_Click);
			// 
			// login_panel
			// 
			this->login_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->login_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->login_panel->Controls->Add(this->button8);
			this->login_panel->Controls->Add(this->button7);
			this->login_panel->Controls->Add(this->button6);
			this->login_panel->Controls->Add(this->confirmpassword_lbl);
			this->login_panel->Controls->Add(this->confirmpass_txtbox_login);
			this->login_panel->Controls->Add(this->forgetpass_lbllnk);
			this->login_panel->Controls->Add(this->error_lbl_login);
			this->login_panel->Controls->Add(this->createaccount_lbllnk);
			this->login_panel->Controls->Add(this->password_lbl);
			this->login_panel->Controls->Add(this->username_lbl);
			this->login_panel->Controls->Add(this->pass_txtbox_login);
			this->login_panel->Controls->Add(this->username_txtbox_login);
			this->login_panel->Controls->Add(this->change_pass_btn);
			this->login_panel->Controls->Add(this->confirmphone_btn);
			this->login_panel->Controls->Add(this->login_btn);
			this->login_panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_panel->Location = System::Drawing::Point(149, 86);
			this->login_panel->Name = L"login_panel";
			this->login_panel->Size = System::Drawing::Size(1216, 696);
			this->login_panel->TabIndex = 2;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::AliceBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(429, 186);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(334, 3);
			this->button8->TabIndex = 23;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::AliceBlue;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(429, 233);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(372, 3);
			this->button7->TabIndex = 22;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::AliceBlue;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(429, 281);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(372, 3);
			this->button6->TabIndex = 21;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			// 
			// confirmpassword_lbl
			// 
			this->confirmpassword_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->confirmpassword_lbl->ForeColor = System::Drawing::Color::White;
			this->confirmpassword_lbl->Location = System::Drawing::Point(195, 252);
			this->confirmpassword_lbl->Name = L"confirmpassword_lbl";
			this->confirmpassword_lbl->Size = System::Drawing::Size(226, 29);
			this->confirmpassword_lbl->TabIndex = 19;
			this->confirmpassword_lbl->Text = L"Confirm Password : ";
			this->confirmpassword_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->confirmpassword_lbl->Visible = false;
			// 
			// confirmpass_txtbox_login
			// 
			this->confirmpass_txtbox_login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->confirmpass_txtbox_login->BackColor = System::Drawing::Color::Black;
			this->confirmpass_txtbox_login->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->confirmpass_txtbox_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->confirmpass_txtbox_login->ForeColor = System::Drawing::Color::White;
			this->confirmpass_txtbox_login->Location = System::Drawing::Point(429, 250);
			this->confirmpass_txtbox_login->Multiline = true;
			this->confirmpass_txtbox_login->Name = L"confirmpass_txtbox_login";
			this->confirmpass_txtbox_login->PasswordChar = '*';
			this->confirmpass_txtbox_login->Size = System::Drawing::Size(372, 31);
			this->confirmpass_txtbox_login->TabIndex = 18;
			this->confirmpass_txtbox_login->Visible = false;
			// 
			// forgetpass_lbllnk
			// 
			this->forgetpass_lbllnk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forgetpass_lbllnk->ForeColor = System::Drawing::Color::Transparent;
			this->forgetpass_lbllnk->LinkColor = System::Drawing::Color::Transparent;
			this->forgetpass_lbllnk->Location = System::Drawing::Point(630, 555);
			this->forgetpass_lbllnk->Name = L"forgetpass_lbllnk";
			this->forgetpass_lbllnk->Size = System::Drawing::Size(346, 23);
			this->forgetpass_lbllnk->TabIndex = 16;
			this->forgetpass_lbllnk->TabStop = true;
			this->forgetpass_lbllnk->Text = L"Forget My Password\?";
			this->forgetpass_lbllnk->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->forgetpass_lbllnk->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CSN::forgetpass_lbllnk_LinkClicked);
			// 
			// error_lbl_login
			// 
			this->error_lbl_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->error_lbl_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error_lbl_login->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->error_lbl_login->Location = System::Drawing::Point(431, 626);
			this->error_lbl_login->Name = L"error_lbl_login";
			this->error_lbl_login->Size = System::Drawing::Size(600, 21);
			this->error_lbl_login->TabIndex = 15;
			// 
			// createaccount_lbllnk
			// 
			this->createaccount_lbllnk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->createaccount_lbllnk->ForeColor = System::Drawing::Color::Transparent;
			this->createaccount_lbllnk->LinkColor = System::Drawing::Color::Transparent;
			this->createaccount_lbllnk->Location = System::Drawing::Point(428, 554);
			this->createaccount_lbllnk->Name = L"createaccount_lbllnk";
			this->createaccount_lbllnk->Size = System::Drawing::Size(199, 23);
			this->createaccount_lbllnk->TabIndex = 14;
			this->createaccount_lbllnk->TabStop = true;
			this->createaccount_lbllnk->Text = L"Create My Account";
			this->createaccount_lbllnk->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->createaccount_lbllnk->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CSN::createaccount_lbllnk_LinkClicked);
			// 
			// password_lbl
			// 
			this->password_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_lbl->ForeColor = System::Drawing::Color::White;
			this->password_lbl->Location = System::Drawing::Point(201, 204);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(220, 29);
			this->password_lbl->TabIndex = 10;
			this->password_lbl->Text = L"Password : ";
			this->password_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// username_lbl
			// 
			this->username_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_lbl->ForeColor = System::Drawing::Color::White;
			this->username_lbl->Location = System::Drawing::Point(191, 157);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(230, 29);
			this->username_lbl->TabIndex = 9;
			this->username_lbl->Text = L"Username or Email : ";
			this->username_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pass_txtbox_login
			// 
			this->pass_txtbox_login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pass_txtbox_login->BackColor = System::Drawing::Color::Black;
			this->pass_txtbox_login->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pass_txtbox_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_txtbox_login->ForeColor = System::Drawing::Color::White;
			this->pass_txtbox_login->Location = System::Drawing::Point(429, 202);
			this->pass_txtbox_login->Multiline = true;
			this->pass_txtbox_login->Name = L"pass_txtbox_login";
			this->pass_txtbox_login->PasswordChar = '*';
			this->pass_txtbox_login->Size = System::Drawing::Size(372, 31);
			this->pass_txtbox_login->TabIndex = 8;
			// 
			// username_txtbox_login
			// 
			this->username_txtbox_login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->username_txtbox_login->BackColor = System::Drawing::Color::Black;
			this->username_txtbox_login->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->username_txtbox_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->username_txtbox_login->ForeColor = System::Drawing::Color::White;
			this->username_txtbox_login->Location = System::Drawing::Point(429, 155);
			this->username_txtbox_login->Multiline = true;
			this->username_txtbox_login->Name = L"username_txtbox_login";
			this->username_txtbox_login->Size = System::Drawing::Size(334, 31);
			this->username_txtbox_login->TabIndex = 7;
			// 
			// change_pass_btn
			// 
			this->change_pass_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->change_pass_btn->BackColor = System::Drawing::Color::Black;
			this->change_pass_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->change_pass_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->change_pass_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->change_pass_btn->Location = System::Drawing::Point(429, 584);
			this->change_pass_btn->Name = L"change_pass_btn";
			this->change_pass_btn->Size = System::Drawing::Size(454, 41);
			this->change_pass_btn->TabIndex = 20;
			this->change_pass_btn->Text = L"Change Password";
			this->change_pass_btn->UseVisualStyleBackColor = false;
			this->change_pass_btn->Visible = false;
			this->change_pass_btn->Click += gcnew System::EventHandler(this, &CSN::change_pass_btn_Click);
			// 
			// confirmphone_btn
			// 
			this->confirmphone_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->confirmphone_btn->BackColor = System::Drawing::Color::Black;
			this->confirmphone_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmphone_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->confirmphone_btn->Location = System::Drawing::Point(429, 584);
			this->confirmphone_btn->Name = L"confirmphone_btn";
			this->confirmphone_btn->Size = System::Drawing::Size(454, 41);
			this->confirmphone_btn->TabIndex = 17;
			this->confirmphone_btn->Text = L"Confirm Phone";
			this->confirmphone_btn->UseVisualStyleBackColor = false;
			this->confirmphone_btn->Visible = false;
			this->confirmphone_btn->Click += gcnew System::EventHandler(this, &CSN::confirmphone_btn_Click);
			// 
			// signup_panel
			// 
			this->signup_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->signup_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->signup_panel->Controls->Add(this->button14);
			this->signup_panel->Controls->Add(this->button13);
			this->signup_panel->Controls->Add(this->button12);
			this->signup_panel->Controls->Add(this->button11);
			this->signup_panel->Controls->Add(this->button10);
			this->signup_panel->Controls->Add(this->button9);
			this->signup_panel->Controls->Add(this->phone_txtbox);
			this->signup_panel->Controls->Add(this->label16);
			this->signup_panel->Controls->Add(this->confirmpasssignup_txtbox);
			this->signup_panel->Controls->Add(this->label15);
			this->signup_panel->Controls->Add(this->label14);
			this->signup_panel->Controls->Add(this->email_txtbox);
			this->signup_panel->Controls->Add(this->error_lbl_signup);
			this->signup_panel->Controls->Add(this->login_lnkLbl);
			this->signup_panel->Controls->Add(this->label3);
			this->signup_panel->Controls->Add(this->signup_btn);
			this->signup_panel->Controls->Add(this->label2);
			this->signup_panel->Controls->Add(this->label1);
			this->signup_panel->Controls->Add(this->age_txtbox);
			this->signup_panel->Controls->Add(this->pass_txtbox);
			this->signup_panel->Controls->Add(this->username_txtbox);
			this->signup_panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup_panel->ForeColor = System::Drawing::Color::White;
			this->signup_panel->Location = System::Drawing::Point(149, 87);
			this->signup_panel->Name = L"signup_panel";
			this->signup_panel->Size = System::Drawing::Size(1216, 695);
			this->signup_panel->TabIndex = 3;
			this->signup_panel->Visible = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::AliceBlue;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(458, 414);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(447, 3);
			this->button14->TabIndex = 27;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::AliceBlue;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(458, 366);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(281, 3);
			this->button13->TabIndex = 26;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::AliceBlue;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(458, 319);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(153, 3);
			this->button12->TabIndex = 25;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::AliceBlue;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(458, 277);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(372, 3);
			this->button11->TabIndex = 24;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::AliceBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(458, 232);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(372, 3);
			this->button10->TabIndex = 23;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::AliceBlue;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(458, 185);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(265, 3);
			this->button9->TabIndex = 22;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// phone_txtbox
			// 
			this->phone_txtbox->BackColor = System::Drawing::Color::Black;
			this->phone_txtbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->phone_txtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone_txtbox->ForeColor = System::Drawing::Color::White;
			this->phone_txtbox->Location = System::Drawing::Point(458, 382);
			this->phone_txtbox->Multiline = true;
			this->phone_txtbox->Name = L"phone_txtbox";
			this->phone_txtbox->Size = System::Drawing::Size(447, 31);
			this->phone_txtbox->TabIndex = 21;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(203, 247);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(249, 29);
			this->label16->TabIndex = 20;
			this->label16->Text = L"Confirm Password : ";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// confirmpasssignup_txtbox
			// 
			this->confirmpasssignup_txtbox->BackColor = System::Drawing::Color::Black;
			this->confirmpasssignup_txtbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->confirmpasssignup_txtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->confirmpasssignup_txtbox->ForeColor = System::Drawing::Color::White;
			this->confirmpasssignup_txtbox->Location = System::Drawing::Point(458, 245);
			this->confirmpasssignup_txtbox->Multiline = true;
			this->confirmpasssignup_txtbox->Name = L"confirmpasssignup_txtbox";
			this->confirmpasssignup_txtbox->PasswordChar = '*';
			this->confirmpasssignup_txtbox->Size = System::Drawing::Size(372, 31);
			this->confirmpasssignup_txtbox->TabIndex = 19;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(203, 384);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(249, 29);
			this->label15->TabIndex = 18;
			this->label15->Text = L"Phone : ";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(203, 336);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(249, 29);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Email : ";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// email_txtbox
			// 
			this->email_txtbox->BackColor = System::Drawing::Color::Black;
			this->email_txtbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->email_txtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_txtbox->ForeColor = System::Drawing::Color::White;
			this->email_txtbox->Location = System::Drawing::Point(458, 334);
			this->email_txtbox->Multiline = true;
			this->email_txtbox->Name = L"email_txtbox";
			this->email_txtbox->Size = System::Drawing::Size(281, 31);
			this->email_txtbox->TabIndex = 15;
			// 
			// error_lbl_signup
			// 
			this->error_lbl_signup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->error_lbl_signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error_lbl_signup->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->error_lbl_signup->Location = System::Drawing::Point(459, 626);
			this->error_lbl_signup->Name = L"error_lbl_signup";
			this->error_lbl_signup->Size = System::Drawing::Size(517, 21);
			this->error_lbl_signup->TabIndex = 14;
			// 
			// login_lnkLbl
			// 
			this->login_lnkLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_lnkLbl->ForeColor = System::Drawing::Color::Transparent;
			this->login_lnkLbl->LinkColor = System::Drawing::Color::Transparent;
			this->login_lnkLbl->Location = System::Drawing::Point(458, 553);
			this->login_lnkLbl->Name = L"login_lnkLbl";
			this->login_lnkLbl->Size = System::Drawing::Size(372, 23);
			this->login_lnkLbl->TabIndex = 13;
			this->login_lnkLbl->TabStop = true;
			this->login_lnkLbl->Text = L"Already have an account\? Log In";
			this->login_lnkLbl->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CSN::login_lnkLbl_LinkClicked);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(203, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(249, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Age : ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(203, 202);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Password : ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(203, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Username : ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// age_txtbox
			// 
			this->age_txtbox->BackColor = System::Drawing::Color::Black;
			this->age_txtbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->age_txtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age_txtbox->ForeColor = System::Drawing::Color::White;
			this->age_txtbox->Location = System::Drawing::Point(458, 287);
			this->age_txtbox->Multiline = true;
			this->age_txtbox->Name = L"age_txtbox";
			this->age_txtbox->Size = System::Drawing::Size(153, 31);
			this->age_txtbox->TabIndex = 2;
			// 
			// pass_txtbox
			// 
			this->pass_txtbox->BackColor = System::Drawing::Color::Black;
			this->pass_txtbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pass_txtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_txtbox->ForeColor = System::Drawing::Color::White;
			this->pass_txtbox->Location = System::Drawing::Point(458, 200);
			this->pass_txtbox->Multiline = true;
			this->pass_txtbox->Name = L"pass_txtbox";
			this->pass_txtbox->PasswordChar = '*';
			this->pass_txtbox->Size = System::Drawing::Size(372, 31);
			this->pass_txtbox->TabIndex = 1;
			// 
			// username_txtbox
			// 
			this->username_txtbox->BackColor = System::Drawing::Color::Black;
			this->username_txtbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->username_txtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_txtbox->ForeColor = System::Drawing::Color::White;
			this->username_txtbox->Location = System::Drawing::Point(458, 153);
			this->username_txtbox->Multiline = true;
			this->username_txtbox->Name = L"username_txtbox";
			this->username_txtbox->Size = System::Drawing::Size(265, 31);
			this->username_txtbox->TabIndex = 0;
			// 
			// home_panel
			// 
			this->home_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->home_panel->BackColor = System::Drawing::Color::Black;
			this->home_panel->Controls->Add(this->NewsList);
			this->home_panel->Controls->Add(this->search_txtBox);
			this->home_panel->Controls->Add(this->panel1);
			this->home_panel->Controls->Add(this->panel_addnews);
			this->home_panel->Controls->Add(this->panel_trend);
			this->home_panel->Controls->Add(this->panel_news);
			this->home_panel->Location = System::Drawing::Point(0, -2);
			this->home_panel->Name = L"home_panel";
			this->home_panel->Size = System::Drawing::Size(1853, 813);
			this->home_panel->TabIndex = 4;
			this->home_panel->Visible = false;
			// 
			// NewsList
			// 
			this->NewsList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->NewsList->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewsList->ForeColor = System::Drawing::Color::White;
			this->NewsList->FormattingEnabled = true;
			this->NewsList->ItemHeight = 20;
			this->NewsList->Location = System::Drawing::Point(428, 72);
			this->NewsList->Name = L"NewsList";
			this->NewsList->Size = System::Drawing::Size(1227, 104);
			this->NewsList->TabIndex = 42;
			this->NewsList->Visible = false;
			this->NewsList->Click += gcnew System::EventHandler(this, &CSN::NewsList_Click);
			this->NewsList->SelectedValueChanged += gcnew System::EventHandler(this, &CSN::NewsList_SelectedValueChanged);
			// 
			// search_txtBox
			// 
			this->search_txtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->search_txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_txtBox->ForeColor = System::Drawing::Color::White;
			this->search_txtBox->Location = System::Drawing::Point(428, 40);
			this->search_txtBox->Multiline = true;
			this->search_txtBox->Name = L"search_txtBox";
			this->search_txtBox->Size = System::Drawing::Size(1227, 34);
			this->search_txtBox->TabIndex = 40;
			this->search_txtBox->TextChanged += gcnew System::EventHandler(this, &CSN::search_txtBox_TextChanged);
			this->search_txtBox->Enter += gcnew System::EventHandler(this, &CSN::search_txtBox_Enter);
			this->search_txtBox->Leave += gcnew System::EventHandler(this, &CSN::search_txtBox_Leave);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->panel1->Controls->Add(this->flowLayoutPanel2);
			this->panel1->Controls->Add(this->activepic);
			this->panel1->Controls->Add(this->activerole_lbl);
			this->panel1->Controls->Add(this->activeid_lbl);
			this->panel1->Controls->Add(this->activeuser_lbl);
			this->panel1->Controls->Add(this->logout_btn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(258, 813);
			this->panel1->TabIndex = 0;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->gotopostnews_btn);
			this->flowLayoutPanel2->Controls->Add(this->gotonews_btn);
			this->flowLayoutPanel2->Controls->Add(this->favcategoryuser_btn);
			this->flowLayoutPanel2->Controls->Add(this->trend_btn);
			this->flowLayoutPanel2->Location = System::Drawing::Point(6, 368);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(255, 171);
			this->flowLayoutPanel2->TabIndex = 52;
			// 
			// gotopostnews_btn
			// 
			this->gotopostnews_btn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->gotopostnews_btn->BackColor = System::Drawing::Color::Black;
			this->gotopostnews_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gotopostnews_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gotopostnews_btn->ForeColor = System::Drawing::Color::White;
			this->gotopostnews_btn->Location = System::Drawing::Point(3, 3);
			this->gotopostnews_btn->Name = L"gotopostnews_btn";
			this->gotopostnews_btn->Size = System::Drawing::Size(249, 37);
			this->gotopostnews_btn->TabIndex = 0;
			this->gotopostnews_btn->Text = L"Post News";
			this->gotopostnews_btn->UseVisualStyleBackColor = false;
			this->gotopostnews_btn->Visible = false;
			this->gotopostnews_btn->Click += gcnew System::EventHandler(this, &CSN::gotopostnews_btn_Click);
			// 
			// gotonews_btn
			// 
			this->gotonews_btn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->gotonews_btn->BackColor = System::Drawing::Color::Black;
			this->gotonews_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gotonews_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gotonews_btn->ForeColor = System::Drawing::Color::White;
			this->gotonews_btn->Location = System::Drawing::Point(3, 46);
			this->gotonews_btn->Name = L"gotonews_btn";
			this->gotonews_btn->Size = System::Drawing::Size(249, 37);
			this->gotonews_btn->TabIndex = 9;
			this->gotonews_btn->Text = L"News";
			this->gotonews_btn->UseVisualStyleBackColor = false;
			this->gotonews_btn->Click += gcnew System::EventHandler(this, &CSN::gotonews_btn_Click);
			// 
			// favcategoryuser_btn
			// 
			this->favcategoryuser_btn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->favcategoryuser_btn->BackColor = System::Drawing::Color::Black;
			this->favcategoryuser_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->favcategoryuser_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->favcategoryuser_btn->ForeColor = System::Drawing::Color::White;
			this->favcategoryuser_btn->Location = System::Drawing::Point(3, 89);
			this->favcategoryuser_btn->Name = L"favcategoryuser_btn";
			this->favcategoryuser_btn->Size = System::Drawing::Size(249, 37);
			this->favcategoryuser_btn->TabIndex = 11;
			this->favcategoryuser_btn->Text = L"My Favourites";
			this->favcategoryuser_btn->UseVisualStyleBackColor = false;
			this->favcategoryuser_btn->Visible = false;
			this->favcategoryuser_btn->Click += gcnew System::EventHandler(this, &CSN::favcategoryuser_btn_Click);
			// 
			// trend_btn
			// 
			this->trend_btn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->trend_btn->BackColor = System::Drawing::Color::Black;
			this->trend_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->trend_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trend_btn->ForeColor = System::Drawing::Color::White;
			this->trend_btn->Location = System::Drawing::Point(3, 132);
			this->trend_btn->Name = L"trend_btn";
			this->trend_btn->Size = System::Drawing::Size(249, 37);
			this->trend_btn->TabIndex = 12;
			this->trend_btn->Text = L"Trending News";
			this->trend_btn->UseVisualStyleBackColor = false;
			this->trend_btn->Visible = false;
			this->trend_btn->Click += gcnew System::EventHandler(this, &CSN::trend_btn_Click);
			// 
			// activepic
			// 
			this->activepic->BackColor = System::Drawing::Color::Black;
			this->activepic->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->activepic->Location = System::Drawing::Point(21, 12);
			this->activepic->Name = L"activepic";
			this->activepic->Size = System::Drawing::Size(99, 104);
			this->activepic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->activepic->TabIndex = 10;
			this->activepic->TabStop = false;
			// 
			// activerole_lbl
			// 
			this->activerole_lbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->activerole_lbl->BackColor = System::Drawing::Color::Black;
			this->activerole_lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->activerole_lbl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->activerole_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->activerole_lbl->ForeColor = System::Drawing::Color::White;
			this->activerole_lbl->Location = System::Drawing::Point(19, 205);
			this->activerole_lbl->Margin = System::Windows::Forms::Padding(30, 0, 30, 0);
			this->activerole_lbl->Name = L"activerole_lbl";
			this->activerole_lbl->Size = System::Drawing::Size(161, 24);
			this->activerole_lbl->TabIndex = 6;
			this->activerole_lbl->Text = L"role";
			this->activerole_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// activeid_lbl
			// 
			this->activeid_lbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->activeid_lbl->BackColor = System::Drawing::Color::Black;
			this->activeid_lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->activeid_lbl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->activeid_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->activeid_lbl->ForeColor = System::Drawing::Color::White;
			this->activeid_lbl->Location = System::Drawing::Point(19, 168);
			this->activeid_lbl->Margin = System::Windows::Forms::Padding(30, 0, 30, 0);
			this->activeid_lbl->Name = L"activeid_lbl";
			this->activeid_lbl->Size = System::Drawing::Size(83, 24);
			this->activeid_lbl->TabIndex = 5;
			this->activeid_lbl->Text = L"id";
			this->activeid_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// activeuser_lbl
			// 
			this->activeuser_lbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->activeuser_lbl->BackColor = System::Drawing::Color::Black;
			this->activeuser_lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->activeuser_lbl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->activeuser_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->activeuser_lbl->ForeColor = System::Drawing::Color::White;
			this->activeuser_lbl->Location = System::Drawing::Point(19, 133);
			this->activeuser_lbl->Margin = System::Windows::Forms::Padding(30, 0, 30, 0);
			this->activeuser_lbl->Name = L"activeuser_lbl";
			this->activeuser_lbl->Size = System::Drawing::Size(221, 24);
			this->activeuser_lbl->TabIndex = 4;
			this->activeuser_lbl->Text = L"username";
			this->activeuser_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// logout_btn
			// 
			this->logout_btn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->logout_btn->BackColor = System::Drawing::Color::Black;
			this->logout_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logout_btn->ForeColor = System::Drawing::Color::White;
			this->logout_btn->Location = System::Drawing::Point(1, 764);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(249, 35);
			this->logout_btn->TabIndex = 3;
			this->logout_btn->Text = L"Log out";
			this->logout_btn->UseVisualStyleBackColor = false;
			this->logout_btn->Click += gcnew System::EventHandler(this, &CSN::logout_btn_Click);
			// 
			// panel_addnews
			// 
			this->panel_addnews->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_addnews->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->panel_addnews->Controls->Add(this->flowLayoutPanel3);
			this->panel_addnews->Controls->Add(this->flowLayoutPanel1);
			this->panel_addnews->Controls->Add(this->panel_star);
			this->panel_addnews->Controls->Add(this->showrate_lbl);
			this->panel_addnews->Controls->Add(this->button24);
			this->panel_addnews->Controls->Add(this->button23);
			this->panel_addnews->Controls->Add(this->button21);
			this->panel_addnews->Controls->Add(this->button20);
			this->panel_addnews->Controls->Add(this->button19);
			this->panel_addnews->Controls->Add(this->button18);
			this->panel_addnews->Controls->Add(this->textBoxYear);
			this->panel_addnews->Controls->Add(this->textBoxMonth);
			this->panel_addnews->Controls->Add(this->label11);
			this->panel_addnews->Controls->Add(this->label10);
			this->panel_addnews->Controls->Add(this->label5);
			this->panel_addnews->Controls->Add(this->label4);
			this->panel_addnews->Controls->Add(this->description_txtBox);
			this->panel_addnews->Controls->Add(this->textBoxDay);
			this->panel_addnews->Controls->Add(this->title_txtBox);
			this->panel_addnews->Controls->Add(this->button26);
			this->panel_addnews->Controls->Add(this->category_comboBox);
			this->panel_addnews->Controls->Add(this->category_txtBox);
			this->panel_addnews->Location = System::Drawing::Point(264, -9);
			this->panel_addnews->Name = L"panel_addnews";
			this->panel_addnews->Size = System::Drawing::Size(1583, 822);
			this->panel_addnews->TabIndex = 0;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->addcategory_btn);
			this->flowLayoutPanel3->Controls->Add(this->addcat);
			this->flowLayoutPanel3->Location = System::Drawing::Point(967, 304);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(366, 44);
			this->flowLayoutPanel3->TabIndex = 52;
			// 
			// addcategory_btn
			// 
			this->addcategory_btn->BackColor = System::Drawing::Color::Black;
			this->addcategory_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addcategory_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addcategory_btn->ForeColor = System::Drawing::Color::White;
			this->addcategory_btn->Location = System::Drawing::Point(3, 3);
			this->addcategory_btn->Name = L"addcategory_btn";
			this->addcategory_btn->Size = System::Drawing::Size(175, 35);
			this->addcategory_btn->TabIndex = 39;
			this->addcategory_btn->Text = L"Add Category";
			this->addcategory_btn->UseVisualStyleBackColor = false;
			this->addcategory_btn->Click += gcnew System::EventHandler(this, &CSN::addcategory_btn_Click);
			// 
			// addcat
			// 
			this->addcat->BackColor = System::Drawing::Color::Black;
			this->addcat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addcat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addcat->ForeColor = System::Drawing::Color::White;
			this->addcat->Location = System::Drawing::Point(184, 3);
			this->addcat->Name = L"addcat";
			this->addcat->Size = System::Drawing::Size(175, 34);
			this->addcat->TabIndex = 49;
			this->addcat->Text = L"Add";
			this->addcat->UseVisualStyleBackColor = false;
			this->addcat->Click += gcnew System::EventHandler(this, &CSN::addcat_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->rate_btn);
			this->flowLayoutPanel1->Controls->Add(this->like_btn);
			this->flowLayoutPanel1->Controls->Add(this->addnews_btn);
			this->flowLayoutPanel1->Controls->Add(this->deletenews_btn);
			this->flowLayoutPanel1->Controls->Add(this->udatenews_btn);
			this->flowLayoutPanel1->Location = System::Drawing::Point(569, 593);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(584, 172);
			this->flowLayoutPanel1->TabIndex = 51;
			// 
			// rate_btn
			// 
			this->rate_btn->BackColor = System::Drawing::Color::Black;
			this->rate_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rate_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rate_btn->ForeColor = System::Drawing::Color::White;
			this->rate_btn->Location = System::Drawing::Point(3, 3);
			this->rate_btn->Name = L"rate_btn";
			this->rate_btn->Size = System::Drawing::Size(299, 35);
			this->rate_btn->TabIndex = 37;
			this->rate_btn->Text = L"Rate";
			this->rate_btn->UseVisualStyleBackColor = false;
			this->rate_btn->Visible = false;
			this->rate_btn->Click += gcnew System::EventHandler(this, &CSN::rate_btn_Click);
			// 
			// like_btn
			// 
			this->like_btn->BackColor = System::Drawing::Color::Black;
			this->like_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->like_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->like_btn->ForeColor = System::Drawing::Color::White;
			this->like_btn->Location = System::Drawing::Point(308, 3);
			this->like_btn->Name = L"like_btn";
			this->like_btn->Size = System::Drawing::Size(266, 35);
			this->like_btn->TabIndex = 38;
			this->like_btn->Text = L"Like";
			this->like_btn->UseVisualStyleBackColor = false;
			this->like_btn->Visible = false;
			this->like_btn->Click += gcnew System::EventHandler(this, &CSN::like_btn_Click);
			// 
			// addnews_btn
			// 
			this->addnews_btn->BackColor = System::Drawing::Color::Black;
			this->addnews_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addnews_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addnews_btn->ForeColor = System::Drawing::Color::White;
			this->addnews_btn->Location = System::Drawing::Point(3, 44);
			this->addnews_btn->Name = L"addnews_btn";
			this->addnews_btn->Size = System::Drawing::Size(571, 37);
			this->addnews_btn->TabIndex = 4;
			this->addnews_btn->Text = L"Post";
			this->addnews_btn->UseVisualStyleBackColor = false;
			this->addnews_btn->Click += gcnew System::EventHandler(this, &CSN::addnews_btn_Click);
			// 
			// deletenews_btn
			// 
			this->deletenews_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->deletenews_btn->BackColor = System::Drawing::Color::Black;
			this->deletenews_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deletenews_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletenews_btn->ForeColor = System::Drawing::Color::White;
			this->deletenews_btn->Location = System::Drawing::Point(3, 87);
			this->deletenews_btn->Name = L"deletenews_btn";
			this->deletenews_btn->Size = System::Drawing::Size(571, 37);
			this->deletenews_btn->TabIndex = 33;
			this->deletenews_btn->Text = L"Delete";
			this->deletenews_btn->UseVisualStyleBackColor = false;
			this->deletenews_btn->Click += gcnew System::EventHandler(this, &CSN::deletenews_btn_Click);
			// 
			// udatenews_btn
			// 
			this->udatenews_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->udatenews_btn->BackColor = System::Drawing::Color::Black;
			this->udatenews_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->udatenews_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->udatenews_btn->ForeColor = System::Drawing::Color::White;
			this->udatenews_btn->Location = System::Drawing::Point(3, 130);
			this->udatenews_btn->Name = L"udatenews_btn";
			this->udatenews_btn->Size = System::Drawing::Size(571, 37);
			this->udatenews_btn->TabIndex = 34;
			this->udatenews_btn->Text = L"Update";
			this->udatenews_btn->UseVisualStyleBackColor = false;
			this->udatenews_btn->Click += gcnew System::EventHandler(this, &CSN::udatenews_btn_Click);
			// 
			// panel_star
			// 
			this->panel_star->Controls->Add(this->s5);
			this->panel_star->Controls->Add(this->s1);
			this->panel_star->Controls->Add(this->s4);
			this->panel_star->Controls->Add(this->s2);
			this->panel_star->Controls->Add(this->s3);
			this->panel_star->Location = System::Drawing::Point(177, 319);
			this->panel_star->Name = L"panel_star";
			this->panel_star->Size = System::Drawing::Size(190, 48);
			this->panel_star->TabIndex = 48;
			this->panel_star->Visible = false;
			// 
			// s5
			// 
			this->s5->BackColor = System::Drawing::Color::Gray;
			this->s5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->s5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->s5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s5->ForeColor = System::Drawing::Color::White;
			this->s5->Location = System::Drawing::Point(157, 1);
			this->s5->Margin = System::Windows::Forms::Padding(30, 0, 30, 0);
			this->s5->Name = L"s5";
			this->s5->Size = System::Drawing::Size(34, 44);
			this->s5->TabIndex = 47;
			this->s5->Text = L"☆";
			this->s5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->s5->Click += gcnew System::EventHandler(this, &CSN::s5_Click);
			// 
			// s1
			// 
			this->s1->BackColor = System::Drawing::Color::Gray;
			this->s1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->s1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->s1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s1->ForeColor = System::Drawing::Color::White;
			this->s1->Location = System::Drawing::Point(-1, 2);
			this->s1->Margin = System::Windows::Forms::Padding(30, 0, 30, 0);
			this->s1->Name = L"s1";
			this->s1->Size = System::Drawing::Size(34, 44);
			this->s1->TabIndex = 13;
			this->s1->Text = L"☆";
			this->s1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->s1->Click += gcnew System::EventHandler(this, &CSN::s1_Click);
			// 
			// s4
			// 
			this->s4->BackColor = System::Drawing::Color::Gray;
			this->s4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->s4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->s4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s4->ForeColor = System::Drawing::Color::White;
			this->s4->Location = System::Drawing::Point(117, 1);
			this->s4->Margin = System::Windows::Forms::Padding(30, 0, 30, 0);
			this->s4->Name = L"s4";
			this->s4->Size = System::Drawing::Size(34, 44);
			this->s4->TabIndex = 46;
			this->s4->Text = L"☆";
			this->s4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->s4->Click += gcnew System::EventHandler(this, &CSN::s4_Click);
			// 
			// s2
			// 
			this->s2->BackColor = System::Drawing::Color::Gray;
			this->s2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->s2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->s2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s2->ForeColor = System::Drawing::Color::White;
			this->s2->Location = System::Drawing::Point(37, 2);
			this->s2->Margin = System::Windows::Forms::Padding(30, 0, 30, 0);
			this->s2->Name = L"s2";
			this->s2->Size = System::Drawing::Size(34, 44);
			this->s2->TabIndex = 44;
			this->s2->Text = L"☆";
			this->s2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->s2->Click += gcnew System::EventHandler(this, &CSN::s2_Click);
			// 
			// s3
			// 
			this->s3->BackColor = System::Drawing::Color::Gray;
			this->s3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->s3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->s3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s3->ForeColor = System::Drawing::Color::White;
			this->s3->Location = System::Drawing::Point(77, 1);
			this->s3->Margin = System::Windows::Forms::Padding(30, 0, 30, 0);
			this->s3->Name = L"s3";
			this->s3->Size = System::Drawing::Size(34, 44);
			this->s3->TabIndex = 45;
			this->s3->Text = L"☆";
			this->s3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->s3->Click += gcnew System::EventHandler(this, &CSN::s3_Click);
			// 
			// showrate_lbl
			// 
			this->showrate_lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->showrate_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showrate_lbl->ForeColor = System::Drawing::Color::White;
			this->showrate_lbl->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showrate_lbl.Image")));
			this->showrate_lbl->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->showrate_lbl->Location = System::Drawing::Point(200, 202);
			this->showrate_lbl->Name = L"showrate_lbl";
			this->showrate_lbl->Size = System::Drawing::Size(137, 96);
			this->showrate_lbl->TabIndex = 43;
			this->showrate_lbl->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(1140, 371);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(3, 214);
			this->button24->TabIndex = 30;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::AliceBlue;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(574, 584);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(566, 3);
			this->button23->TabIndex = 29;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(795, 280);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(242, 3);
			this->button21->TabIndex = 27;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(637, 279);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(150, 3);
			this->button20->TabIndex = 26;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(574, 279);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(56, 3);
			this->button19->TabIndex = 25;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(574, 234);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(388, 3);
			this->button18->TabIndex = 24;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// textBoxYear
			// 
			this->textBoxYear->BackColor = System::Drawing::Color::Black;
			this->textBoxYear->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxYear->ForeColor = System::Drawing::Color::White;
			this->textBoxYear->Location = System::Drawing::Point(795, 248);
			this->textBoxYear->Multiline = true;
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(242, 33);
			this->textBoxYear->TabIndex = 14;
			// 
			// textBoxMonth
			// 
			this->textBoxMonth->BackColor = System::Drawing::Color::Black;
			this->textBoxMonth->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMonth->ForeColor = System::Drawing::Color::White;
			this->textBoxMonth->Location = System::Drawing::Point(637, 247);
			this->textBoxMonth->Multiline = true;
			this->textBoxMonth->Name = L"textBoxMonth";
			this->textBoxMonth->Size = System::Drawing::Size(150, 33);
			this->textBoxMonth->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(409, 372);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 33);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Description : ";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(423, 290);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 63);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Category : ";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(423, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 33);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Date : ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(423, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 33);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Title : ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// description_txtBox
			// 
			this->description_txtBox->BackColor = System::Drawing::Color::Black;
			this->description_txtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->description_txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->description_txtBox->ForeColor = System::Drawing::Color::White;
			this->description_txtBox->Location = System::Drawing::Point(574, 372);
			this->description_txtBox->Multiline = true;
			this->description_txtBox->Name = L"description_txtBox";
			this->description_txtBox->Size = System::Drawing::Size(566, 213);
			this->description_txtBox->TabIndex = 8;
			// 
			// textBoxDay
			// 
			this->textBoxDay->BackColor = System::Drawing::Color::Black;
			this->textBoxDay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDay->ForeColor = System::Drawing::Color::White;
			this->textBoxDay->Location = System::Drawing::Point(574, 247);
			this->textBoxDay->Multiline = true;
			this->textBoxDay->Name = L"textBoxDay";
			this->textBoxDay->Size = System::Drawing::Size(56, 33);
			this->textBoxDay->TabIndex = 6;
			// 
			// title_txtBox
			// 
			this->title_txtBox->BackColor = System::Drawing::Color::Black;
			this->title_txtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->title_txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_txtBox->ForeColor = System::Drawing::Color::White;
			this->title_txtBox->Location = System::Drawing::Point(574, 202);
			this->title_txtBox->Multiline = true;
			this->title_txtBox->Name = L"title_txtBox";
			this->title_txtBox->Size = System::Drawing::Size(387, 33);
			this->title_txtBox->TabIndex = 5;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(574, 336);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(388, 3);
			this->button26->TabIndex = 36;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// category_comboBox
			// 
			this->category_comboBox->BackColor = System::Drawing::Color::Black;
			this->category_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->category_comboBox->ForeColor = System::Drawing::Color::White;
			this->category_comboBox->ItemHeight = 20;
			this->category_comboBox->Location = System::Drawing::Point(574, 309);
			this->category_comboBox->Name = L"category_comboBox";
			this->category_comboBox->Size = System::Drawing::Size(387, 28);
			this->category_comboBox->Sorted = true;
			this->category_comboBox->TabIndex = 31;
			// 
			// category_txtBox
			// 
			this->category_txtBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->category_txtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->category_txtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->category_txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->category_txtBox->ForeColor = System::Drawing::Color::White;
			this->category_txtBox->Location = System::Drawing::Point(574, 304);
			this->category_txtBox->Multiline = true;
			this->category_txtBox->Name = L"category_txtBox";
			this->category_txtBox->Size = System::Drawing::Size(387, 33);
			this->category_txtBox->TabIndex = 35;
			this->category_txtBox->WordWrap = false;
			// 
			// panel_trend
			// 
			this->panel_trend->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_trend->AutoScroll = true;
			this->panel_trend->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->panel_trend->Controls->Add(this->star1);
			this->panel_trend->Controls->Add(this->star9);
			this->panel_trend->Controls->Add(this->star8);
			this->panel_trend->Controls->Add(this->star7);
			this->panel_trend->Controls->Add(this->star6);
			this->panel_trend->Controls->Add(this->star5);
			this->panel_trend->Controls->Add(this->star4);
			this->panel_trend->Controls->Add(this->star3);
			this->panel_trend->Controls->Add(this->star2);
			this->panel_trend->Controls->Add(this->label13);
			this->panel_trend->Controls->Add(this->label17);
			this->panel_trend->Controls->Add(this->label18);
			this->panel_trend->Controls->Add(this->label8);
			this->panel_trend->Controls->Add(this->label9);
			this->panel_trend->Controls->Add(this->label12);
			this->panel_trend->Controls->Add(this->label7);
			this->panel_trend->Controls->Add(this->label6);
			this->panel_trend->Controls->Add(this->trend9);
			this->panel_trend->Controls->Add(this->trend5);
			this->panel_trend->Controls->Add(this->trend2);
			this->panel_trend->Controls->Add(this->trend8);
			this->panel_trend->Controls->Add(this->label28);
			this->panel_trend->Controls->Add(this->trend7);
			this->panel_trend->Controls->Add(this->trend1);
			this->panel_trend->Controls->Add(this->trend6);
			this->panel_trend->Controls->Add(this->trend3);
			this->panel_trend->Controls->Add(this->trend4);
			this->panel_trend->Location = System::Drawing::Point(266, 0);
			this->panel_trend->Name = L"panel_trend";
			this->panel_trend->Size = System::Drawing::Size(1591, 813);
			this->panel_trend->TabIndex = 56;
			this->panel_trend->Visible = false;
			// 
			// star1
			// 
			this->star1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->star1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->star1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->star1->ForeColor = System::Drawing::Color::White;
			this->star1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->star1->Location = System::Drawing::Point(56, 55);
			this->star1->Name = L"star1";
			this->star1->Size = System::Drawing::Size(100, 30);
			this->star1->TabIndex = 64;
			this->star1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// star9
			// 
			this->star9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->star9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->star9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->star9->ForeColor = System::Drawing::Color::White;
			this->star9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->star9->Location = System::Drawing::Point(1096, 529);
			this->star9->Name = L"star9";
			this->star9->Size = System::Drawing::Size(100, 30);
			this->star9->TabIndex = 72;
			this->star9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// star8
			// 
			this->star8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->star8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->star8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->star8->ForeColor = System::Drawing::Color::White;
			this->star8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->star8->Location = System::Drawing::Point(1096, 291);
			this->star8->Name = L"star8";
			this->star8->Size = System::Drawing::Size(100, 30);
			this->star8->TabIndex = 71;
			this->star8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// star7
			// 
			this->star7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->star7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->star7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->star7->ForeColor = System::Drawing::Color::White;
			this->star7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->star7->Location = System::Drawing::Point(1096, 55);
			this->star7->Name = L"star7";
			this->star7->Size = System::Drawing::Size(100, 30);
			this->star7->TabIndex = 70;
			this->star7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// star6
			// 
			this->star6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->star6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->star6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->star6->ForeColor = System::Drawing::Color::White;
			this->star6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->star6->Location = System::Drawing::Point(574, 529);
			this->star6->Name = L"star6";
			this->star6->Size = System::Drawing::Size(100, 30);
			this->star6->TabIndex = 69;
			this->star6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// star5
			// 
			this->star5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->star5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->star5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->star5->ForeColor = System::Drawing::Color::White;
			this->star5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->star5->Location = System::Drawing::Point(574, 291);
			this->star5->Name = L"star5";
			this->star5->Size = System::Drawing::Size(100, 30);
			this->star5->TabIndex = 68;
			this->star5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// star4
			// 
			this->star4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->star4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->star4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->star4->ForeColor = System::Drawing::Color::White;
			this->star4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->star4->Location = System::Drawing::Point(574, 55);
			this->star4->Name = L"star4";
			this->star4->Size = System::Drawing::Size(100, 30);
			this->star4->TabIndex = 67;
			this->star4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// star3
			// 
			this->star3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->star3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->star3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->star3->ForeColor = System::Drawing::Color::White;
			this->star3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->star3->Location = System::Drawing::Point(56, 529);
			this->star3->Name = L"star3";
			this->star3->Size = System::Drawing::Size(100, 30);
			this->star3->TabIndex = 66;
			this->star3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// star2
			// 
			this->star2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->star2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->star2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->star2->ForeColor = System::Drawing::Color::White;
			this->star2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->star2->Location = System::Drawing::Point(56, 293);
			this->star2->Name = L"star2";
			this->star2->Size = System::Drawing::Size(100, 30);
			this->star2->TabIndex = 65;
			this->star2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label13->BackColor = System::Drawing::Color::Black;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(1056, 529);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 91);
			this->label13->TabIndex = 63;
			this->label13->Text = L"9 th";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label17->BackColor = System::Drawing::Color::Black;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(534, 529);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(34, 91);
			this->label17->TabIndex = 62;
			this->label17->Text = L"6\r\nth";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(16, 529);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 91);
			this->label18->TabIndex = 61;
			this->label18->Text = L"3 rd";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(1056, 291);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 91);
			this->label8->TabIndex = 60;
			this->label8->Text = L"8 th";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label9->BackColor = System::Drawing::Color::Black;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(534, 291);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 91);
			this->label9->TabIndex = 59;
			this->label9->Text = L"5 th";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label12->BackColor = System::Drawing::Color::Maroon;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(16, 293);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 91);
			this->label12->TabIndex = 58;
			this->label12->Text = L"2 nd";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(1056, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 91);
			this->label7->TabIndex = 57;
			this->label7->Text = L"7 th";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(534, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 91);
			this->label6->TabIndex = 56;
			this->label6->Text = L"4 th";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trend9
			// 
			this->trend9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->trend9->BackColor = System::Drawing::Color::Black;
			this->trend9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->trend9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trend9->ForeColor = System::Drawing::Color::White;
			this->trend9->Location = System::Drawing::Point(1096, 529);
			this->trend9->Name = L"trend9";
			this->trend9->Size = System::Drawing::Size(468, 225);
			this->trend9->TabIndex = 55;
			this->trend9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trend5
			// 
			this->trend5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->trend5->BackColor = System::Drawing::Color::Black;
			this->trend5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->trend5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trend5->ForeColor = System::Drawing::Color::White;
			this->trend5->Location = System::Drawing::Point(574, 291);
			this->trend5->Name = L"trend5";
			this->trend5->Size = System::Drawing::Size(468, 225);
			this->trend5->TabIndex = 42;
			this->trend5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trend2
			// 
			this->trend2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->trend2->BackColor = System::Drawing::Color::Black;
			this->trend2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->trend2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trend2->ForeColor = System::Drawing::Color::White;
			this->trend2->Location = System::Drawing::Point(56, 293);
			this->trend2->Name = L"trend2";
			this->trend2->Size = System::Drawing::Size(468, 225);
			this->trend2->TabIndex = 41;
			this->trend2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trend8
			// 
			this->trend8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->trend8->BackColor = System::Drawing::Color::Black;
			this->trend8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->trend8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trend8->ForeColor = System::Drawing::Color::White;
			this->trend8->Location = System::Drawing::Point(1096, 291);
			this->trend8->Name = L"trend8";
			this->trend8->Size = System::Drawing::Size(468, 225);
			this->trend8->TabIndex = 29;
			this->trend8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(16, 55);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(34, 91);
			this->label28->TabIndex = 28;
			this->label28->Text = L"1\r\nst";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trend7
			// 
			this->trend7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->trend7->BackColor = System::Drawing::Color::Black;
			this->trend7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->trend7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trend7->ForeColor = System::Drawing::Color::White;
			this->trend7->Location = System::Drawing::Point(1096, 55);
			this->trend7->Name = L"trend7";
			this->trend7->Size = System::Drawing::Size(468, 225);
			this->trend7->TabIndex = 27;
			this->trend7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trend1
			// 
			this->trend1->AllowDrop = true;
			this->trend1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->trend1->BackColor = System::Drawing::Color::Black;
			this->trend1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->trend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trend1->ForeColor = System::Drawing::Color::White;
			this->trend1->Location = System::Drawing::Point(56, 55);
			this->trend1->Name = L"trend1";
			this->trend1->Size = System::Drawing::Size(468, 225);
			this->trend1->TabIndex = 25;
			this->trend1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trend6
			// 
			this->trend6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->trend6->BackColor = System::Drawing::Color::Black;
			this->trend6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->trend6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trend6->ForeColor = System::Drawing::Color::White;
			this->trend6->Location = System::Drawing::Point(574, 529);
			this->trend6->Name = L"trend6";
			this->trend6->Size = System::Drawing::Size(468, 225);
			this->trend6->TabIndex = 21;
			this->trend6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trend3
			// 
			this->trend3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->trend3->BackColor = System::Drawing::Color::Black;
			this->trend3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->trend3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trend3->ForeColor = System::Drawing::Color::White;
			this->trend3->Location = System::Drawing::Point(56, 529);
			this->trend3->Name = L"trend3";
			this->trend3->Size = System::Drawing::Size(468, 225);
			this->trend3->TabIndex = 20;
			this->trend3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trend4
			// 
			this->trend4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->trend4->BackColor = System::Drawing::Color::Black;
			this->trend4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->trend4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trend4->ForeColor = System::Drawing::Color::White;
			this->trend4->Location = System::Drawing::Point(574, 55);
			this->trend4->Name = L"trend4";
			this->trend4->Size = System::Drawing::Size(468, 225);
			this->trend4->TabIndex = 26;
			this->trend4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_news
			// 
			this->panel_news->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_news->AutoScroll = true;
			this->panel_news->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->panel_news->Controls->Add(this->panel3);
			this->panel_news->Controls->Add(this->n15);
			this->panel_news->Controls->Add(this->n16);
			this->panel_news->Controls->Add(this->n17);
			this->panel_news->Controls->Add(this->n14);
			this->panel_news->Controls->Add(this->n13);
			this->panel_news->Controls->Add(this->n18);
			this->panel_news->Controls->Add(this->n5);
			this->panel_news->Controls->Add(this->n12);
			this->panel_news->Controls->Add(this->n11);
			this->panel_news->Controls->Add(this->n10);
			this->panel_news->Controls->Add(this->n9);
			this->panel_news->Controls->Add(this->n8);
			this->panel_news->Controls->Add(this->n7);
			this->panel_news->Controls->Add(this->n6);
			this->panel_news->Controls->Add(this->n4);
			this->panel_news->Controls->Add(this->n3);
			this->panel_news->Controls->Add(this->n2);
			this->panel_news->Controls->Add(this->n1);
			this->panel_news->Location = System::Drawing::Point(266, 0);
			this->panel_news->Name = L"panel_news";
			this->panel_news->Size = System::Drawing::Size(1591, 813);
			this->panel_news->TabIndex = 34;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel3->Controls->Add(this->home_cat8);
			this->panel3->Controls->Add(this->home_cat1);
			this->panel3->Controls->Add(this->home_cat2);
			this->panel3->Controls->Add(this->home_cat7);
			this->panel3->Controls->Add(this->home_cat3);
			this->panel3->Controls->Add(this->home_cat6);
			this->panel3->Controls->Add(this->home_cat4);
			this->panel3->Controls->Add(this->home_cat5);
			this->panel3->Location = System::Drawing::Point(0, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1592, 36);
			this->panel3->TabIndex = 52;
			// 
			// home_cat8
			// 
			this->home_cat8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->home_cat8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->home_cat8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->home_cat8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_cat8->ForeColor = System::Drawing::Color::White;
			this->home_cat8->Location = System::Drawing::Point(1378, -1);
			this->home_cat8->Name = L"home_cat8";
			this->home_cat8->Size = System::Drawing::Size(198, 37);
			this->home_cat8->TabIndex = 51;
			this->home_cat8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->home_cat8->Click += gcnew System::EventHandler(this, &CSN::home_cat8_Click);
			// 
			// home_cat1
			// 
			this->home_cat1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->home_cat1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->home_cat1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->home_cat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_cat1->ForeColor = System::Drawing::Color::White;
			this->home_cat1->Location = System::Drawing::Point(-8, -1);
			this->home_cat1->Name = L"home_cat1";
			this->home_cat1->Size = System::Drawing::Size(198, 37);
			this->home_cat1->TabIndex = 44;
			this->home_cat1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->home_cat1->Click += gcnew System::EventHandler(this, &CSN::home_cat1_Click);
			// 
			// home_cat2
			// 
			this->home_cat2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->home_cat2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->home_cat2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->home_cat2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_cat2->ForeColor = System::Drawing::Color::White;
			this->home_cat2->Location = System::Drawing::Point(190, -1);
			this->home_cat2->Name = L"home_cat2";
			this->home_cat2->Size = System::Drawing::Size(198, 37);
			this->home_cat2->TabIndex = 45;
			this->home_cat2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->home_cat2->Click += gcnew System::EventHandler(this, &CSN::home_cat2_Click);
			// 
			// home_cat7
			// 
			this->home_cat7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->home_cat7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->home_cat7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->home_cat7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_cat7->ForeColor = System::Drawing::Color::White;
			this->home_cat7->Location = System::Drawing::Point(1180, -1);
			this->home_cat7->Name = L"home_cat7";
			this->home_cat7->Size = System::Drawing::Size(198, 37);
			this->home_cat7->TabIndex = 50;
			this->home_cat7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->home_cat7->Click += gcnew System::EventHandler(this, &CSN::home_cat7_Click);
			// 
			// home_cat3
			// 
			this->home_cat3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->home_cat3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->home_cat3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->home_cat3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_cat3->ForeColor = System::Drawing::Color::White;
			this->home_cat3->Location = System::Drawing::Point(388, -1);
			this->home_cat3->Name = L"home_cat3";
			this->home_cat3->Size = System::Drawing::Size(198, 37);
			this->home_cat3->TabIndex = 46;
			this->home_cat3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->home_cat3->Click += gcnew System::EventHandler(this, &CSN::home_cat3_Click);
			// 
			// home_cat6
			// 
			this->home_cat6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->home_cat6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->home_cat6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->home_cat6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_cat6->ForeColor = System::Drawing::Color::White;
			this->home_cat6->Location = System::Drawing::Point(982, -1);
			this->home_cat6->Name = L"home_cat6";
			this->home_cat6->Size = System::Drawing::Size(198, 37);
			this->home_cat6->TabIndex = 49;
			this->home_cat6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->home_cat6->Click += gcnew System::EventHandler(this, &CSN::home_cat6_Click);
			// 
			// home_cat4
			// 
			this->home_cat4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->home_cat4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->home_cat4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->home_cat4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_cat4->ForeColor = System::Drawing::Color::White;
			this->home_cat4->Location = System::Drawing::Point(586, -1);
			this->home_cat4->Name = L"home_cat4";
			this->home_cat4->Size = System::Drawing::Size(198, 37);
			this->home_cat4->TabIndex = 47;
			this->home_cat4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->home_cat4->Click += gcnew System::EventHandler(this, &CSN::home_cat4_Click);
			// 
			// home_cat5
			// 
			this->home_cat5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->home_cat5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->home_cat5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->home_cat5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_cat5->ForeColor = System::Drawing::Color::White;
			this->home_cat5->Location = System::Drawing::Point(784, -1);
			this->home_cat5->Name = L"home_cat5";
			this->home_cat5->Size = System::Drawing::Size(198, 37);
			this->home_cat5->TabIndex = 48;
			this->home_cat5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->home_cat5->Click += gcnew System::EventHandler(this, &CSN::home_cat5_Click);
			// 
			// n15
			// 
			this->n15->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n15->BackColor = System::Drawing::Color::Black;
			this->n15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n15->ForeColor = System::Drawing::Color::White;
			this->n15->Location = System::Drawing::Point(522, 560);
			this->n15->Name = L"n15";
			this->n15->Size = System::Drawing::Size(220, 225);
			this->n15->TabIndex = 55;
			this->n15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n15->Click += gcnew System::EventHandler(this, &CSN::n15_Click);
			// 
			// n16
			// 
			this->n16->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n16->BackColor = System::Drawing::Color::Black;
			this->n16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n16->ForeColor = System::Drawing::Color::White;
			this->n16->Location = System::Drawing::Point(749, 560);
			this->n16->Name = L"n16";
			this->n16->Size = System::Drawing::Size(220, 225);
			this->n16->TabIndex = 54;
			this->n16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n16->Click += gcnew System::EventHandler(this, &CSN::n16_Click);
			// 
			// n17
			// 
			this->n17->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n17->BackColor = System::Drawing::Color::Black;
			this->n17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n17->ForeColor = System::Drawing::Color::White;
			this->n17->Location = System::Drawing::Point(976, 560);
			this->n17->Name = L"n17";
			this->n17->Size = System::Drawing::Size(220, 225);
			this->n17->TabIndex = 53;
			this->n17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n17->Click += gcnew System::EventHandler(this, &CSN::n17_Click);
			// 
			// n14
			// 
			this->n14->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n14->BackColor = System::Drawing::Color::Black;
			this->n14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n14->ForeColor = System::Drawing::Color::White;
			this->n14->Location = System::Drawing::Point(295, 560);
			this->n14->Name = L"n14";
			this->n14->Size = System::Drawing::Size(220, 225);
			this->n14->TabIndex = 42;
			this->n14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n14->Click += gcnew System::EventHandler(this, &CSN::n14_Click);
			// 
			// n13
			// 
			this->n13->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n13->BackColor = System::Drawing::Color::Black;
			this->n13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n13->ForeColor = System::Drawing::Color::White;
			this->n13->Location = System::Drawing::Point(69, 560);
			this->n13->Name = L"n13";
			this->n13->Size = System::Drawing::Size(220, 225);
			this->n13->TabIndex = 41;
			this->n13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n13->Click += gcnew System::EventHandler(this, &CSN::n13_Click);
			// 
			// n18
			// 
			this->n18->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n18->BackColor = System::Drawing::Color::Black;
			this->n18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n18->ForeColor = System::Drawing::Color::White;
			this->n18->Location = System::Drawing::Point(1202, 560);
			this->n18->Name = L"n18";
			this->n18->Size = System::Drawing::Size(220, 225);
			this->n18->TabIndex = 40;
			this->n18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n18->Click += gcnew System::EventHandler(this, &CSN::n18_Click);
			// 
			// n5
			// 
			this->n5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n5->BackColor = System::Drawing::Color::Black;
			this->n5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n5->ForeColor = System::Drawing::Color::White;
			this->n5->Location = System::Drawing::Point(976, 74);
			this->n5->Name = L"n5";
			this->n5->Size = System::Drawing::Size(220, 225);
			this->n5->TabIndex = 31;
			this->n5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n5->Click += gcnew System::EventHandler(this, &CSN::n5_Click);
			// 
			// n12
			// 
			this->n12->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n12->BackColor = System::Drawing::Color::Black;
			this->n12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n12->ForeColor = System::Drawing::Color::White;
			this->n12->Location = System::Drawing::Point(1202, 315);
			this->n12->Name = L"n12";
			this->n12->Size = System::Drawing::Size(220, 225);
			this->n12->TabIndex = 30;
			this->n12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n12->Click += gcnew System::EventHandler(this, &CSN::n12_Click);
			// 
			// n11
			// 
			this->n11->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n11->BackColor = System::Drawing::Color::Black;
			this->n11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n11->ForeColor = System::Drawing::Color::White;
			this->n11->Location = System::Drawing::Point(976, 316);
			this->n11->Name = L"n11";
			this->n11->Size = System::Drawing::Size(220, 225);
			this->n11->TabIndex = 29;
			this->n11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n11->Click += gcnew System::EventHandler(this, &CSN::n11_Click);
			// 
			// n10
			// 
			this->n10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n10->BackColor = System::Drawing::Color::Black;
			this->n10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n10->ForeColor = System::Drawing::Color::White;
			this->n10->Location = System::Drawing::Point(749, 316);
			this->n10->Name = L"n10";
			this->n10->Size = System::Drawing::Size(220, 225);
			this->n10->TabIndex = 28;
			this->n10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n10->Click += gcnew System::EventHandler(this, &CSN::n10_Click);
			// 
			// n9
			// 
			this->n9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n9->BackColor = System::Drawing::Color::Black;
			this->n9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n9->ForeColor = System::Drawing::Color::White;
			this->n9->Location = System::Drawing::Point(522, 316);
			this->n9->Name = L"n9";
			this->n9->Size = System::Drawing::Size(220, 225);
			this->n9->TabIndex = 27;
			this->n9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n9->Click += gcnew System::EventHandler(this, &CSN::n9_Click);
			// 
			// n8
			// 
			this->n8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n8->BackColor = System::Drawing::Color::Black;
			this->n8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n8->ForeColor = System::Drawing::Color::White;
			this->n8->Location = System::Drawing::Point(295, 315);
			this->n8->Name = L"n8";
			this->n8->Size = System::Drawing::Size(220, 225);
			this->n8->TabIndex = 26;
			this->n8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n8->Click += gcnew System::EventHandler(this, &CSN::n8_Click);
			// 
			// n7
			// 
			this->n7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n7->BackColor = System::Drawing::Color::Black;
			this->n7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n7->ForeColor = System::Drawing::Color::White;
			this->n7->Location = System::Drawing::Point(69, 316);
			this->n7->Name = L"n7";
			this->n7->Size = System::Drawing::Size(220, 225);
			this->n7->TabIndex = 25;
			this->n7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n7->Click += gcnew System::EventHandler(this, &CSN::n7_Click);
			// 
			// n6
			// 
			this->n6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n6->BackColor = System::Drawing::Color::Black;
			this->n6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n6->ForeColor = System::Drawing::Color::White;
			this->n6->Location = System::Drawing::Point(1202, 75);
			this->n6->Name = L"n6";
			this->n6->Size = System::Drawing::Size(220, 225);
			this->n6->TabIndex = 24;
			this->n6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n6->Click += gcnew System::EventHandler(this, &CSN::n6_Click);
			// 
			// n4
			// 
			this->n4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n4->BackColor = System::Drawing::Color::Black;
			this->n4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n4->ForeColor = System::Drawing::Color::White;
			this->n4->Location = System::Drawing::Point(749, 74);
			this->n4->Name = L"n4";
			this->n4->Size = System::Drawing::Size(220, 225);
			this->n4->TabIndex = 23;
			this->n4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n4->Click += gcnew System::EventHandler(this, &CSN::n4_Click);
			// 
			// n3
			// 
			this->n3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n3->BackColor = System::Drawing::Color::Black;
			this->n3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n3->ForeColor = System::Drawing::Color::White;
			this->n3->Location = System::Drawing::Point(522, 74);
			this->n3->Name = L"n3";
			this->n3->Size = System::Drawing::Size(220, 225);
			this->n3->TabIndex = 22;
			this->n3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n3->Click += gcnew System::EventHandler(this, &CSN::n3_Click);
			// 
			// n2
			// 
			this->n2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n2->BackColor = System::Drawing::Color::Black;
			this->n2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n2->ForeColor = System::Drawing::Color::White;
			this->n2->Location = System::Drawing::Point(296, 74);
			this->n2->Name = L"n2";
			this->n2->Size = System::Drawing::Size(220, 225);
			this->n2->TabIndex = 21;
			this->n2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n2->Click += gcnew System::EventHandler(this, &CSN::n2_Click);
			// 
			// n1
			// 
			this->n1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->n1->BackColor = System::Drawing::Color::Black;
			this->n1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->n1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n1->ForeColor = System::Drawing::Color::White;
			this->n1->Location = System::Drawing::Point(70, 74);
			this->n1->Name = L"n1";
			this->n1->Size = System::Drawing::Size(220, 225);
			this->n1->TabIndex = 20;
			this->n1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->n1->Click += gcnew System::EventHandler(this, &CSN::n1_Click);
			// 
			// selectcategory_panel
			// 
			this->selectcategory_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->selectcategory_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->selectcategory_panel->Controls->Add(this->checkBox_cat7);
			this->selectcategory_panel->Controls->Add(this->checkBox_cat8);
			this->selectcategory_panel->Controls->Add(this->checkBox_cat5);
			this->selectcategory_panel->Controls->Add(this->checkBox_cat6);
			this->selectcategory_panel->Controls->Add(this->checkBox_cat4);
			this->selectcategory_panel->Controls->Add(this->checkBox_cat3);
			this->selectcategory_panel->Controls->Add(this->checkBox_cat2);
			this->selectcategory_panel->Controls->Add(this->checkBox_cat1);
			this->selectcategory_panel->Controls->Add(this->backtopic_btn);
			this->selectcategory_panel->Controls->Add(this->nextcategory_btn);
			this->selectcategory_panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->selectcategory_panel->Location = System::Drawing::Point(149, 87);
			this->selectcategory_panel->Name = L"selectcategory_panel";
			this->selectcategory_panel->Size = System::Drawing::Size(1216, 695);
			this->selectcategory_panel->TabIndex = 15;
			this->selectcategory_panel->Visible = false;
			// 
			// checkBox_cat7
			// 
			this->checkBox_cat7->BackColor = System::Drawing::Color::Black;
			this->checkBox_cat7->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->checkBox_cat7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_cat7->ForeColor = System::Drawing::Color::White;
			this->checkBox_cat7->Location = System::Drawing::Point(622, 306);
			this->checkBox_cat7->Name = L"checkBox_cat7";
			this->checkBox_cat7->Size = System::Drawing::Size(220, 219);
			this->checkBox_cat7->TabIndex = 27;
			this->checkBox_cat7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox_cat7->UseVisualStyleBackColor = false;
			this->checkBox_cat7->Visible = false;
			// 
			// checkBox_cat8
			// 
			this->checkBox_cat8->BackColor = System::Drawing::Color::Black;
			this->checkBox_cat8->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->checkBox_cat8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_cat8->ForeColor = System::Drawing::Color::White;
			this->checkBox_cat8->Location = System::Drawing::Point(861, 306);
			this->checkBox_cat8->Name = L"checkBox_cat8";
			this->checkBox_cat8->Size = System::Drawing::Size(220, 219);
			this->checkBox_cat8->TabIndex = 26;
			this->checkBox_cat8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox_cat8->UseVisualStyleBackColor = false;
			this->checkBox_cat8->Visible = false;
			// 
			// checkBox_cat5
			// 
			this->checkBox_cat5->BackColor = System::Drawing::Color::Black;
			this->checkBox_cat5->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->checkBox_cat5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_cat5->ForeColor = System::Drawing::Color::White;
			this->checkBox_cat5->Location = System::Drawing::Point(151, 306);
			this->checkBox_cat5->Name = L"checkBox_cat5";
			this->checkBox_cat5->Size = System::Drawing::Size(220, 219);
			this->checkBox_cat5->TabIndex = 25;
			this->checkBox_cat5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox_cat5->UseVisualStyleBackColor = false;
			// 
			// checkBox_cat6
			// 
			this->checkBox_cat6->BackColor = System::Drawing::Color::Black;
			this->checkBox_cat6->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->checkBox_cat6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_cat6->ForeColor = System::Drawing::Color::White;
			this->checkBox_cat6->Location = System::Drawing::Point(385, 306);
			this->checkBox_cat6->Name = L"checkBox_cat6";
			this->checkBox_cat6->Size = System::Drawing::Size(220, 219);
			this->checkBox_cat6->TabIndex = 24;
			this->checkBox_cat6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox_cat6->UseVisualStyleBackColor = false;
			// 
			// checkBox_cat4
			// 
			this->checkBox_cat4->BackColor = System::Drawing::Color::Black;
			this->checkBox_cat4->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->checkBox_cat4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_cat4->ForeColor = System::Drawing::Color::White;
			this->checkBox_cat4->Location = System::Drawing::Point(861, 67);
			this->checkBox_cat4->Name = L"checkBox_cat4";
			this->checkBox_cat4->Size = System::Drawing::Size(220, 219);
			this->checkBox_cat4->TabIndex = 23;
			this->checkBox_cat4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox_cat4->UseVisualStyleBackColor = false;
			// 
			// checkBox_cat3
			// 
			this->checkBox_cat3->BackColor = System::Drawing::Color::Black;
			this->checkBox_cat3->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->checkBox_cat3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_cat3->ForeColor = System::Drawing::Color::White;
			this->checkBox_cat3->Location = System::Drawing::Point(622, 68);
			this->checkBox_cat3->Name = L"checkBox_cat3";
			this->checkBox_cat3->Size = System::Drawing::Size(220, 219);
			this->checkBox_cat3->TabIndex = 22;
			this->checkBox_cat3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox_cat3->UseVisualStyleBackColor = false;
			// 
			// checkBox_cat2
			// 
			this->checkBox_cat2->BackColor = System::Drawing::Color::Black;
			this->checkBox_cat2->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->checkBox_cat2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_cat2->ForeColor = System::Drawing::Color::White;
			this->checkBox_cat2->Location = System::Drawing::Point(385, 68);
			this->checkBox_cat2->Name = L"checkBox_cat2";
			this->checkBox_cat2->Size = System::Drawing::Size(220, 219);
			this->checkBox_cat2->TabIndex = 21;
			this->checkBox_cat2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox_cat2->UseVisualStyleBackColor = false;
			// 
			// checkBox_cat1
			// 
			this->checkBox_cat1->BackColor = System::Drawing::Color::Black;
			this->checkBox_cat1->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->checkBox_cat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_cat1->ForeColor = System::Drawing::Color::White;
			this->checkBox_cat1->Location = System::Drawing::Point(151, 67);
			this->checkBox_cat1->Name = L"checkBox_cat1";
			this->checkBox_cat1->Size = System::Drawing::Size(220, 219);
			this->checkBox_cat1->TabIndex = 20;
			this->checkBox_cat1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox_cat1->UseVisualStyleBackColor = false;
			// 
			// backtopic_btn
			// 
			this->backtopic_btn->BackColor = System::Drawing::Color::Black;
			this->backtopic_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backtopic_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backtopic_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->backtopic_btn->Location = System::Drawing::Point(1012, 9);
			this->backtopic_btn->Name = L"backtopic_btn";
			this->backtopic_btn->Size = System::Drawing::Size(169, 29);
			this->backtopic_btn->TabIndex = 9;
			this->backtopic_btn->Text = L"Back";
			this->backtopic_btn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->backtopic_btn->UseVisualStyleBackColor = false;
			this->backtopic_btn->Click += gcnew System::EventHandler(this, &CSN::backtopic_btn_Click);
			// 
			// nextcategory_btn
			// 
			this->nextcategory_btn->BackColor = System::Drawing::Color::Black;
			this->nextcategory_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextcategory_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nextcategory_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nextcategory_btn->Location = System::Drawing::Point(429, 584);
			this->nextcategory_btn->Name = L"nextcategory_btn";
			this->nextcategory_btn->Size = System::Drawing::Size(375, 41);
			this->nextcategory_btn->TabIndex = 4;
			this->nextcategory_btn->Text = L"Next";
			this->nextcategory_btn->UseVisualStyleBackColor = false;
			this->nextcategory_btn->Click += gcnew System::EventHandler(this, &CSN::nextcategory_btn_Click);
			// 
			// done1
			// 
			this->done1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->done1->BackColor = System::Drawing::Color::Green;
			this->done1->Location = System::Drawing::Point(149, 81);
			this->done1->Name = L"done1";
			this->done1->Size = System::Drawing::Size(400, 7);
			this->done1->TabIndex = 5;
			// 
			// done2
			// 
			this->done2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->done2->BackColor = System::Drawing::Color::White;
			this->done2->Location = System::Drawing::Point(557, 81);
			this->done2->Name = L"done2";
			this->done2->Size = System::Drawing::Size(400, 7);
			this->done2->TabIndex = 6;
			// 
			// done3
			// 
			this->done3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->done3->BackColor = System::Drawing::Color::White;
			this->done3->Location = System::Drawing::Point(965, 81);
			this->done3->Name = L"done3";
			this->done3->Size = System::Drawing::Size(400, 7);
			this->done3->TabIndex = 7;
			// 
			// addpic_panel
			// 
			this->addpic_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->addpic_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->addpic_panel->Controls->Add(this->unavailablepic_lbl);
			this->addpic_panel->Controls->Add(this->picuseradd);
			this->addpic_panel->Controls->Add(this->backtologin_btn);
			this->addpic_panel->Controls->Add(this->nextpic_btn);
			this->addpic_panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addpic_panel->Location = System::Drawing::Point(149, 87);
			this->addpic_panel->Name = L"addpic_panel";
			this->addpic_panel->Size = System::Drawing::Size(1216, 695);
			this->addpic_panel->TabIndex = 16;
			this->addpic_panel->Visible = false;
			// 
			// unavailablepic_lbl
			// 
			this->unavailablepic_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->unavailablepic_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->unavailablepic_lbl->Location = System::Drawing::Point(488, 489);
			this->unavailablepic_lbl->Name = L"unavailablepic_lbl";
			this->unavailablepic_lbl->Size = System::Drawing::Size(274, 21);
			this->unavailablepic_lbl->TabIndex = 15;
			this->unavailablepic_lbl->Text = L"Unavailable Picture";
			this->unavailablepic_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->unavailablepic_lbl->Visible = false;
			// 
			// picuseradd
			// 
			this->picuseradd->BackColor = System::Drawing::Color::Red;
			this->picuseradd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picuseradd.Image")));
			this->picuseradd->Location = System::Drawing::Point(492, 94);
			this->picuseradd->Name = L"picuseradd";
			this->picuseradd->Size = System::Drawing::Size(270, 392);
			this->picuseradd->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picuseradd->TabIndex = 11;
			this->picuseradd->TabStop = false;
			this->picuseradd->Click += gcnew System::EventHandler(this, &CSN::picuseradd_Click);
			// 
			// backtologin_btn
			// 
			this->backtologin_btn->BackColor = System::Drawing::Color::Black;
			this->backtologin_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backtologin_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backtologin_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->backtologin_btn->Location = System::Drawing::Point(1030, 6);
			this->backtologin_btn->Name = L"backtologin_btn";
			this->backtologin_btn->Size = System::Drawing::Size(169, 29);
			this->backtologin_btn->TabIndex = 10;
			this->backtologin_btn->Text = L"Back";
			this->backtologin_btn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->backtologin_btn->UseVisualStyleBackColor = false;
			this->backtologin_btn->Click += gcnew System::EventHandler(this, &CSN::backtologin_btn_Click);
			// 
			// nextpic_btn
			// 
			this->nextpic_btn->BackColor = System::Drawing::Color::Black;
			this->nextpic_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextpic_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nextpic_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nextpic_btn->Location = System::Drawing::Point(445, 581);
			this->nextpic_btn->Name = L"nextpic_btn";
			this->nextpic_btn->Size = System::Drawing::Size(375, 41);
			this->nextpic_btn->TabIndex = 5;
			this->nextpic_btn->Text = L"Next";
			this->nextpic_btn->UseVisualStyleBackColor = false;
			this->nextpic_btn->Click += gcnew System::EventHandler(this, &CSN::nextpic_btn_Click);
			// 
			// CSN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1853, 809);
			this->Controls->Add(this->home_panel);
			this->Controls->Add(this->selectcategory_panel);
			this->Controls->Add(this->addpic_panel);
			this->Controls->Add(this->signup_panel);
			this->Controls->Add(this->done3);
			this->Controls->Add(this->done2);
			this->Controls->Add(this->done1);
			this->Controls->Add(this->login_panel);
			this->Name = L"CSN";
			this->Text = L"CSN";
			this->login_panel->ResumeLayout(false);
			this->login_panel->PerformLayout();
			this->signup_panel->ResumeLayout(false);
			this->signup_panel->PerformLayout();
			this->home_panel->ResumeLayout(false);
			this->home_panel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->activepic))->EndInit();
			this->panel_addnews->ResumeLayout(false);
			this->panel_addnews->PerformLayout();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel_star->ResumeLayout(false);
			this->panel_trend->ResumeLayout(false);
			this->panel_news->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->selectcategory_panel->ResumeLayout(false);
			this->addpic_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picuseradd))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void login_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username_txtbox_login->Text == "" || pass_txtbox_login->Text == "") {
			error_lbl_login->ForeColor = Color::Red;
			error_lbl_login->Text = "Invalid Username or Password, please try again!";
		}
		else {
			 
			if (CSNAPP::logIn(toStandardString(username_txtbox_login->Text), toStandardString(pass_txtbox_login->Text))) {
				if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
					gotopostnews_btn->Visible = true;
					gotonews_btn->Visible = true;
					like_btn->Visible = false;
					rate_btn->Visible = false;
					addnews_btn->Visible = true;
					udatenews_btn->Visible = true;
					deletenews_btn->Visible = true;
				}
				else {
					gotopostnews_btn->Visible = false;
					gotonews_btn->Visible = true;
					like_btn->Visible = true;
					rate_btn->Visible = true;
					addnews_btn->Visible = false;
					udatenews_btn->Visible = false;
					deletenews_btn->Visible = false;
				}
				home_panel->Show();
				error_lbl_login->Text = "";
				login_panel->Hide();
				signup_panel->Hide();
				done1->BackColor = Color::Green;
				activepic->ImageLocation = toSystemString(CSNAPP::Users[activeUser]->getPic());
				activeuser_lbl->Text = toSystemString(CSNAPP::Users[activeUser]->getUsername());
				activeid_lbl->Text = CSNAPP::Users[activeUser]->getId().ToString();
				activerole_lbl->Text = toSystemString(CSNAPP::Users[activeUser]->getRole());
			}
			else {
				error_lbl_login->ForeColor = Color::Red;
				error_lbl_login->Text = "username or password is wrong, Please try again!";
			}
		}
	}
	private: System::Void signup_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (age_txtbox->Text == "" || username_txtbox->Text == "" || pass_txtbox->Text == ""|| email_txtbox->Text == ""|| phone_txtbox->Text == "") {
			error_lbl_signup->Text = "Please complete your info!";
		}
		else {
			if (CSNAPP::signUp(toStandardString(username_txtbox->Text), toStandardString(pass_txtbox->Text), std::stoi(toStandardString(age_txtbox->Text)), toStandardString(email_txtbox->Text), toStandardString(phone_txtbox->Text)) == 0)
			{
				error_lbl_signup->Text = "Wrong data!";
			}
			else {
				CSNAPP::signUp(toStandardString(username_txtbox->Text), toStandardString(pass_txtbox->Text), std::stoi(toStandardString(age_txtbox->Text)), toStandardString(email_txtbox->Text), toStandardString(phone_txtbox->Text));
				error_lbl_signup->Text = "";
				login_panel->Hide();
				signup_panel->Hide();
				addpic_panel->Show();
				like_btn->Visible = true;
				rate_btn->Visible = true;
				done2->BackColor = Color::Green;
				unavailablepic_lbl->Visible = false;
			}
		}
	}
	private: System::Void login_lnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		login_panel->Show();
		signup_panel->Hide();
		username_lbl->Text = "Username or Email :";
		forgetpass_lbllnk->Visible = true;
		username_lbl->Visible = true;
		username_txtbox_login->Visible = true;
		password_lbl->Visible = true;
		pass_txtbox_login->Visible = true;
		confirmpassword_lbl->Visible = false;
		confirmpass_txtbox_login->Visible = false;
		change_pass_btn->Visible = false;
		button6->Visible = false;
		username_txtbox_login->Text = "";
		pass_txtbox_login->Text = "";
		confirmpass_txtbox_login->Text = "";
		button7->Visible = true;
	}
	private: System::Void nextpic_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		selectcategory_panel->Show();
		addpic_panel->Hide();
		done3->BackColor = Color::Green;
		int i = 1;
		for (auto& category : CSNAPP::categoryNews) {
			CheckBox^ cat = safe_cast<CheckBox^>(this->Controls->Find("checkBox_cat" + i.ToString(), true)[0]);
			cat->Text = toSystemString(category.first);
			i++;
		}
	}
	private: System::Void nextcategory_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		done3->BackColor = Color::Green;
		selectcategory_panel->Hide();
		home_panel->Show();
		panel_star->Visible = true;
		addnews_btn->Visible = false;
		deletenews_btn->Visible = false;
		udatenews_btn->Visible = false;
		trend_btn->Visible = true;
		favcategoryuser_btn->Visible = true;
		rate_btn->Visible = true;
		like_btn->Visible = true;
		addcategory_btn->Visible = false;
		addcat->Visible = false;
		gotopostnews_btn->Visible = false;
		CSNAPP::Users.push_back(
			new Visitor(toStandardString(username_txtbox->Text), toStandardString(email_txtbox->Text), toStandardString(pass_txtbox->Text), toStandardString(phone_txtbox->Text), "Admin", toStandardString(picuseradd->ImageLocation), std::stoi(toStandardString(age_txtbox->Text))
			));
		CSNAPP::Users.back()->setId(idOfusersapp);
		activeUser = idOfusersapp-1;
		idOfusersapp++;
		activepic->ImageLocation = toSystemString(CSNAPP::Users[activeUser]->getPic());
		activeuser_lbl->Text = toSystemString(CSNAPP::Users[activeUser]->getUsername());
		activeid_lbl->Text = CSNAPP::Users[activeUser]->getId().ToString();
		activerole_lbl->Text = toSystemString(CSNAPP::Users[activeUser]->getRole());
		picuseradd->Image = nullptr;
		Visitor* visitor = static_cast<Visitor*>(CSNAPP::Users[activeUser]);
		if (checkBox_cat1->Checked)
			visitor->addToFavCategory(toStandardString(checkBox_cat1->Text));
		if (checkBox_cat2->Checked)
			visitor->addToFavCategory(toStandardString(checkBox_cat2->Text));
		if (checkBox_cat3->Checked)
			visitor->addToFavCategory(toStandardString(checkBox_cat3->Text));
		if (checkBox_cat4->Checked)
			visitor->addToFavCategory(toStandardString(checkBox_cat4->Text));
		if (checkBox_cat5->Checked)
			visitor->addToFavCategory(toStandardString(checkBox_cat5->Text));
		if (checkBox_cat6->Checked)
			visitor->addToFavCategory(toStandardString(checkBox_cat6->Text));
		if (checkBox_cat7->Checked)
			visitor->addToFavCategory(toStandardString(checkBox_cat7->Text));
		if (checkBox_cat8->Checked)
			visitor->addToFavCategory(toStandardString(checkBox_cat8->Text));
	}
	private: System::Void createaccount_lbllnk_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		signup_panel->Show();
		login_panel->Hide();
	}
	private: System::Void forgetpass_lbllnk_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		username_lbl->Text = "Phone Number :";
		password_lbl->Visible = false;
		pass_txtbox_login->Visible = false;
		forgetpass_lbllnk->Visible = false;
		confirmphone_btn->Visible = true;
		confirmpassword_lbl->Visible = false;
		confirmpass_txtbox_login->Visible = false;
		button7->Visible = false;
	}
	private: System::Void confirmphone_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username_txtbox_login->Text != "") {
			if (Visitor::isPhoneNumberExist(toStandardString(username_txtbox_login->Text), CSNAPP::Users)) {
				password_lbl->Visible = true;
				pass_txtbox_login->Visible = true;
				confirmpassword_lbl->Visible = true;
				confirmpass_txtbox_login->Visible = true;
				button6->Visible = true;
				username_lbl->Visible = false;
				username_txtbox_login->Visible = false;
				change_pass_btn->Visible = true;
				confirmphone_btn->Visible = false;
				error_lbl_login->Text = "";
			}
			else {
				error_lbl_login->Text = "This Phone not exist,try another phone number! ";
			}
		}
		else {
			error_lbl_login->Text = "Please enter Phone Number! ";
		}
	}
	private: System::Void change_pass_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (confirmpass_txtbox_login->Text == pass_txtbox_login->Text&& CSNAPP::isPasswordStrong(toStandardString(pass_txtbox_login->Text))) {
			Visitor::updatePasswordByPhone(toStandardString(username_txtbox_login->Text),toStandardString(pass_txtbox_login->Text),CSNAPP::Users);
			error_lbl_login->ForeColor = Color::Green;
			error_lbl_login->Text = "Password updated successfully!";
			username_lbl->Text = "Username or Email :";
			forgetpass_lbllnk->Visible = true;
			username_lbl->Visible = true;
			username_txtbox_login->Visible = true;
			password_lbl->Visible = true;
			pass_txtbox_login->Visible = true;
			confirmpassword_lbl->Visible = false;
			confirmpass_txtbox_login->Visible = false;
			change_pass_btn->Visible = false;
			button6->Visible = false;
			username_txtbox_login->Text = "";
			pass_txtbox_login->Text = "";
			confirmpass_txtbox_login->Text = "";
			button7->Visible = true;
		}
		else {
			error_lbl_login->ForeColor = Color::Red;
			error_lbl_login->Text = "Passwords do not match or weak.Please try again.";
		}
	}
	private: System::Void backtopic_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		selectcategory_panel->Visible = false;
		addpic_panel->Visible = true;
		unavailablepic_lbl->Visible = false;
		done3->BackColor = Color::White;
	}
	private: System::Void backtologin_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		selectcategory_panel->Visible = false;
		addpic_panel->Visible = false;
		signup_panel->Visible = true;
		done2->BackColor = Color::White;
	}
	private: System::Void picuseradd_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			OpenFileDialog^ Dialog = gcnew OpenFileDialog();
			Dialog->Filter = "JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png";
			if (Dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ imagePath = Dialog->FileName;
				picuseradd->ImageLocation = imagePath;
			}
		}
		catch(System::Exception^ ex){
			unavailablepic_lbl->Visible = true;
		}
	}
	private: System::Void logout_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		home_panel->Visible = false;
		selectcategory_panel->Visible = false;
		addpic_panel->Visible = false;
		signup_panel->Visible = true;
		username_txtbox->Text = "";
		pass_txtbox->Text = "";
		age_txtbox->Text = "";
		email_txtbox->Text = "";
		phone_txtbox->Text = "";
		confirmpasssignup_txtbox->Text = "";
		CSNAPP::WritingFiles();
	}
	private: System::Void gotopostnews_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_addnews->Visible = true;
		panel_news->Visible = false;
		addcategory_btn->Visible = true;
		category_txtBox->Visible = false;
		category_comboBox->Visible = true;
		rate_btn->Visible = false;
		like_btn->Visible = false;
		title_txtBox->Enabled = true;
		textBoxDay->Enabled = true;
		textBoxMonth->Enabled = true;
		textBoxYear->Enabled = true;
		description_txtBox->Enabled = true;
		category_txtBox->Enabled = true;
		category_comboBox->Enabled = true;
		category_comboBox->Items->Clear();
		title_txtBox->Text = "";
		textBoxDay->Text = "";
		textBoxMonth->Text = ""; 
		textBoxYear->Text = "";
		category_comboBox->Items->Clear();
		description_txtBox->Text = "";
		showrate_lbl->Text = "";
		for (auto& pair : CSNAPP::categoryNews)
		{
			category_comboBox->Items->Add(toSystemString(pair.first));
		}
	}
	private: System::Void search_txtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Visitor* visitor = static_cast<Visitor*>(CSNAPP::Users[activeUser]);
		NewsList->Items->Clear();
		std::vector <NewsApp>  NewsResult;
		if (NewsApp::IsDate(toStandardString(search_txtBox->Text->ToLower()))) {
			NewsResult = visitor->SearchDate(toStandardString(search_txtBox->Text->ToLower()), CSNAPP::DateAndNews);
		}
		else {
			NewsResult = visitor->SearchKeyWord(toStandardString(search_txtBox->Text->ToLower()), CSNAPP::News);
		}
		for (const auto& news : NewsResult) {
			// Add title to ListBox
			String^ titleStr = toSystemString(news.getTitle());
			NewsList->Items->Add(titleStr);
		}
	}
	private: System::Void addnews_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			
			int day = Int32::Parse(textBoxDay->Text);
			int month = Int32::Parse(textBoxMonth->Text);
			int year = Int32::Parse(textBoxYear->Text);
			Datetime datetime(year, month,day);
			Admin* admin = static_cast<Admin*>(CSNAPP::Users[activeUser]);
			
			if (category_comboBox->Visible) {
				if (admin->postNews(toStandardString(title_txtBox->Text), toStandardString(description_txtBox->Text), datetime, toStandardString(category_comboBox->SelectedItem->ToString()), CSNAPP::categoryNews, CSNAPP::News, CSNAPP::LatestNews, CSNAPP::DateAndNews)) {
					panel_news->Visible = true;
					panel_addnews->Visible = false;
					gotonews_btn->PerformClick();
				}
				else {
					MessageBox::Show("Invalid Title or Description", "CSNAPP", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

				}
			}
			else {
				if (admin->postNews(toStandardString(title_txtBox->Text), toStandardString(description_txtBox->Text), datetime, toStandardString(category_txtBox->Text), CSNAPP::categoryNews, CSNAPP::News, CSNAPP::LatestNews, CSNAPP::DateAndNews)) {
					panel_news->Visible = true;
					panel_addnews->Visible = false;
					gotonews_btn->PerformClick();
				}
				else {
					MessageBox::Show("Invalid Title or Description", "CSNAPP", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

				}
			}
		}
		catch (FormatException^ ex)
		{
			MessageBox::Show("Error parsing date: " + ex->Message);
		}
		catch (ArgumentOutOfRangeException^ ex)
		{
			MessageBox::Show("Error creating date: " + ex->Message);
		}
	}
	private: System::Void addcategory_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		category_comboBox->Visible = false;
		category_txtBox->Visible = true;
		addcat->Visible = true;
		addcategory_btn->Visible = false;
	}
	private: System::Void addcat_Click(System::Object^ sender, System::EventArgs^ e) {
		Admin* admin = static_cast<Admin*>(CSNAPP::Users[activeUser]);
		if (category_txtBox->Text == "") {
			MessageBox::Show("Please enter category", "CSNAPP", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else {
			if (!admin->addCategory(toStandardString(category_txtBox->Text), CSNAPP::categoryNews)) {
				MessageBox::Show("Category is already exist!", "CSNAPP", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			category_comboBox->Items->Clear();
			for (auto& pair : CSNAPP::categoryNews)
			{
				category_comboBox->Items->Add(toSystemString(pair.first));
			}
			category_comboBox->Visible = true;
			category_txtBox->Visible = false;
			addcat->Visible = false;
			addcategory_btn->Visible = true;
		}
	}
	private: System::Void gotonews_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		n1->Text = ""; n2->Text = ""; n3->Text = ""; n4->Text = ""; n5->Text = ""; n6->Text = "";
		n7->Text = ""; n8->Text = ""; n9->Text = ""; n10->Text = ""; n11->Text = ""; n12->Text = "";
		n13->Text = ""; n14->Text = ""; n15->Text = ""; n16->Text = ""; n17->Text = ""; n18->Text = "";
		int i = 1;
		Admin::updateNewsQueue(CSNAPP::LatestNews, CSNAPP::News);
		std::queue <NewsApp>  Latestnews= CSNAPP::LatestNews;
		while (!Latestnews.empty()) {
			// Access the front of the queue
			NewsApp newsapp = Latestnews.front();

			// Assuming getTitle() is a method of the CSNAPP::News class or struct
			Label^ news = safe_cast<Label^>(this->Controls->Find("n" + i.ToString(), true)[0]);
			news->Text = toSystemString(newsapp.getTitle());

			// Remove the front element from the queue
			Latestnews.pop();

			i++;
		}
		i = 1;
		for (auto& category : CSNAPP::categoryNews) {
			Label^ cat = safe_cast<Label^>(this->Controls->Find("home_cat" + i.ToString(), true)[0]);
			cat->Text = toSystemString(category.first);
			i++;
		}
		panel_addnews->Visible = false;
		panel_trend->Visible = false;
		panel_news->Visible = true;
	}
		   //////////////////////////////////////////////////////////////////
	private: System::Void home_cat1_Click(System::Object^ sender, System::EventArgs^ e) {
		n1->Text = ""; n2->Text = ""; n3->Text = ""; n4->Text = ""; n5->Text = ""; n6->Text = "";
		n7->Text = ""; n8->Text = ""; n9->Text = ""; n10->Text = ""; n11->Text = ""; n12->Text = "";
		n13->Text = ""; n14->Text = ""; n15->Text = ""; n16->Text = ""; n17->Text = ""; n18->Text = "";
		int i = 1;
		for (auto& newsApp : CSNAPP::categoryNews[toStandardString(home_cat1->Text)]) {
			Label^ news = safe_cast<Label^>(this->Controls->Find("n" + i.ToString(), true)[0]);
			news->Text = toSystemString(newsApp.getTitle());
			i++;
		}
	}
	private: System::Void home_cat2_Click(System::Object^ sender, System::EventArgs^ e) {
		n1->Text = ""; n2->Text = ""; n3->Text = ""; n4->Text = ""; n5->Text = ""; n6->Text = "";
		n7->Text = ""; n8->Text = ""; n9->Text = ""; n10->Text = ""; n11->Text = ""; n12->Text = "";
		n13->Text = ""; n14->Text = ""; n15->Text = ""; n16->Text = ""; n17->Text = ""; n18->Text = "";
		int i = 1;
		for (auto& newsApp : CSNAPP::categoryNews[toStandardString(home_cat2->Text)]) {
			Label^ news = safe_cast<Label^>(this->Controls->Find("n" + i.ToString(), true)[0]);
			news->Text = toSystemString(newsApp.getTitle());
			i++;
		}

	}
	private: System::Void home_cat3_Click(System::Object^ sender, System::EventArgs^ e) {
		n1->Text = ""; n2->Text = ""; n3->Text = ""; n4->Text = ""; n5->Text = ""; n6->Text = "";
		n7->Text = ""; n8->Text = ""; n9->Text = ""; n10->Text = ""; n11->Text = ""; n12->Text = "";
		n13->Text = ""; n14->Text = ""; n15->Text = ""; n16->Text = ""; n17->Text = ""; n18->Text = "";
		int i = 1;
		for (auto& newsApp : CSNAPP::categoryNews[toStandardString(home_cat3->Text)]) {
			Label^ news = safe_cast<Label^>(this->Controls->Find("n" + i.ToString(), true)[0]);
			news->Text = toSystemString(newsApp.getTitle());
			i++;
		}

	}
	private: System::Void home_cat4_Click(System::Object^ sender, System::EventArgs^ e) {
		n1->Text = ""; n2->Text = ""; n3->Text = ""; n4->Text = ""; n5->Text = ""; n6->Text = "";
		n7->Text = ""; n8->Text = ""; n9->Text = ""; n10->Text = ""; n11->Text = ""; n12->Text = "";
		n13->Text = ""; n14->Text = ""; n15->Text = ""; n16->Text = ""; n17->Text = ""; n18->Text = "";
		int i = 1;
		for (auto& newsApp : CSNAPP::categoryNews[toStandardString(home_cat4->Text)]) {
			Label^ news = safe_cast<Label^>(this->Controls->Find("n" + i.ToString(), true)[0]);
			news->Text = toSystemString(newsApp.getTitle());
			i++;
		}

	}
	private: System::Void home_cat5_Click(System::Object^ sender, System::EventArgs^ e) {
		n1->Text = ""; n2->Text = ""; n3->Text = ""; n4->Text = ""; n5->Text = ""; n6->Text = "";
		n7->Text = ""; n8->Text = ""; n9->Text = ""; n10->Text = ""; n11->Text = ""; n12->Text = "";
		n13->Text = ""; n14->Text = ""; n15->Text = ""; n16->Text = ""; n17->Text = ""; n18->Text = "";
		int i = 1;
		for (auto& newsApp : CSNAPP::categoryNews[toStandardString(home_cat5->Text)]) {
			Label^ news = safe_cast<Label^>(this->Controls->Find("n" + i.ToString(), true)[0]);
			news->Text = toSystemString(newsApp.getTitle());
			i++;
		}

	}
	private: System::Void home_cat6_Click(System::Object^ sender, System::EventArgs^ e) {
		n1->Text = ""; n2->Text = ""; n3->Text = ""; n4->Text = ""; n5->Text = ""; n6->Text = "";
		n7->Text = ""; n8->Text = ""; n9->Text = ""; n10->Text = ""; n11->Text = ""; n12->Text = "";
		n13->Text = ""; n14->Text = ""; n15->Text = ""; n16->Text = ""; n17->Text = ""; n18->Text = "";
		int i = 1;
		for (auto& newsApp : CSNAPP::categoryNews[toStandardString(home_cat6->Text)]) {
			Label^ news = safe_cast<Label^>(this->Controls->Find("n" + i.ToString(), true)[0]);
			news->Text = toSystemString(newsApp.getTitle());
			i++;
		}

	}
	private: System::Void home_cat7_Click(System::Object^ sender, System::EventArgs^ e) {
		n1->Text = ""; n2->Text = ""; n3->Text = ""; n4->Text = ""; n5->Text = ""; n6->Text = "";
		n7->Text = ""; n8->Text = ""; n9->Text = ""; n10->Text = ""; n11->Text = ""; n12->Text = "";
		n13->Text = ""; n14->Text = ""; n15->Text = ""; n16->Text = ""; n17->Text = ""; n18->Text = "";
		int i = 1;
		for (auto& newsApp : CSNAPP::categoryNews[toStandardString(home_cat7->Text)]) {
			Label^ news = safe_cast<Label^>(this->Controls->Find("n" + i.ToString(), true)[0]);
			news->Text = toSystemString(newsApp.getTitle());
			i++;
		}

	}
	private: System::Void home_cat8_Click(System::Object^ sender, System::EventArgs^ e) {
		n1->Text = ""; n2->Text = ""; n3->Text = ""; n4->Text = ""; n5->Text = ""; n6->Text = "";
		n7->Text = ""; n8->Text = ""; n9->Text = ""; n10->Text = ""; n11->Text = ""; n12->Text = "";
		n13->Text = ""; n14->Text = ""; n15->Text = ""; n16->Text = ""; n17->Text = ""; n18->Text = "";
		int i = 1;
		for (auto& newsApp : CSNAPP::categoryNews[toStandardString(home_cat8->Text)]) {
			Label^ news = safe_cast<Label^>(this->Controls->Find("n" + i.ToString(), true)[0]);
			news->Text = toSystemString(newsApp.getTitle());
			i++;
		}

	}
		   //////////////////////////////////////////////////////////////////
	private: System::Void n1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n1->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n1->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}
		panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_comboBox->Enabled = false;
			category_txtBox->Visible = true;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;	
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n2->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n2->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n3->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n3->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		title_txtBox->Text = n4->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n4->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n5->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n5->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n6->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n6->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		title_txtBox->Text = n7->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n7->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		title_txtBox->Text = n8->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n8->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		title_txtBox->Text = n9->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n9->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		title_txtBox->Text = n10->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n10->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n11->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n11->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		title_txtBox->Text = n12->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n12->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n13->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n13->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n14->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n14->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n15->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n15->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n16->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n16->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n17->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n17->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void n18_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;

		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = n18->Text;
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(n18->Text) == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}panel_addnews->Visible = true;
		panel_news->Visible = false;
	}
		   //////////////////////////////////////////////////////////////////
	private: System::Void deletenews_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Admin* admin = static_cast<Admin*>(CSNAPP::Users[activeUser]);
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(title_txtBox->Text) == CSNAPP::News[i].getTitle()) {
				admin->removeNews(CSNAPP::News[i], CSNAPP::News, CSNAPP::LatestNews, CSNAPP::categoryNews, CSNAPP::DateAndNews);
				MessageBox::Show("News removed successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			}
		}
		gotonews_btn->PerformClick();
	}
	private: System::Void udatenews_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int day = Int32::Parse(textBoxDay->Text);
		int month = Int32::Parse(textBoxMonth->Text);
		int year = Int32::Parse(textBoxYear->Text);
		Datetime datetime(year, month, day);
		Admin* admin = static_cast<Admin*>(CSNAPP::Users[activeUser]);
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(title_txtBox->Text) == CSNAPP::News[i].getTitle()) {
				admin->removeNews(CSNAPP::News[i], CSNAPP::News, CSNAPP::LatestNews, CSNAPP::categoryNews, CSNAPP::DateAndNews);
				break;
			}
		}		
		admin->postNews(toStandardString(title_txtBox->Text), toStandardString(description_txtBox->Text), datetime, toStandardString(category_txtBox->Text), CSNAPP::categoryNews, CSNAPP::News, CSNAPP::LatestNews, CSNAPP::DateAndNews);
		gotonews_btn->PerformClick();
	}
	private: System::Void trend_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = 1;
		std::stack<NewsApp> trendStack = Visitor::DisplayTrendingNews(CSNAPP::News);
		while (!trendStack.empty()) {
			auto& newstrend = trendStack.top();
			Label^ news = safe_cast<Label^>(this->Controls->Find("trend" + i.ToString(), true)[0]);
			news->Text = toSystemString(newstrend.getTitle());
			Label^ starnews = safe_cast<Label^>(this->Controls->Find("star" + i.ToString(), true)[0]);
			double rate = newstrend.getRate(); // Assuming it->first contains the rate
			std::string rateStr = std::to_string(rate);
			rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
			starnews->Text = toSystemString(rateStr);
			i++;
			trendStack.pop();
		}
		panel_addnews->Visible = false;
		panel_trend->Visible = true;
		panel_news->Visible = false;
	}
	private: System::Void rate_btn_Click(System::Object^ sender, System::EventArgs^ e) {		
		Visitor* visitor = static_cast<Visitor*>(CSNAPP::Users[activeUser]);
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(title_txtBox->Text) == CSNAPP::News[i].getTitle()) {
				visitor->SetRate(rateSelected, CSNAPP::News[i]);
				MessageBox::Show("Thanks for Rating!", "CSNAPP", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				break;
			}
		}
	}
	private: System::Void like_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (toStandardString(title_txtBox->Text) == CSNAPP::News[i].getTitle()) {
				Visitor* visitor = static_cast<Visitor*>(CSNAPP::Users[activeUser]);
				if (visitor->bookMarkNews(CSNAPP::News[i])) {
					MessageBox::Show("News added to favourites successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show("News already in favourites successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				break;
			}
		}
	}
	private: System::Void favcategoryuser_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		n1->Text = ""; n2->Text = ""; n3->Text = ""; n4->Text = ""; n5->Text = ""; n6->Text = "";
		n7->Text = ""; n8->Text = ""; n9->Text = ""; n10->Text = ""; n11->Text = ""; n12->Text = "";
		n13->Text = ""; n14->Text = ""; n15->Text = ""; n16->Text = ""; n17->Text = ""; n18->Text = "";
		int i = 1;
		Visitor* visitor = static_cast<Visitor*>(CSNAPP::Users[activeUser]);
		for (auto& news : visitor->getBookMarkedNews()) {
			Label^ newslbl = safe_cast<Label^>(this->Controls->Find("n" + i.ToString(), true)[0]);
			newslbl->Text = toSystemString(news.getTitle());
			i++;
		}
		for (int x = 1; x <= 8;x++) {
			Label^ cat = safe_cast<Label^>(this->Controls->Find("home_cat" + x.ToString(), true)[0]);
			cat->Text = "";
		}
		i = 1;
		for (auto& category : visitor->getFavCategory()) {
			Label^ cat = safe_cast<Label^>(this->Controls->Find("home_cat" + i.ToString(), true)[0]);
			cat->Text = toSystemString(category);
			i++;
		}
		panel_addnews->Visible = false;
		panel_news->Visible = true;
		panel_trend->Visible = false;
	}
		   int rateSelected = 0;
	private: System::Void s1_Click(System::Object^ sender, System::EventArgs^ e) {
		if(s1->ForeColor == Color::White)
		{
			s1->ForeColor = Color::LimeGreen;
			s2->ForeColor = Color::White;
			s3->ForeColor = Color::White;
			s4->ForeColor = Color::White;
			s5->ForeColor = Color::White;
			rateSelected = 1;
		}
		else {
			s1->ForeColor = Color::White;
			s2->ForeColor = Color::White;
			s3->ForeColor = Color::White;
			s4->ForeColor = Color::White;
			s5->ForeColor = Color::White;
			rateSelected = 0;
		}
	}
	private: System::Void s2_Click(System::Object^ sender, System::EventArgs^ e) {
		s1->ForeColor = Color::LimeGreen;
		s2->ForeColor = Color::LimeGreen;
		s3->ForeColor = Color::White;
		s4->ForeColor = Color::White;
		s5->ForeColor = Color::White;
		rateSelected = 2;
	}
	private: System::Void s3_Click(System::Object^ sender, System::EventArgs^ e) {
		s1->ForeColor = Color::LimeGreen;
		s2->ForeColor = Color::LimeGreen;
		s3->ForeColor = Color::LimeGreen;
		s4->ForeColor = Color::White;
		s5->ForeColor = Color::White;
		rateSelected = 3;
	}
	private: System::Void s4_Click(System::Object^ sender, System::EventArgs^ e) {
		s1->ForeColor = Color::LimeGreen;
		s2->ForeColor = Color::LimeGreen;
		s3->ForeColor = Color::LimeGreen;
		s4->ForeColor = Color::LimeGreen;
		s5->ForeColor = Color::White;
		rateSelected = 4;
	}
	private: System::Void s5_Click(System::Object^ sender, System::EventArgs^ e) {
		s1->ForeColor = Color::LimeGreen;
		s2->ForeColor = Color::LimeGreen;
		s3->ForeColor = Color::LimeGreen;
		s4->ForeColor = Color::LimeGreen;
		s5->ForeColor = Color::LimeGreen;
		rateSelected = 5;
	}
	
	private: System::Void search_txtBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		NewsList->Visible = true;
		std::queue <NewsApp>  Latestnews = CSNAPP::LatestNews;
		NewsList->Items->Clear();
		while (!Latestnews.empty()) {
			// Access the front of the queue
			NewsApp newsapp = Latestnews.front();

			// Assuming getTitle() is a method of the CSNAPP::News class or struct
			String^ titleStr = toSystemString(newsapp.getTitle());
			NewsList->Items->Add(titleStr);

			// Remove the front element from the queue
			Latestnews.pop();
		}
	}

	private: System::Void search_txtBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		NewsList->Visible = false;
	}
	private: System::Void NewsList_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string displayedTitle = toStandardString(NewsList->SelectedItem->ToString());
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = toSystemString(displayedTitle);
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (displayedTitle == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}
		panel_addnews->Visible = true;
		panel_news->Visible = false;
		panel_trend->Visible = false;
	}
	private: System::Void NewsList_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string displayedTitle = toStandardString(NewsList->SelectedItem->ToString());
		if (CSNAPP::Users[activeUser]->getRole() == "Admin") {
			title_txtBox->Enabled = true;
			textBoxDay->Enabled = true;
			textBoxMonth->Enabled = true;
			textBoxYear->Enabled = true;
			description_txtBox->Enabled = true;
			addcategory_btn->Enabled = true;
			category_txtBox->Enabled = true;
			category_txtBox->Visible = true;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
		}
		else {
			title_txtBox->Enabled = false;
			textBoxDay->Enabled = false;
			textBoxMonth->Enabled = false;
			textBoxYear->Enabled = false;
			description_txtBox->Enabled = false;
			addcategory_btn->Enabled = false;
			category_txtBox->Enabled = false;
			category_comboBox->Enabled = false;
			category_comboBox->Visible = false;
			category_txtBox->Visible = true;
		}
		title_txtBox->Text = toSystemString(displayedTitle);
		for (int i = 0; i < CSNAPP::News.size(); i++) {
			if (displayedTitle == CSNAPP::News[i].getTitle()) {
				textBoxDay->Text = toSystemString(CSNAPP::News[i].getDateday());
				textBoxMonth->Text = toSystemString(CSNAPP::News[i].getDatemonth());
				category_txtBox->Text = toSystemString(CSNAPP::News[i].getcategory());
				textBoxYear->Text = toSystemString(CSNAPP::News[i].getDateyear());
				description_txtBox->Text = toSystemString(CSNAPP::News[i].getdescripiton());
				double rate = CSNAPP::News[i].getRate();
				std::string rateStr = std::to_string(rate);
				rateStr = rateStr.substr(0, rateStr.find(".") + 3); // Keep only two decimal places
				showrate_lbl->Text = toSystemString(rateStr);
			}
		}
		panel_addnews->Visible = true;
		panel_news->Visible = false;
		panel_trend->Visible = false;
	}
};
}