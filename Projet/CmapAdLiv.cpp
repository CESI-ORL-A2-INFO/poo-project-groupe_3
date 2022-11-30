#include "CmapAdLiv.h"

System::String^ NS_Comp_AdL::CmapAdLiv::Select()
{
	return "";
}

System::String^ NS_Comp_AdL::CmapAdLiv::Insert()
{
	return "";
}

System::String^ NS_Comp_AdL::CmapAdLiv::Delete()
{
	return "";
}

System::String^ NS_Comp_AdL::CmapAdLiv::Update()
{
	return "";
}

void NS_Comp_AdL::CmapAdLiv::setId_a(int id)
{
	this->Id_Adresse = id;
}

void NS_Comp_AdL::CmapAdLiv::setId_c(int id)
{
	this->Id_client = id;
}

int NS_Comp_AdL::CmapAdLiv::getId_a()
{
	return this->Id_Adresse;
}

int NS_Comp_AdL::CmapAdLiv::getId_c()
{
	return this->Id_client;
}