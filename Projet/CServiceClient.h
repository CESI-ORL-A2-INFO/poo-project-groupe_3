#pragma once
#include "CmapClient.h"
#include "Cadb.h"
namespace NS_Svc_Client
{
	ref class CServiceClient
	{
	private:
		NS_Comp_Data::Cadb^ oCad;
		NS_Comp_Client::CmapClient^ oMappClient;
	public:
		CServiceClient(void);
		System::Data::DataSet^ SelectionnerToutClient(System::String^);
		System::Data::DataSet^ SelectionnerClient(System::String^, int);
		void AjouterClient(System::String^, System::String^, System::String^, int);
		void ModifierClient(int, System::String^, System::String^, System::String^,int);
		void SuppClient(int);
	};
}


