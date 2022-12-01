#pragma once
namespace NS_Comp_Moyen
{
	ref class CmapMoyen
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ moyen;
	public:
		System::String^ SelectAll(void);
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		int getId();
		void setMoyen(System::String^);	
		System::String^ getMoyen();
	};
}


