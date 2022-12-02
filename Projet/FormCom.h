#pragma once
#include "CServiceCom.h"
namespace Projet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label2;
	private: NS_Svc_Com::CServiceCom^ oSvc;
	private: System::Data::DataSet^ oDs;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(712, 407);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(192, 298);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 23);
			this->button6->TabIndex = 27;
			this->button6->Text = L"Ajouter Commande";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form4::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(192, 365);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 23);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Supprimer Commande";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form4::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(192, 333);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(141, 23);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Mettre à jour";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form4::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(192, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 23);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Afficher Commande";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(51, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 123);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Charger DB";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form4::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(775, 209);
			this->dataGridView1->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(438, 239);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Commandes";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(415, 265);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 30;
			this->textBox1->Text = L"Reference ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(415, 317);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 31;
			this->textBox2->Text = L"Date emission";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(415, 343);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 32;
			this->textBox3->Text = L"Date livraison";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(415, 291);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 33;
			this->textBox4->Text = L"Date Reglement";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(415, 369);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 34;
			this->textBox5->Text = L"Id Client";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form4::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(555, 265);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 35;
			this->textBox6->Text = L"Moyen de paiement";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(555, 291);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 36;
			this->textBox7->Text = L"Nombre paiement";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(575, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"paiement";
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 442);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form4";
			this->Text = L"Form4";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->SelectionnerToutCommande("Commande");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Commande";
	}
private: System::Void Form4_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Svc_Com::CServiceCom();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->AjouterCommande(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, int::Parse(this->textBox5->Text));
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->SuppCommande(this->textBox1->Text);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ModifierCommande(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, int::Parse(this->textBox5->Text));
}
};
}
