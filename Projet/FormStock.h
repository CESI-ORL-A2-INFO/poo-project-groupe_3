#pragma once
#include "CServiceStock.h"
namespace Projet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form5(void)
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
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: NS_Svc_Stock::CServiceStock^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ DataStock;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(586, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 18);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(649, 207);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form5::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(371, 248);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Info Article";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(362, 348);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 50;
			this->textBox4->Text = L"Montant";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(362, 322);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 49;
			this->textBox3->Text = L"Quantite";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(362, 296);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 48;
			this->textBox2->Text = L"Nom";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(362, 270);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 47;
			this->textBox1->Text = L"Reference";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(192, 287);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 23);
			this->button6->TabIndex = 46;
			this->button6->Text = L"Ajouter Article";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form5::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(192, 354);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 23);
			this->button5->TabIndex = 45;
			this->button5->Text = L"Supprimer Article";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form5::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(192, 322);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(141, 23);
			this->button4->TabIndex = 44;
			this->button4->Text = L"Mettre à jour";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form5::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(192, 254);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 23);
			this->button3->TabIndex = 43;
			this->button3->Text = L"Afficher Stock";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form5::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(51, 254);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 123);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Charger DB";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form5::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"8", L"10", L"12", L"15" });
			this->comboBox1->Location = System::Drawing::Point(487, 324);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 55;
			this->comboBox1->Text = L"Seuil";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"5%", L"10%", L"15%", L"20%" });
			this->comboBox2->Location = System::Drawing::Point(487, 287);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 56;
			this->comboBox2->Text = L"TVA";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form5::comboBox2_SelectedIndexChanged);
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(673, 421);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"Form5";
			this->Text = L"Form5";
			this->Load += gcnew System::EventHandler(this, &Form5::FormStock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormStock_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Svc_Stock::CServiceStock();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->SelectionnerToutStock("Article");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Article";
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->AjouterArticle(this->textBox1->Text, this->textBox2->Text, int::Parse(this->textBox3->Text), this->textBox4->Text, (int)(this->comboBox2->SelectedIndex + 1), (int)(this->comboBox1->SelectedIndex + 1)); //System::String ^ nom, int quantite, float montant, int tva, int seuil
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ModifierArticle(this->textBox1->Text, this->textBox2->Text, int::Parse(this->textBox3->Text), this->textBox4->Text, (int)(this->comboBox2->SelectedIndex + 1), (int)(this->comboBox1->SelectedIndex + 1));
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->SuppArticle(this->textBox1->Text);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DataStock = this->oSvc->SelectionnerStock("Article", this->textBox1->Text);
	System::Data::DataTableReader^ ReadStock;
	ReadStock = this->DataStock->CreateDataReader();
	ReadStock->Read();
	this->textBox2->Text = ReadStock->GetValue(1)->ToString();
	this->textBox3->Text = ReadStock->GetValue(2)->ToString();
	this->textBox4->Text = ReadStock->GetValue(3)->ToString();
	//this->textBox13->Text = ReadPers->GetValue(4)->ToString();
	//this->textBox5->Text = ReadPers->GetValue(5)->ToString();
}
private: System::Void TVAbox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
