#pragma once
#include "CmapCom.h"
#include "CmapPayer.h"
#include "CmapContient.h"
#include "Cadb.h"

namespace NS_Svc_Com
{
	ref class CServiceCom
	{
	private:
		NS_Comp_Data::Cadb^ oCad;
		NS_Comp_Com::CmapCom^ oMappCom;
		NS_Comp_Payer::CmapPayer^ oMappPayer;
		NS_Comp_Contient::CmapContient^ oMappContient;
	public:
		CServiceCom();
		System::Data::DataSet^ SelectionnerToutCommande(System::String^);
		System::Data::DataSet^ SelectionnerCommande(System::String^, System::String^);
		void AjouterCommande(System::String^ ,System::String^, System::String^, System::String^, int);
		void ModifierCommande(System::String^, System::String^, System::String^, System::String^, int);
		void SuppCommande(System::String^);
		System::Data::DataSet^ SelectionnerToutPaiement(System::String^);
		System::Data::DataSet^ SelectionnerPaiement(System::String^, int);
		void AjouterPaiement(System::String^,System::String^, float, int);
		void ModifierPaiement(int, System::String^, float, int);
		void SuppPaiement(int);
		void AjouterContenu(System::String^, System::String^);
	};
}


