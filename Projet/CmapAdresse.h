#pragma once
namespace NS_Comp_Ad
{
	ref class CmapAdresse
	{
	private:
		System::String^ sSql;
		int Id;
		int IdP;
		int numero;
		System::String^ rue;
		System::String^ CP;
		System::String^ ville;
	public:
		System::String^ Select(void);
		System::String^ SelectId(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ Search(void);
		void setId(int);
		int getId();
		void setNumero(int);
		int getNumero();
		void setRue(System::String^);
		System::String^ getRue();
		void setCP(System::String^);
		System::String^ getCP();
		void setVille(System::String^);
		System::String^ getVille();
		void setIdP(int);
		int getIdP();

	};
}


