#pragma once

namespace NS_Comp_Com
{
	ref class CmapCom
	{
	private:
		System::String^ sSql;
		System::String^ Reference;
		System::String^ dateReglement;
		System::String^ dateEmission;
		System::String^ dateLivraison;
		int IdClient;
	public:
		System::String^ SelectAll(void);
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setRef(System::String^);
		System::String^ getRef();
	};
}


