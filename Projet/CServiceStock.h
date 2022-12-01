#pragma once
#include "CmapPers.h"
#include "Cadb.h"

namespace NS_Svc_Stock
{
	ref class CServiceStock
	{
	private:
		NS_Comp_Data::Cadb^ oCad;
		NS_Comp_Article::CmapStock^ oMappArticle;
	public:
		CServiceStock(void);
		System::Data::DataSet^ SelectionnerToutStock(System::String^);
		//System::Data::DataSet^ SelectionnerStock(int);
		void AjouterStock(System::String^, System::String^, System::String^);
		void ModifierStock(int, System::String^, System::String^, System::String^);
		void SuppStock(int id);
	};
}
