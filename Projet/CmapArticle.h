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
		float montant;
	public:
		System::String^ SelectAll(void);
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setRef(System::String^);
		System::String^ getRef();
		void setNom(System::String^);
		System::String^ getNom();
		void setQuantite(int);
		int getQuantite();
		void setMontant(float);
		float getMontant();
	};
}


