#include "CServiceClient.h"

NS_Svc_Client::CServiceClient::CServiceClient()
{
	this->oCad = gcnew NS_Comp_Data::Cadb();
	this->oMappClient = gcnew NS_Comp_Client::CmapClient();
	this->oMappAdresse = gcnew NS_Comp_Ad::CmapAdresse();
	this->oMappAdLiv = gcnew NS_Comp_AdL::CmapAdLiv();
}

System::Data::DataSet^ NS_Svc_Client::CServiceClient::SelectionnerToutClient(System::String^ NomTable)
{
	System::String^ sql;
	sql = this->oMappClient->Select();
	return this->oCad->getRows(sql, NomTable);
}

System::Data::DataSet^ NS_Svc_Client::CServiceClient::SelectionnerClient(System::String^ NomTable, int id)
{
	System::String^ sql;
	this->oMappClient->setId(id);
	sql = this->oMappClient->Select();
	return this->oCad->getRows(sql, NomTable);
}

System::Data::DataSet^ NS_Svc_Client::CServiceClient::SelectionnerFactureLiv(System::String^ NomTable, int id)
{
	System::String^ sql;
	this->oMappClient->setId(id);
	sql = this->oMappAdLiv->SelectId();
	return this->oCad->getRows(sql, NomTable);
}

System::Data::DataSet^ NS_Svc_Client::CServiceClient::SelectionnerFactureFac(System::String^ NomTable, int id)
{
	System::String^ sql;
	this->oMappClient->setId(id);
	sql = this->oMappClient->FactureFac();
	return this->oCad->getRows(sql, NomTable);
}


void NS_Svc_Client::CServiceClient::AjouterClient(System::String^ nom, System::String^ prenom, System::String^ date, int IdAdresse)
{
	System::String^ sql;
	this->oMappClient->setNom(nom);
	this->oMappClient->setPrenom(prenom);
	this->oMappClient->setDate(date);
	this->oMappClient->setId(IdAdresse);

	sql = this->oMappClient->Insert();

	this->oCad->actionRows(sql);
}

void NS_Svc_Client::CServiceClient::ModifierClient(int Id, System::String^ nom, System::String^ prenom, System::String^ date, int IdAdresse)
{
	System::String^ sql;
	this->oMappClient->setId(Id);
	this->oMappClient->setNom(nom);
	this->oMappClient->setPrenom(prenom);
	this->oMappClient->setDate(date);
	this->oMappClient->setIdAd(IdAdresse);

	sql = this->oMappClient->Update();

	this->oCad->actionRows(sql);
}

void NS_Svc_Client::CServiceClient::SuppClient(int Id)
{
	System::String^ sql;
	this->oMappClient->setId(Id);
	sql = this->oMappClient->Delete();
	this->oCad->actionRows(sql);
}

void NS_Svc_Client::CServiceClient::AjouterAdresse(int numero, System::String^ rue, System::String^ Code, System::String^ ville)
{
	System::String^ sql;

	this->oMappAdresse->setNumero(numero);
	this->oMappAdresse->setRue(rue);
	this->oMappAdresse->setCP(Code);
	this->oMappAdresse->setVille(ville);
	sql = this->oMappAdresse->Insert();
	this->oCad->actionRows(sql);
}


void NS_Svc_Client::CServiceClient::ModifierAdresse(int idad, int numero, System::String^ rue, System::String^ Code, System::String^ ville)
{
	System::String^ sql;

	this->oMappAdresse->setId(idad);
	this->oMappAdresse->setNumero(numero);
	this->oMappAdresse->setRue(rue);
	this->oMappAdresse->setCP(Code);
	this->oMappAdresse->setVille(ville);

	sql = this->oMappAdresse->Update();
	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Svc_Client::CServiceClient::AfficherAdresse(System::String^ NomTable)
{
	System::String^ sql;
	sql = this->oMappAdresse->Select();
	return this->oCad->getRows(sql, NomTable);
}

System::Data::DataSet^ NS_Svc_Client::CServiceClient::AfficherAdresseLiv(System::String^ NomTable, int)
{
	System::String^ sql;
	sql = this->oMappAdLiv->Select();
	return this->oCad->getRows(sql, NomTable);
}

void NS_Svc_Client::CServiceClient::AjouterAdLiv(int IdClient, int IdAdresse) {
	System::String^ sql;
	this->oMappAdLiv->setId_c(IdClient);
	this->oMappAdLiv->setId_a(IdAdresse);
	sql = oMappAdLiv->Insert();
	this->oCad->actionRows(sql);
}