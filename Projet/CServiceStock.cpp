#include "CServiceStock.h"

NS_Svc_Stock::CServiceStock::CServiceStock()
{
	this->oCad = gcnew NS_Comp_Data::Cadb();
	this->oMappStock = gcnew NS_Comp_Art::CmapArticle();
}

System::Data::DataSet^ NS_Svc_Stock::CServiceStock::SelectionnerToutStock(System::String^ NomTable)
{
	System::String^ sql;
	sql = this->oMappStock->Select();
	return this->oCad->getRows(sql, NomTable);
}

System::Data::DataSet^ NS_Svc_Stock::CServiceStock::SelectionnerStock(System::String^ NomTable, System::String^ Ref)
{
	System::String^ sql;
	this->oMappStock->setRef(Ref);
	sql = this->oMappStock->SelectRef();
	return this->oCad->getRows(sql, NomTable);
}

void NS_Svc_Stock::CServiceStock::AjouterArticle(System::String^ ref , System::String^ nom , int quantite, System::String^ montant, int tva, int seuil)
{
	System::String^ sql;
	
	this->oMappStock->setRef(ref);
	this->oMappStock->setNom(nom);
	this->oMappStock->setQuantite(quantite);
	this->oMappStock->setMontant(montant);
	this->oMappStock->setTVA(tva);
	this->oMappStock->setSeuil(seuil);
	sql = this->oMappStock->Insert();
	this->oCad->actionRows(sql);
}


void NS_Svc_Stock::CServiceStock::ModifierArticle(System::String^ Reference, System::String^ nom, int quantite, System::String^ montant, int tva, int seuil)
{
	System::String^ sql;

	this->oMappStock->setRef(Reference);
	this->oMappStock->setNom(nom);
	this->oMappStock->setQuantite(quantite);
	this->oMappStock->setMontant(montant);
	this->oMappStock->setTVA(tva);
	this->oMappStock->setSeuil(seuil);
	sql = this->oMappStock->Update();
	this->oCad->actionRows(sql);
}

void NS_Svc_Stock::CServiceStock::SuppArticle(System::String^ Reference)
{
	System::String^ sql;
	this->oMappStock->setRef(Reference);
	sql = this->oMappStock->Delete();
	this->oCad->actionRows(sql);
}