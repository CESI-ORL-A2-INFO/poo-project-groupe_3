#include "CServiceCom.h"

NS_Svc_Com::CServiceCom::CServiceCom()
{
	this->oCad = gcnew NS_Comp_Data::Cadb();
	this->oMappCom = gcnew NS_Comp_Com::CmapCom();
}

System::Data::DataSet^ NS_Svc_Com::CServiceCom::SelectionnerToutCommande(System::String^ NomTable)
{
	System::String^ sql;
	sql = this->oMappCom->Select();
	return this->oCad->getRows(sql, NomTable);
}

void NS_Svc_Com::CServiceCom::AjouterCommande(System::String^ RefCommande, System::String^ reg, System::String^ emi, System::String^ liv, int IdClient)
{
	System::String^ sql;
	this->oMappCom->setRef(RefCommande);
	this->oMappCom->setDate_reg(reg);
	this->oMappCom->setDate_emi(emi);
	this->oMappCom->setDate_liv(liv);
	this->oMappCom->setIdClient(IdClient);

	sql = this->oMappCom->Insert();
	this->oCad->actionRows(sql);
}

void NS_Svc_Com::CServiceCom::ModifierCommande(System::String^ RefCommande, System::String^ reg, System::String^ emi, System::String^ liv, int IdClient)
{
	System::String^ sql;

	this->oMappCom->setRef(RefCommande);
	this->oMappCom->setDate_reg(reg);
	this->oMappCom->setDate_emi(emi);
	this->oMappCom->setDate_liv(liv);
	this->oMappCom->setIdClient(IdClient);

	sql = this->oMappCom->Update();
	this->oCad->actionRows(sql);
}

void NS_Svc_Com::CServiceCom::SuppCommande(System::String^ RefCommande)
{
	System::String^ sql;

	this->oMappCom->setRef(RefCommande);

	sql = this->oMappCom->Delete();
	this->oCad->actionRows(sql);
}