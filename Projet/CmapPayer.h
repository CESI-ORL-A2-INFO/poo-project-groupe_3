#pragma once

namespace NS_Comp_Payer
{
	ref class CmapPayer
	{
	private:
		System::String^ sSql;
		System::String^ Reference;
		System::String^ Date; // Date de paiement
	public:
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


