#include "CmapContient.h"

System::String^ NS_Comp_Contient::CmapContient::Select()
{
	return "SELECT * FROM contient";
}

System::String^ NS_Comp_Contient::CmapContient::Insert()
{
	return "INSERT INTO contient (RefCom, RefArt) VALUES ( '" + this->ReferenceC + "','" + this->ReferenceA + "')";
}

System::String^ NS_Comp_Contient::CmapContient::Delete()
{
	return "";
}

System::String^ NS_Comp_Contient::CmapContient::Update()
{
	return "";
}

void NS_Comp_Contient::CmapContient::setRefCom(System::String^ RefCom)
{
	this->ReferenceC = RefCom;
}

void NS_Comp_Contient::CmapContient::setRefArt(System::String^ RefArt)
{
	this->ReferenceA = RefArt;
}

System::String^ NS_Comp_Contient::CmapContient::getRefCom()
{
	return this->ReferenceC;
}

System::String^ NS_Comp_Contient::CmapContient::getRefArt()
{
	return this->ReferenceA;
}