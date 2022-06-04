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
		int whichchar = 1;

		int invincibility = 0;
		int invtime = 0;
		
		int doubledamage = 0;

		int usedspecial = 0;

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
			this->attack->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->attack->Location = System::Drawing::Point(12, 12);
			this->attack->Name = L"attack";
			this->attack->Size = System::Drawing::Size(325, 71);
			this->attack->TabIndex = 0;
			this->attack->Text = L"Attack";
			this->attack->UseVisualStyleBackColor = true;
			this->attack->Click += gcnew System::EventHandler(this, &MyForm::attack_Click);
			// 
			// specialability
			// 
			this->specialability->Location = System::Drawing::Point(821, 11);
			this->specialability->Name = L"specialability";
			this->specialability->Size = System::Drawing::Size(325, 72);
			this->specialability->TabIndex = 1;
			this->specialability->Text = L"Special Ability";
			this->specialability->UseVisualStyleBackColor = true;
			this->specialability->Click += gcnew System::EventHandler(this, &MyForm::specialability_Click);
			// 
			// enemy
			// 
			this->enemy->BackColor = System::Drawing::Color::Transparent;
			this->enemy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->enemy->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"enemy.InitialImage")));
			this->enemy->Location = System::Drawing::Point(727, 334);
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
			this->character->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"character.InitialImage")));
			this->character->Location = System::Drawing::Point(12, 282);
			this->character->Name = L"character";
			this->character->Size = System::Drawing::Size(571, 679);
			this->character->TabIndex = 3;
			this->character->TabStop = false;
			// 
			// nextchr
			// 
			this->nextchr->Location = System::Drawing::Point(421, 11);
			this->nextchr->Name = L"nextchr";
			this->nextchr->Size = System::Drawing::Size(310, 71);
			this->nextchr->TabIndex = 6;
			this->nextchr->Text = L"Next Character";
			this->nextchr->UseVisualStyleBackColor = true;
			this->nextchr->Click += gcnew System::EventHandler(this, &MyForm::nextchr_Click);
			// 
			// restart
			// 
			this->restart->Location = System::Drawing::Point(821, 110);
			this->restart->Name = L"restart";
			this->restart->Size = System::Drawing::Size(325, 55);
			this->restart->TabIndex = 7;
			this->restart->Text = L"Restart";
			this->restart->UseVisualStyleBackColor = true;
			this->restart->Click += gcnew System::EventHandler(this, &MyForm::restart_Click);
			// 
			// characterhp
			// 
			this->characterhp->Location = System::Drawing::Point(12, 242);
			this->characterhp->Name = L"characterhp";
			this->characterhp->Size = System::Drawing::Size(571, 34);
			this->characterhp->TabIndex = 8;
			this->characterhp->Value = 100;
			// 
			// enemyhp
			// 
			this->enemyhp->BackColor = System::Drawing::SystemColors::Control;
			this->enemyhp->Location = System::Drawing::Point(612, 242);
			this->enemyhp->Name = L"enemyhp";
			this->enemyhp->Size = System::Drawing::Size(571, 34);
			this->enemyhp->TabIndex = 9;
			this->enemyhp->Value = 100;
			this->enemy->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\enemy.png");
			this->character->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\chr1.png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1195, 875);
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

			if (invtime == 0) {
				invincibility = 0;
			}

			if (invincibility == 0 && invtime == 0) {
				Ene.attack();
			}
			else {
				invtime -= 1;
			}
			if (doubledamage > 0) {
				Chr.attack();
				doubledamage -= 1;
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
				this->character->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\chr" + whichchar + "dead.png");
			}
		}
	}
	private: System::Void specialability_Click(System::Object^ sender, System::EventArgs^ e) {
		if (functionality == 1) {
			if (usedspecial == 0) {
				if (whichchar == 1) {
					invincibility = 1;
					invtime = 3;
				}
				else if (whichchar == 2) {
					doubledamage = 2;
				}
				else if (whichchar == 3) {
					Random^ rnd = gcnew Random();
					Chr.hp += rnd->Next(11) + 1;
					this->characterhp->Value = Chr.hp;
				}
			}
			usedspecial = 1;
		}
	}
	private: System::Void character_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void nextchr_Click(System::Object^ sender, System::EventArgs^ e) {
		if (functionality == 1) {
			if (whichchar == 3)
				whichchar = 1;
			else whichchar += 1;

			invincibility = 0;
			invtime = 0;

			this->character->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\chr" + whichchar + ".png");
		}
	}
private: System::Void restart_Click(System::Object^ sender, System::EventArgs^ e) {
	functionality = 1;
	this->characterhp->Value = 100;
	this->enemyhp->Value = 100;
	Chr.hp = 100;
	Ene.hp = 100;
	whichchar = 1;
	this->enemy->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\enemy.png");
	this->character->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\chr1.png");
	invincibility = 0;
	invtime = 0;
	doubledamage = 0;
	usedspecial = 0;
}
};
}
// this->enemy->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\enemy.png");
// this->character->Image = Image::FromFile("C:\\Users\\Emil\\Desktop\\My Desk\\Barbara Dressup\\files\\chr1.png");
