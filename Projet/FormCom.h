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


	private: System::Windows::Forms::Label^ label2;
	private: NS_Svc_Com::CServiceCom^ oSvc;
	private: NS_Svc_Com::CServiceCom^ oSvc2;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oDs2;
	private: System::Data::DataSet^ DataCom;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::TextBox^ textBox8;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button12;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1111, 558);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(810, 86);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 23);
			this->button6->TabIndex = 27;
			this->button6->Text = L"Ajouter Commande";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form4::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(810, 155);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 23);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Supprimer Commande";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form4::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(810, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(141, 23);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Mettre à jour";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form4::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(810, 53);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 23);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Afficher Commande";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form4::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(669, 53);
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
			this->dataGridView1->Size = System::Drawing::Size(604, 209);
			this->dataGridView1->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1056, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Commandes";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1033, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 30;
			this->textBox1->Text = L"Reference ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1033, 105);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 31;
			this->textBox2->Text = L"Date emission";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1033, 131);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 32;
			this->textBox3->Text = L"Date livraison";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1033, 79);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 33;
			this->textBox4->Text = L"Date Reglement";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1033, 159);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 34;
			this->textBox5->Text = L"Id Client";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form4::textBox5_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(303, 333);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Paiement :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Carte Bancaire", L"Paypal", L"Virement" });
			this->comboBox1->Location = System::Drawing::Point(371, 330);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 38;
			this->comboBox1->Text = L"Moyen de paiement";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox1_SelectedIndexChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(341, 435);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 40;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form4::textBox8_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(355, 414);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 13);
			this->label3->TabIndex = 44;
			this->label3->Text = L"date paiement";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(341, 476);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 45;
			this->textBox6->Text = L"tarif/paiement";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form4::textBox6_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(348, 458);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Prix par paiement";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(554, 262);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(567, 254);
			this->dataGridView2->TabIndex = 47;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 336);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(128, 107);
			this->button7->TabIndex = 48;
			this->button7->Text = L"Charger Paiement";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form4::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(162, 336);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(112, 23);
			this->button8->TabIndex = 49;
			this->button8->Text = L"Afficher Paiement";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(162, 363);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 23);
			this->button9->TabIndex = 50;
			this->button9->Text = L"Ajouter Paiement";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form4::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(162, 391);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(112, 23);
			this->button10->TabIndex = 51;
			this->button10->Text = L"Mettre à jour";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form4::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(162, 420);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(112, 23);
			this->button11->TabIndex = 52;
			this->button11->Text = L"Supprimer Paiement";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form4::button11_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(341, 380);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 53;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form4::textBox7_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(355, 363);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 54;
			this->label5->Text = L"Id paiement";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(1033, 185);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 55;
			this->textBox9->Text = L"Ref Article";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form4::textBox9_TextChanged);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(810, 185);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(141, 23);
			this->button12->TabIndex = 56;
			this->button12->Text = L"Ajouter Article";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form4::button12_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1198, 588);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
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
	this->oSvc2 = gcnew NS_Svc_Com::CServiceCom();
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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DataCom = this->oSvc->SelectionnerCommande("Commande", this->textBox1->Text);
	System::Data::DataTableReader^ ReadCom;
	ReadCom = this->DataCom->CreateDataReader();
	ReadCom->Read();
	this->textBox2->Text = ReadCom->GetValue(1)->ToString();
	this->textBox3->Text = ReadCom->GetValue(2)->ToString();
	this->textBox4->Text = ReadCom->GetValue(3)->ToString();
	this->textBox5->Text = ReadCom->GetValue(4)->ToString();
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView2->Refresh();
	this->oDs2 = this->oSvc2->SelectionnerToutPaiement("Commande");
	this->dataGridView2->DataSource = this->oDs2;
	this->dataGridView2->DataMember = "Commande";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc2->AjouterPaiement(this->textBox1->Text,this->textBox8->Text, float::Parse(this->textBox6->Text), (int)(this->comboBox1->SelectedIndex + 1));
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc2->ModifierPaiement(int::Parse(this->textBox7->Text), this->textBox8->Text, float::Parse(this->textBox6->Text), (int)(this->comboBox1->SelectedIndex + 1));
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc2->SuppPaiement(int::Parse(this->textBox7->Text));
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->AjouterContenu(this->textBox9->Text, this->textBox1->Text);
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
