#pragma once
#include "CServiceStat.h"
namespace Projet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormStat
	/// </summary>
	public ref class FormStat : public System::Windows::Forms::Form
	{
	public:
		FormStat(void)
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
		~FormStat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: NS_Svc_Stat::CServiceStat^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ PanierMoyen;
	private: System::Data::DataSet^ ChiffreAffaire;
	private: System::Data::DataSet^ Reapp;
	private: System::Data::DataSet^ MontantClient;
	private: System::Data::DataSet^ PlusVendus;
	private: System::Data::DataSet^ MoinsVendus;
	private: System::Data::DataSet^ ValeurStock;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;








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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(711, 482);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 21);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormStat::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Panier Moyen", L"Chiffre d\'affaire sur un mois",
					L"Produit sous le seuil de réapprovisionnement", L"Montant total achat par Client", L"10 articles les plus vendus", L"10 articles les moins vendus",
					L"Valeur d\'achat du stock"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(774, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(157, 116);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(571, 309);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormStat::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 131);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormStat::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 178);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormStat::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Id Client";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 228);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(15, 285);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Mois";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 268);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Annee";
			// 
			// FormStat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(798, 515);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"FormStat";
			this->Text = L"FormStat";
			this->Load += gcnew System::EventHandler(this, &FormStat::FormStat_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void FormStat_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Svc_Stat::CServiceStat();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox1->SelectedIndex + 1 == 1)
	{
		this->dataGridView1->Refresh();
		this->PanierMoyen = this->oSvc->AffichagePanierMoyen("Article");
		this->dataGridView1->DataSource = this->PanierMoyen;
		this->dataGridView1->DataMember = "Article";
	}
	else if (this->comboBox1->SelectedIndex + 1 == 2)
	{
		this->dataGridView1->Refresh();
		this->ChiffreAffaire = this->oSvc->AffichageChiffreAffaire("Article",this->textBox2->Text, this->textBox3->Text);
		this->dataGridView1->DataSource = this->ChiffreAffaire;
		this->dataGridView1->DataMember = "Article";
	}
	else if (this->comboBox1->SelectedIndex + 1 == 3)
	{
		this->dataGridView1->Refresh();
		this->Reapp = this->oSvc->AffichageReapp("Article");
		this->dataGridView1->DataSource = this->Reapp;
		this->dataGridView1->DataMember = "Article";
	}
	else if (this->comboBox1->SelectedIndex + 1 == 4)
	{
		this->dataGridView1->Refresh();
		this->MontantClient = this->oSvc->AffichageMontantClient("Article", int::Parse(this->textBox1->Text));
		this->dataGridView1->DataSource = this->MontantClient;
		this->dataGridView1->DataMember = "Article";
	}
	else if (this->comboBox1->SelectedIndex + 1 == 5)
	{
		this->dataGridView1->Refresh();
		this->PlusVendus = this->oSvc->AffichagePlusVendus("Article");
		this->dataGridView1->DataSource = this->PlusVendus;
		this->dataGridView1->DataMember = "Article";
	}
	else if (this->comboBox1->SelectedIndex + 1 == 6)
	{
		this->dataGridView1->Refresh();
		this->MoinsVendus = this->oSvc->AffichageMoinsVendus("Article");
		this->dataGridView1->DataSource = this->MoinsVendus;
		this->dataGridView1->DataMember = "Article";
	}
	else if (this->comboBox1->SelectedIndex + 1 == 7)
	{
		this->dataGridView1->Refresh();
		this->ValeurStock = this->oSvc->AffichageValeurStock("Article");
		this->dataGridView1->DataSource = this->ValeurStock;
		this->dataGridView1->DataMember = "Article";
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}