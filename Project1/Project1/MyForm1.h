#pragma once
#include "GestionPersonnel.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "GestionStock.h"
#include "STATISTIQUES.h"
#include "GestionArticle.h"

//#include "MyForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:

	protected:








	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(103, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(240, 120);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gestion personnel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(443, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(240, 120);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gestion client";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(103, 242);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(240, 120);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Gestion commande";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(443, 242);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(239, 120);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Gestion stock";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(103, 392);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(240, 120);
			this->button6->TabIndex = 5;
			this->button6->Text = L"STATISTIQUES";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(444, 392);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(237, 119);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Gestion article";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(542, 330);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(246, 258);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AVITECH";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//LAAAAAAAAAAAAA
		this->Hide();
		Project1::GestionPersonnel monFormulaire;
		monFormulaire.ShowDialog();
		this->Show();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Project1::MyForm2 monFormulaire;
		monFormulaire.ShowDialog();
		this->Show();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Project1::MyForm2 monFormulaire;
		monFormulaire.ShowDialog();
		this->Show();
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Project1::GestionStock monFormulaire;
		monFormulaire.ShowDialog();
		this->Show();
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Project1::STATISTIQUES monFormulaire;
		monFormulaire.ShowDialog();
		this->Show();
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Project1::GestionArticle monFormulaire;
		monFormulaire.ShowDialog();
		this->Show();	
	}
};
}
