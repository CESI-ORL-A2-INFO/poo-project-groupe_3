#pragma once
#include "CServicePers.h"
namespace Projet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: NS_Svc_Pers::CServicePers^ oSvc;
	private: NS_Svc_Pers::CServicePers^ oSvc2;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oDs2;
	private: System::Data::DataSet^ DataPers;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button10;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button10 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1031, 545);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(683, 161);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form2::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(46, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 123);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Charger DB";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(187, 240);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Afficher Personnel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(187, 308);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(141, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Mettre � jour";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(187, 340);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Supprimer Personnel";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(187, 273);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Ajouter Personnel";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form2::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(358, 239);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"Id";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(358, 265);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"Nom";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(358, 291);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"Prenom";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(358, 317);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"XX/XX/XXXX";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(358, 343);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"Id Superviseur";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(557, 327);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 12;
			this->textBox6->Text = L"Numero";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(557, 353);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 13;
			this->textBox7->Text = L"Rue";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(557, 379);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 14;
			this->textBox8->Text = L"Code Postal";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(557, 405);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 15;
			this->textBox9->Text = L"Ville";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(367, 217);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Info Personnel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(581, 278);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Adresse";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(557, 301);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 18;
			this->textBox10->Text = L"Id Adresse";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(46, 369);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(124, 23);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Test Cr�ation";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form2::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(557, 448);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 23);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Ajouter Adresse";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form2::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(557, 477);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 23);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Modifier Adresse";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form2::button9_Click);
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
			this->button10->Text = L"G�n�rer adresse";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form2::button10_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1118, 580);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
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
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::FormPers_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void FormPers_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->oSvc = gcnew NS_Svc_Pers::CServicePers();
	this->oSvc2 = gcnew NS_Svc_Pers::CServicePers();
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oSvc->SelectionnerToutPersonnel("Personnel");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Personnel";
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->AjouterPersonnel(this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, int::Parse(this->textBox5->Text), int::Parse(this->textBox10->Text));
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ModifierPersonnel(int::Parse(this->textBox1->Text),this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, int::Parse(this->textBox5->Text), int::Parse(this->textBox10->Text));
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->SuppPersonnel(int::Parse(this->textBox1->Text));
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->textBox1->Text->Equals(""))
	{
		this->DataPers = this->oSvc->SelectionnerPersonnel("Personnel", int::Parse(this->textBox1->Text));
		System::Data::DataTableReader^ ReadPers;
		ReadPers = this->DataPers->CreateDataReader();
		ReadPers->Read();
		this->textBox2->Text = ReadPers->GetValue(1)->ToString();
		this->textBox3->Text = ReadPers->GetValue(2)->ToString();
		this->textBox4->Text = ReadPers->GetValue(3)->ToString();
		this->textBox10->Text = ReadPers->GetValue(4)->ToString();
		this->textBox8->Text = ReadPers->GetValue(5)->ToString();

	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_Svc_Pers::CServicePers^ testSvc = gcnew NS_Svc_Pers::CServicePers();
	testSvc->AjouterPersonnel("test", "test", "2001/01/01", 11, 2);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//NS_Svc_Pers::CServicePers^ tempSvc = gcnew NS_Svc_Pers::CServicePers();
	this->oSvc2->AjouterAdresse(int::Parse(this->textBox6->Text), this->textBox7->Text, this->textBox8->Text, this->textBox9->Text);
	
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc2->ModifierAdresse(int::Parse(this->textBox10->Text), int::Parse(this->textBox6->Text), this->textBox7->Text, this->textBox8->Text, this->textBox9->Text);

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView2->Refresh();
	this->oDs2 = this->oSvc2->AfficherAdresse("Adresse");
	this->dataGridView2->DataSource = this->oDs2;
	this->dataGridView2->DataMember = "Adresse";
}
};
}
