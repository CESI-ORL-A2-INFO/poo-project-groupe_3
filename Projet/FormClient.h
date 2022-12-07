#pragma once
#include "CServiceClient.h"
namespace Projet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;



	private: System::ComponentModel::IContainer^ components;
	private: NS_Svc_Client::CServiceClient^ oSvc;
	private: NS_Svc_Client::CServiceClient^ oSvc2;
	private: System::Data::DataSet^ DataClient;

	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oDs2;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Button^ button10;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(986, 525);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(765, 207);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form3::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(349, 253);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Info Client";
			this->label1->Click += gcnew System::EventHandler(this, &Form3::label1_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(527, 416);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 31;
			this->textBox9->Text = L"Ville";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form3::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(527, 390);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 30;
			this->textBox8->Text = L"Code Postal";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form3::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(527, 364);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 29;
			this->textBox7->Text = L"Rue";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form3::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(527, 338);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 28;
			this->textBox6->Text = L"Numero";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form3::textBox6_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(340, 353);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 26;
			this->textBox4->Text = L"XXXX-XX-XX";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form3::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(340, 327);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 25;
			this->textBox3->Text = L"Prenom";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form3::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(340, 301);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 24;
			this->textBox2->Text = L"Nom";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form3::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(340, 275);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 23;
			this->textBox1->Text = L"Id";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form3::textBox1_TextChanged);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(169, 309);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 23);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Ajouter Client";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form3::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(169, 376);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 23);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Supprimer Client";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(169, 344);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(141, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Mettre à jour";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(169, 276);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Afficher Client";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(28, 276);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 123);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Charger DB";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(340, 379);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 41;
			this->textBox13->Text = L"Id Adresse";
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Form3::textBox13_TextChanged);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(557, 448);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 23);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Ajouter Adresse";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(557, 477);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 23);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Modifier Adresse";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(715, 278);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(379, 222);
			this->dataGridView2->TabIndex = 22;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(557, 506);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 52);
			this->button10->TabIndex = 23;
			this->button10->Text = L"Générer adresse";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(719, 331);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(342, 175);
			this->dataGridView3->TabIndex = 42;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form3::dataGridView3_CellContentClick);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(527, 503);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(98, 52);
			this->button7->TabIndex = 43;
			this->button7->Text = L"Afficher Adresse";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form3::button7_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(527, 445);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(98, 23);
			this->button11->TabIndex = 44;
			this->button11->Text = L"Ajouter Adresse";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form3::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(527, 474);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(98, 23);
			this->button12->TabIndex = 45;
			this->button12->Text = L"Modifier Adresse";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Adresse de livraison", L"Adresse de facturation" });
			this->comboBox1->Location = System::Drawing::Point(507, 301);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 21);
			this->comboBox1->TabIndex = 46;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1073, 560);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
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
			this->Name = L"Form3";
			this->Text = L"Form3";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Svc_Client::CServiceClient();
		this->oSvc2 = gcnew NS_Svc_Client::CServiceClient();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DataClient = this->oSvc->SelectionnerClient("Client", int::Parse(this->textBox1->Text));
	System::Data::DataTableReader^ ReadClient;
	ReadClient = this->DataClient->CreateDataReader();
	ReadClient->Read();
	this->textBox2->Text = ReadClient->GetValue(1)->ToString();
	this->textBox3->Text = ReadClient->GetValue(2)->ToString();
	this->textBox4->Text = ReadClient->GetValue(3)->ToString();
	this->textBox13->Text = ReadClient->GetValue(4)->ToString();
	}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->AjouterClient(this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, int::Parse(this->textBox13->Text));
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->SuppClient(int::Parse(this->textBox1->Text));
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ModifierClient(int::Parse(this->textBox1->Text), this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, int::Parse(this->textBox13->Text));
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oSvc->SelectionnerToutClient("Client");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Client";
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((this->comboBox1->SelectedIndex + 1) == 1)
	{
		this->dataGridView3->Refresh();
		this->oDs2 = this->oSvc2->AfficherAdresseLiv("Adresse", int::Parse(this->textBox1->Text));
		this->dataGridView3->DataSource = this->oDs2;
		this->dataGridView3->DataMember = "Adresse";
	}
	else {
		
		this->dataGridView3->Refresh();
		this->oDs2 = this->oSvc2->AfficherAdresse("Adresse");
		this->dataGridView3->DataSource = this->oDs2;
		this->dataGridView3->DataMember = "Adresse";
	}
	
}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc2->AjouterAdresse(int::Parse(this->textBox6->Text), this->textBox7->Text, this->textBox8->Text, this->textBox9->Text);;
	if ((this->comboBox1->SelectedIndex+1) == 1) { // adresse livraison
		this->oSvc2->AjouterAdLiv(int::Parse(this->textBox1->Text), int::Parse(this->textBox13->Text));
	}
	else {
		this->oSvc2->ModifierClient(int::Parse(this->textBox1->Text), this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, int::Parse(this->textBox13->Text));
	}
}
};
}
