#pragma once

namespace NS_Comp_AdF
{
	ref class CmapAdFac
	{
	private:
		System::String^ sSql;
		int IdClient;
		int IdAdresse;
	public:
		System::String^ SelectAll(void);
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId_c(int);
		int getId_c();
		void setId_a(int);
		int getId_a();
	};
}


