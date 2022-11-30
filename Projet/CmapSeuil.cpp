#include "CmapSeuil.h"

System::String^ NS_Comp_Seuil::CmapSeuil::Select()
{
	return "";
}

System::String^ NS_Comp_Seuil::CmapSeuil::Insert()
{
	return "";
}

System::String^ NS_Comp_Seuil::CmapSeuil::Delete()
{
	return "";
}

System::String^ NS_Comp_Seuil::CmapSeuil::Update()
{
	return "";
}

void NS_Comp_Seuil::CmapSeuil::setId(int Id)
{
	this->Id = Id;
}

void NS_Comp_Seuil::CmapSeuil::setSeuil(int seuil)
{
	this->seuil = seuil;
}

int NS_Comp_Seuil::CmapSeuil::getId()
{
	return this->Id;
}

int NS_Comp_Seuil::CmapSeuil::getSeuil()
{
	return this->seuil;
}