#include "CmapAdLiv.h"

System::String^ NS_Comp_AdL::CmapAdLiv::SelectAll()
{
	return "SELECT * FROM Posseder_Fac";
}

System::String^ NS_Comp_AdL::CmapAdLiv::Select()
{
	return "SELECT * FROM Posseder_Fac WHERE IdClient = '" + this->IdClient + "' OR IdAdresse = '" + this->IdAdresse + "'";
}

System::String^ NS_Comp_AdL::CmapAdLiv::Insert()
{
	return "INSERT INTO Posseder_Fac VALUES ('" + this->IdClient + "','" + this->IdClient + "')";
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
	this->IdAdresse = id;
}

void NS_Comp_AdL::CmapAdLiv::setId_c(int id)
{
	this->IdClient = id;
}

int NS_Comp_AdL::CmapAdLiv::getId_a()
{
	return this->IdAdresse;
}

int NS_Comp_AdL::CmapAdLiv::getId_c()
{
	return this->IdClient;
}