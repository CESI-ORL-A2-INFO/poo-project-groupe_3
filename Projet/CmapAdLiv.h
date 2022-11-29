#pragma once

namespace NS_Comp_AdL
{
	ref class CmapAdLiv
	{
	private:
		System::String^ sSql;
		int Id_client;
		int Id_Adresse;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId_c(int);
		int getId_c();
		void setId_a(int);
		int getId_a();
	};
}
