#pragma once
namespace NS_Comp_AdFac
{
	ref class CmapPossFac
	{
	private:
		System::String^ sSql;
		int Id_adresse;
		int Id_Client;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setIdAd(int);
		int GetIdAd();
		void setIdCl(int);
		int GetIdCl();
	};
}


