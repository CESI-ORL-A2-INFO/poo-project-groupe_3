#pragma once
namespace NS_Comp_Stat
{
	ref class CmapStat
	{
	private:
		int IdClient;
		System::String^ mois;
		System::String^ annee;
	public:
		System::String^ PanierMoyen(void);
		System::String^ ChiffreAffaire(void);
		System::String^ Reapp(void);
		System::String^ MontantClient(void);
		System::String^ PlusVendus(void);
		System::String^ MoinsVendus(void);
		System::String^ ValeurStock(void);
		int getId(void);
		void setId(int);
		System::String^ getMois(void);
		void setMois(System::String^);
		System::String^ getAnnee(void);
		void setAnnee(System::String^);
	};
}


