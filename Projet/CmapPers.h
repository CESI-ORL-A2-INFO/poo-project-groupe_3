#pragma once

namespace NS_Comp_Pers
{
	ref class CmapPers
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ date;
		int IdSup;
		int IdAdresse;
	public:
		System::String^ SelectAll(void);
		System::String^ Select(int);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		int getId();
		void setNom(System::String^);
		System::String^ getNom();
		void setPrenom(System::String^);
		System::String^ getPrenom();
		void setDate(System::String^);
		System::String^ getDate();
		void setIdSup(int);
		int getIdSup();
		void setIdAdresse(int);
		int getIdAdresse();
	};
}


