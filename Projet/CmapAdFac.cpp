#include "CmapAdFac.h"

System::String^ NS_Comp_AdF::CmapAdFac::Select()
{
	return "";
}

System::String^ NS_Comp_AdF::CmapAdFac::Insert()
{
	return "";
}

System::String^ NS_Comp_AdF::CmapAdFac::Delete()
{
	return "";
}

System::String^ NS_Comp_AdF::CmapAdFac::Update()
{
	return "";
}

void NS_Comp_AdF::CmapAdFac::setId_a(int id)
{
	this->Id_Adresse = id;
}

void NS_Comp_AdF::CmapAdFac::setId_c(int id)
{
	this->Id_client = id;
}

int NS_Comp_AdF::CmapAdFac::getId_a()
{
	return this->Id_Adresse;
}

int NS_Comp_AdF::CmapAdFac::getId_c()
{
	return this->Id_client;
}