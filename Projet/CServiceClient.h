#pragma once
#include "CmapClient.h"
#include "CmapAdresse.h"
#include "CmapAdLiv.h"
#include "Cadb.h"
namespace NS_Svc_Client
{
	ref class CServiceClient
	{
	private:
		NS_Comp_Data::Cadb^ oCad;
		NS_Comp_Client::CmapClient^ oMappClient;
		NS_Comp_Ad::CmapAdresse^ oMappAdresse;
		NS_Comp_AdL::CmapAdLiv^ oMappAdLiv;
	public:
		CServiceClient(void);
		System::Data::DataSet^ SelectionnerToutClient(System::String^);
		System::Data::DataSet^ SelectionnerClient(System::String^, int);
		System::Data::DataSet^ AfficherAdresse(System::String^);
		System::Data::DataSet^ AfficherAdresseLiv(System::String^, int);
		System::Data::DataSet^ SelectionnerFactureLiv(System::String^, int);
		System::Data::DataSet^ SelectionnerFactureFac(System::String^, int);
		void AjouterClient(System::String^, System::String^, System::String^, int);
		void ModifierClient(int, System::String^, System::String^, System::String^,int);
		void SuppClient(int);
		void AjouterAdresse(int, System::String^, System::String^, System::String^);
		void ModifierAdresse(int, int, System::String^, System::String^, System::String^);
		void AjouterAdLiv(int, int);
	};
}


