#include "CServiceCom.h"

NS_Svc_Com::CServiceCom::CServiceCom()
{
	this->oCad = gcnew NS_Comp_Data::Cadb();
	this->oMappCom = gcnew NS_Comp_Com::CmapCom();
	this->oMappPayer = gcnew NS_Comp_Payer::CmapPayer();
}

System::Data::DataSet^ NS_Svc_Com::CServiceCom::SelectionnerToutCommande(System::String^ NomTable)
{
	System::String^ sql;
	sql = this->oMappCom->Select();
	return this->oCad->getRows(sql, NomTable);
}

System::Data::DataSet^ NS_Svc_Com::CServiceCom::SelectionnerCommande(System::String^ NomTable, System::String^ Ref)
{
	System::String^ sql;
	this->oMappCom->setRef(Ref);
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

System::Data::DataSet^ NS_Svc_Com::CServiceCom::SelectionnerToutPaiement(System::String^ NomTable)
{
	System::String^ sql;
	sql = this->oMappPayer->SelectAll();
	return this->oCad->getRows(sql, NomTable);
}

System::Data::DataSet^ NS_Svc_Com::CServiceCom::SelectionnerPaiement(System::String^ NomTable, int Id)
{
	System::String^ sql;
	this->oMappPayer->setRef(Id);
	sql = this->oMappPayer->Select();
	return this->oCad->getRows(sql, NomTable);
}

void NS_Svc_Com::CServiceCom::AjouterPaiement(System::String^ RefCom, System::String^ date, float Prix, int Id)
{
	System::String^ sql;
	this->oMappPayer->setRefCommande(RefCom);
	this->oMappPayer->setDate(date);
	this->oMappPayer->setPrix(Prix);
	this->oMappPayer->setIdMoyen(Id);
	sql = this->oMappPayer->Insert();
	this->oCad->actionRows(sql);

}

void NS_Svc_Com::CServiceCom::ModifierPaiement(int Ref, System::String^ date, float Prix, int Id)
{
	System::String^ sql;
	this->oMappPayer->setRef(Ref);
	this->oMappPayer->setDate(date);
	this->oMappPayer->setPrix(Prix);
	this->oMappPayer->setIdMoyen(Id);
	sql = this->oMappPayer->Update();
	this->oCad->actionRows(sql);

}

void NS_Svc_Com::CServiceCom::SuppPaiement(int Ref)
{
	System::String^ sql;
	this->oMappPayer->setRef(Ref);
	sql = this->oMappPayer->Delete();
	this->oCad->actionRows(sql);

}