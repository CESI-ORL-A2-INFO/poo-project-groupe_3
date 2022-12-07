#include "CmapAdLiv.h"

System::String^ NS_Comp_AdL::CmapAdLiv::Select()
{
	return "SELECT * FROM Posseder_Liv";
}

System::String^ NS_Comp_AdL::CmapAdLiv::SelectId()
{
	return "SELECT * FROM Posseder_Liv WHERE IdClient = '" + this->IdClient + "' OR IdAdresse = '" + this->IdAdresse + "'";
}

System::String^ NS_Comp_AdL::CmapAdLiv::Insert()
{
	return "INSERT INTO Posseder_Liv (IdClient, IdAdresse) VALUES ('" + this->IdClient + "','" + this->IdAdresse + "')";
}

System::String^ NS_Comp_AdL::CmapAdLiv::Delete()
{
	return "DELETE FROM Posseder_liv WHERE IdAdresse = '" + this->IdAdresse + "' AND IdClient = '" + this->IdClient + "'";
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