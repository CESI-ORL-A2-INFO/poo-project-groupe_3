#pragma once

namespace NS_Comp_Contient
{
	ref class CmapContient
	{
	private:
		System::String^ sSql;
		System::String^ ReferenceC;
		System::String^ ReferenceA;
	public:
		System::String^ SelectAll(void);
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		void setRefCom(System::String^);
		System::String^ getRefCom();
		void setRefArt(System::String^);
		System::String^ getRefArt();
	};
}


