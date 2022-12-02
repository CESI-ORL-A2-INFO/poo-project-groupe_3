#pragma once
#include "CmapPers.h"
#include "Cadb.h"

namespace NS_Svc_Pers
{
	ref class CServicePers
	{
	private:
		NS_Comp_Data::Cadb^ oCad;
		NS_Comp_Pers::CmapPers^ oMappPers;
	public:
		CServicePers(void);
		System::Data::DataSet^ SelectionnerToutPersonnel(System::String^);
		System::Data::DataSet^ SelectionnerPersonnel(System::String^, int);
		void AjouterPersonnel(System::String^, System::String^, System::String^ , int, int);
		void ModifierPersonnel(int, System::String^, System::String^, System::String^, int, int);
		// RefArticle -- Nom -- Quantite -- Montant - IdTva -- IdSeuil
		void SuppPersonnel(int id);
	};
}
