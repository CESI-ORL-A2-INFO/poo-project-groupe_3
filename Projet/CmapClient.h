#pragma once

namespace NS_Comp_Client
{
	ref class CmapClient
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ date;
	public:
		System::String^ SelectAll(void);
		System::String^ Select(void);
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
	};
}


