#pragma once
#include "CmapStat.h"
#include "Cadb.h"

namespace NS_Svc_Stat
{
	ref class CServiceStat
	{
	private:
		NS_Comp_Data::Cadb^ oCad;
		NS_Comp_Stat::CmapStat^ oMappStat;
	public:
		CServiceStat(void);
		System::Data::DataSet^ AffichagePanierMoyen(System::String^);
		System::Data::DataSet^ AffichageChiffreAffaire(System::String^);
		System::Data::DataSet^ AffichageReapp(System::String^);
		System::Data::DataSet^ AffichageMontantClient(System::String^);
		System::Data::DataSet^ AffichagePlusVendus(System::String^);
		System::Data::DataSet^ AffichageMoinsVendus(System::String^);
		System::Data::DataSet^ AffichageValeurStock(System::String^);
	};

}

