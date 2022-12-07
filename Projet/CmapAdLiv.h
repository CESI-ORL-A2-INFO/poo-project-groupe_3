#pragma once
namespace NS_Comp_AdL
{
	ref class CmapAdLiv
	{
	private:
		int IdClient;
		int IdAdresse;
	public:
		System::String^ Select();
		System::String^ SelectId();
		System::String^ Insert();
		System::String^ Update();
		System::String^ Delete();
		int getId_c();
		void setId_c(int);
		int getId_a();
		void setId_a(int);
	};
}