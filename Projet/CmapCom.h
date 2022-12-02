#pragma once

namespace NS_Comp_Com
{
	ref class CmapCom
	{
	private:
		System::String^ sSql;
		System::String^ Reference;
		System::String^ date_reg;
		System::String^ date_emi;
		System::String^ date_liv;
		int IdClient;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setRef(System::String^);
		System::String^ getRef();
		void setDate_reg(System::String^);
		System::String^ getDate_reg();
		void setDate_emi(System::String^);
		System::String^ getDate_emi();
		void setDate_liv(System::String^);
		System::String^ getDate_liv();
		void setIdClient(int);
		int getIdClient();
	};
}


