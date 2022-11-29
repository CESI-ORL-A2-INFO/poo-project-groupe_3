#pragma once
namespace NS_Comp_Seuil
{
	ref class CmapSeuil
	{
	private:
		System::String^ sSql;
		int Id; 
		int seuil;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		int getId();
		void setSeuil(int);
		int getSeuil();
	};
}


