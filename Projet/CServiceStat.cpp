#include "CServiceStat.h"

NS_Svc_Stat::CServiceStat::CServiceStat()
{
	this->oCad = gcnew NS_Comp_Data::Cadb();
	this->oMappStat = gcnew NS_Comp_Stat::CmapStat();
}

System::Data::DataSet^ NS_Svc_Stat::CServiceStat::AffichagePanierMoyen(System::String^ Nom)
{
	System::String^ sql;
	sql = this->oMappStat->PanierMoyen();
	return this->oCad->getRows(sql, Nom);
}

System::Data::DataSet^ NS_Svc_Stat::CServiceStat::AffichageChiffreAffaire(System::String^ Nom)
{
	System::String^ sql;
	sql = this->oMappStat->ChiffreAffaire();
	return this->oCad->getRows(sql, Nom);
}

System::Data::DataSet^ NS_Svc_Stat::CServiceStat::AffichageReapp(System::String^ Nom)
{
	System::String^ sql;
	sql = this->oMappStat->Reapp();
	return this->oCad->getRows(sql, Nom);
}

System::Data::DataSet^ NS_Svc_Stat::CServiceStat::AffichageMontantClient(System::String^ Nom)
{
	System::String^ sql;
	sql = this->oMappStat->MontantClient();
	return this->oCad->getRows(sql, Nom);
}

System::Data::DataSet^ NS_Svc_Stat::CServiceStat::AffichagePlusVendus(System::String^ Nom)
{
	System::String^ sql;
	sql = this->oMappStat->PlusVendus();
	return this->oCad->getRows(sql, Nom);
}

System::Data::DataSet^ NS_Svc_Stat::CServiceStat::AffichageMoinsVendus(System::String^ Nom)
{
	System::String^ sql;
	sql = this->oMappStat->MoinsVendus();
	return this->oCad->getRows(sql, Nom);
}

System::Data::DataSet^ NS_Svc_Stat::CServiceStat::AffichageValeurStock(System::String^ Nom)
{
	System::String^ sql;
	sql = this->oMappStat->ValeurStock();
	return this->oCad->getRows(sql, Nom);
}