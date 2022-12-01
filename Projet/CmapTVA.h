#pragma once
namespace NS_Comp_TVA
{
	ref class CmapTVA
	{
	private:
		System::String^ sSql;
		int Id;
		int pourcentage;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		int getId();
		void setPourcentage(int);
		int getPourcentage();
	};
}


