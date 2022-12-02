#include "CServicePers.h"


NS_Svc_Pers::CServicePers::CServicePers()
{
	this->oCad = gcnew NS_Comp_Data::Cadb();
	this->oMappPers = gcnew NS_Comp_Pers::CmapPers();
}

/*System::Data::DataSet^ NS_Svc_Pers::CServicePers::SelectionnerPersonnel(int id)
{
	
}*/

System::Data::DataSet^ NS_Svc_Pers::CServicePers::SelectionnerToutPersonnel(System::String^ NomTable)
{
	System::String^ sql;
	sql = this->oMappPers->Select();
	return this->oCad->getRows(sql, NomTable);
}

System::Data::DataSet^ NS_Svc_Pers::CServicePers::SelectionnerPersonnel(System::String^ NomTable, int Id)
{
	System::String^ sql;
	this->oMappPers->setId(Id);
	sql = this->oMappPers->SelectId();
	return this->oCad->getRows(sql, NomTable);
}

void NS_Svc_Pers::CServicePers::AjouterPersonnel(System::String^ nom, System::String^ prenom, System::String^ date, int IdSup, int IdAdresse )
{
	System::String^ sql;

	this->oMappPers->setNom(nom);
	this->oMappPers->setPrenom(prenom);
	this->oMappPers->setDate(date);
	this->oMappPers->setIdSup(IdSup);
	this->oMappPers->setIdAdresse(IdAdresse);
	sql = this->oMappPers->Insert();

	this->oCad->actionRows(sql);
}


void NS_Svc_Pers::CServicePers::ModifierPersonnel(int Id, System::String^ nom, System::String^ prenom, System::String^ date, int IdSup, int IdAdresse)
{
	System::String^ sql;

	this->oMappPers->setId(Id);
	this->oMappPers->setNom(nom);
	this->oMappPers->setPrenom(prenom);
	this->oMappPers->setDate(date);
	this->oMappPers->setIdSup(IdSup);
	this->oMappPers->setIdAdresse(IdAdresse);
	sql = this->oMappPers->Update();

	this->oCad->actionRows(sql);
}

void NS_Svc_Pers::CServicePers::SuppPersonnel(int Id)
{
	System::String^ sql;
	this->oMappPers->setId(Id);
	sql = this->oMappPers->Delete();
	this->oCad->actionRows(sql);
}