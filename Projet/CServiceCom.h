#pragma once
#include "CmapCom.h"
#include "Cadb.h"

namespace NS_Svc_Com
{
	ref class CServiceCom
	{
	private:
		NS_Comp_Data::Cadb^ oCad;
		NS_Comp_Com::CmapCom^ oMappCom;
	public:
		CServiceCom();
		System::Data::DataSet^ SelectionnerToutCommande(System::String^);
		System::Data::DataSet^ SelectionnerCommande(System::String^, System::String^);
		void AjouterCommande(System::String^ ,System::String^, System::String^, System::String^, int);
		void ModifierCommande(System::String^, System::String^, System::String^, System::String^, int);
		void SuppCommande(System::String^);
	};
}


