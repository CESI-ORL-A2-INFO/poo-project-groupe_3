#pragma once
namespace NS_Comp_Cont
{
	ref class CmapCont
	{
	private:
		System::String^ sSql;
		System::String^ RefCommande;
		System::String^ RefArticle;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setRefCom(System::String^);
		System::String^ getRefCom();
		void setRefArt(System::String^);
		System::String^ getRefArt();
	};
}


