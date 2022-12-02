#pragma once

namespace NS_Comp_Art
{
	ref class CmapArticle
	{
	private:
		System::String^ sSql;
		System::String^ Reference;
		System::String^ nom;
		int quantite;
		System::String^ montant;
		int TVA;
		int Seuil;
	public:
		System::String^ Select(void);
		System::String^ SelectRef(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setRef(System::String^);
		System::String^ getRef();
		void setNom(System::String^);
		System::String^ getNom();
		void setQuantite(int);
		int getQuantite();
		void setMontant(System::String^);
		System::String^ getMontant();
		int getTVA();
		void setTVA(int);
		int getSeuil();
		void setSeuil(int);
	};
}


