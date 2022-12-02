#pragma once
#include "CmapArticle.h"
#include "Cadb.h"
namespace NS_Svc_Stock
{
	ref class CServiceStock
	{
	private:
		NS_Comp_Data::Cadb^ oCad;
		NS_Comp_Art::CmapArticle^ oMappStock;
	public:
		CServiceStock();
		System::Data::DataSet^ SelectionnerToutStock(System::String^);
		void AjouterArticle(System::String^, System::String^, int, float, int, int);
		void ModifierArticle(System::String^,System::String^, int, float, int, int);
		void SuppArticle(System::String^);
	};
}


