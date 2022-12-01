#pragma once

namespace NS_Comp_Paiement
{
	ref class CmapPaiement
	{
	private:
		System::String^ sSql;
		System::String^ Reference;
		System::String^ Date; // Date de paiement
		float Prix;
		int IdMoyen;
	public:
		System::String^ SelectAll(void);
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setRef(System::String^);
		System::String^ getRef();
		void setDate(System::String^);
		System::String^ getDate();
	};
}


