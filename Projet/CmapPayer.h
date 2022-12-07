#pragma once

namespace NS_Comp_Payer
{
	ref class CmapPayer
	{
	private:
		System::String^ sSql;
		int Reference;
		System::String^ RefCommande;
		System::String^ Date; // Date de paiement
		float prix;
		int IdMoyen;
	public:
		System::String^ Select(void);
		System::String^ SelectAll(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setRef(int);
		int getRef();
		void setDate(System::String^);
		System::String^ getDate();
		void setPrix(float);
		float getPrix();
		void setIdMoyen(int);
		int getIdMoyen();
		void setRefCommande(System::String^);
		System::String^ getRefCommande();
	};
}


