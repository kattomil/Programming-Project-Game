#pragma once

//Made by Cinteza Emilian, Bulzan Nicola and Cojocaru Despina

#include "character.h"
#include "enemy.h"

namespace BarbaraDressup {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		character Chr;
		enemy Ene;

		int functionality = 1;

	private: System::Windows::Forms::Button^ restart;
	private: System::Windows::Forms::ProgressBar^ characterhp;
	private: System::Windows::Forms::ProgressBar^ enemyhp;

	public:

		int heal = 0;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ attack;
	private: System::Windows::Forms::Button^ specialability;
	private: System::Windows::Forms::PictureBox^ enemy;
	private: System::Windows::Forms::PictureBox^ character;





	private: System::Windows::Forms::Button^ nextchr;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->attack = (gcnew System::Windows::Forms::Button());
			this->specialability = (gcnew System::Windows::Forms::Button());
			this->enemy = (gcnew System::Windows::Forms::PictureBox());
			this->character = (gcnew System::Windows::Forms::PictureBox());
			this->nextchr = (gcnew System::Windows::Forms::Button());
			this->restart = (gcnew System::Windows::Forms::Button());
			this->characterhp = (gcnew System::Windows::Forms::ProgressBar());
			this->enemyhp = (gcnew System::Windows::Forms::ProgressBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->character))->BeginInit();
			this->SuspendLayout();
			// 
			// attack
			// 
			this->attack->BackColor = System::Drawing::Color::Transparent;
			this->attack->FlatAppearance->BorderSize = 0;
			this->attack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->attack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"attack.Image")));
			this->attack->Location = System::Drawing::Point(12, 12);
			this->attack->Name = L"attack";
			this->attack->Size = System::Drawing::Size(392, 130);
			this->attack->TabIndex = 0;
			this->attack->Text = L"Attack";
			this->attack->UseVisualStyleBackColor = false;
			this->attack->Click += gcnew System::EventHandler(this, &MyForm::attack_Click);
			// 
			// specialability
			// 
			this->specialability->BackColor = System::Drawing::Color::Transparent;
			this->specialability->FlatAppearance->BorderSize = 0;
			this->specialability->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->specialability->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"specialability.Image")));
			this->specialability->Location = System::Drawing::Point(901, 12);
			this->specialability->Name = L"specialability";
			this->specialability->Size = System::Drawing::Size(392, 130);
			this->specialability->TabIndex = 1;
			this->specialability->Text = L"Special Ability";
			this->specialability->UseVisualStyleBackColor = false;
			this->specialability->Click += gcnew System::EventHandler(this, &MyForm::specialability_Click);
			// 
			// enemy
			// 
			this->enemy->BackColor = System::Drawing::Color::Transparent;
			this->enemy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->enemy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"enemy.Image")));
			this->enemy->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"enemy.InitialImage")));
			this->enemy->Location = System::Drawing::Point(1167, 327);
			this->enemy->Name = L"enemy";
			this->enemy->Size = System::Drawing::Size(515, 679);
			this->enemy->TabIndex = 2;
			this->enemy->TabStop = false;
			this->enemy->Click += gcnew System::EventHandler(this, &MyForm::character_Click);
			// 
			// character
			// 
			this->character->BackColor = System::Drawing::Color::Transparent;
			this->character->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->character->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"character.Image")));
			this->character->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"character.InitialImage")));
			this->character->Location = System::Drawing::Point(12, 282);
			this->character->Name = L"character";
			this->character->Size = System::Drawing::Size(571, 679);
			this->character->TabIndex = 3;
			this->character->TabStop = false;
			// 
			// nextchr
			// 
			this->nextchr->BackColor = System::Drawing::Color::Transparent;
			this->nextchr->FlatAppearance->BorderSize = 0;
			this->nextchr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextchr->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextchr.Image")));
			this->nextchr->Location = System::Drawing::Point(476, 12);
			this->nextchr->Name = L"nextchr";
			this->nextchr->Size = System::Drawing::Size(392, 130);
			this->nextchr->TabIndex = 6;
			this->nextchr->Text = L"Next Character";
			this->nextchr->UseVisualStyleBackColor = false;
			this->nextchr->Click += gcnew System::EventHandler(this, &MyForm::nextchr_Click);
			// 
			// restart
			// 
			this->restart->BackColor = System::Drawing::Color::Transparent;
			this->restart->FlatAppearance->BorderSize = 0;
			this->restart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->restart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"restart.Image")));
			this->restart->Location = System::Drawing::Point(1323, 12);
			this->restart->Name = L"restart";
			this->restart->Size = System::Drawing::Size(392, 130);
			this->restart->TabIndex = 7;
			this->restart->Text = L"Restart";
			this->restart->UseVisualStyleBackColor = false;
			this->restart->Click += gcnew System::EventHandler(this, &MyForm::restart_Click);
			// 
			// characterhp
			// 
			this->characterhp->Location = System::Drawing::Point(86, 242);
			this->characterhp->Name = L"characterhp";
			this->characterhp->Size = System::Drawing::Size(571, 34);
			this->characterhp->TabIndex = 8;
			this->characterhp->Value = 100;
			// 
			// enemyhp
			// 
			this->enemyhp->BackColor = System::Drawing::SystemColors::Control;
			this->enemyhp->Location = System::Drawing::Point(1102, 242);
			this->enemyhp->Name = L"enemyhp";
			this->enemyhp->Size = System::Drawing::Size(571, 34);
			this->enemyhp->TabIndex = 9;
			this->enemyhp->Value = 100;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1752, 875);
			this->Controls->Add(this->enemyhp);
			this->Controls->Add(this->characterhp);
			this->Controls->Add(this->restart);
			this->Controls->Add(this->nextchr);
			this->Controls->Add(this->character);
			this->Controls->Add(this->enemy);
			this->Controls->Add(this->specialability);
			this->Controls->Add(this->attack);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Game";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->character))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void attack_Click(System::Object^ sender, System::EventArgs^ e) {
		if (functionality == 1) {
			Chr.attack();

			if (Chr.invincibility == 0 && Chr.invtime == 0) {
				Ene.attack();
			}
			else {
				Chr.invtime -= 1;
				if (Chr.invtime == 0) {
					Chr.invincibility = 0;
					this->specialability->BackColor = Color::Red;
				}
			}
			if (Chr.doubledamage > 0) {
				Chr.attack();
				Chr.doubledamage -= 1;
				if (Chr.doubledamage == 0) {
					this->specialability->BackColor = Color::Red;
				}
			}

			if (Ene.hp > 0) {
				this->enemyhp->Value = Ene.hp;
			}
			else {
				functionality = 0;
				this->enemyhp->Value = 0;
				this->enemy->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\enemydead.png");
			}

			if (Chr.hp > 0) {
				this->characterhp->Value = Chr.hp;
			}
			else {
				functionality = 0;
				this->characterhp->Value = 0;
				this->character->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\chr" + Chr.whichchar + "dead.png");
			}
		}
	}
	private: System::Void specialability_Click(System::Object^ sender, System::EventArgs^ e) {
		if (functionality == 1) {
			if (Chr.usedspecial == 0) {
				if (Chr.whichchar == 1) {
					Chr.make_invincible();
					this->specialability->BackColor = Color::Blue;
				}
				else if (Chr.whichchar == 2) {
					Chr.doubledamage = 2;
					this->specialability->BackColor = Color::Blue;
				}
				else if (Chr.whichchar == 3) {
					Chr.heal();
					this->characterhp->Value = Chr.hp;
					this->specialability->BackColor = Color::Red;
				}
				Chr.usedspecial = 1;
			}
		}
	}
	private: System::Void character_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void nextchr_Click(System::Object^ sender, System::EventArgs^ e) {
		if (functionality == 1) {
			if (Chr.whichchar == 3)
				Chr.whichchar = 1;
			else Chr.whichchar += 1;

			Chr.invincibility = 0;
			Chr.invtime = 0;

			this->character->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\chr" + Chr.whichchar + ".png");
		}
	}
private: System::Void restart_Click(System::Object^ sender, System::EventArgs^ e) {
	functionality = 1;
	this->characterhp->Value = 100;
	this->enemyhp->Value = 100;
	Chr.hp = 100;
	Ene.hp = 100;
	Chr.whichchar = 1;
	this->enemy->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\enemy.png");
	this->character->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\chr1.png");
	this->specialability->BackColor = Color::Transparent;
	Chr.invincibility = 0;
	Chr.invtime = 0;
	Chr.doubledamage = 0;
	Chr.usedspecial = 0;
}
};
}
// this->enemy->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\enemy.png");
// this->character->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\chr1.png");
