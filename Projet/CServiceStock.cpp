#include "CServiceStock.h"


Ns_Svc_Stock::CServiceStock::CServiceStock()
{
	this->oCad = gcnew NS_Comp_Data::Cadb();
	this->oMappArticle = gcnew Ns_Comp_Article::CmapArticle();
}

/*System::Data::DataSet^ Ns_Svc_Stock::CServiceStock::SelectionnerStock(int id)
{
	
}*/

System::Data::DataSet^ Ns_Svc_Stock::CServiceStock::SelectionnerToutStock(System::String^ NomTable)
{
	System::String^ sql;
	sql = this->oMappArticle->SelectAll();
	return this->oCad->getRows(sql, NomTable);
}

void Ns_Svc_Stock::CServiceStock::AjouterStock(System::String^ nom, System::String^ prenom, System::String^ date)
{
	System::String^ sql;

	this->oMappArticle->setNom(nom);
	this->oMappArticle->setPrenom(prenom);
	this->oMappArticle->setDate(date);
	this->oMappArticle->setIdSup(IdSup);
	this->oMappArticle->setIdAdresse(IdAdresse);
	sql = this->oMappArticle->Insert();

	this->oCad->actionRows(sql);
}


void Ns_Svc_Stock::CServiceStock::ModifierStock(int Id, System::String^ nom, System::String^ prenom, System::String^ date)
{
	System::String^ sql;

	this->oMappArticle->setId(Id);
	this->oMappArticle->setNom(nom);
	this->oMappArticle->setPrenom(prenom);
	this->oMappArticle->setDate(date);
	this->oMappArticle->setIdSup(IdSup);
	this->oMappArticle->setIdAdresse(IdAdresse);
	sql = this->oMappArticle->Update();

	this->oCad->actionRows(sql);
}

void Ns_Svc_Stock::CServiceStock::SuppStock(int Id)
{
	System::String^ sql;
	this->oMappArticle->setId(Id);
	sql = this->oMappArticle->Delete();
	this->oCad->actionRows(sql);
}