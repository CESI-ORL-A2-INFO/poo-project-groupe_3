#include "CmapAdFac.h"

System::String^ NS_Comp_AdF::CmapAdFac::Select()
{
	return "SELECT * FROM Posseder_Fac WHERE IdClient = '" + this->IdClient + "' OR IdAdresse = '" + this->IdAdresse + "'";
}

System::String^ NS_Comp_AdF::CmapAdFac::Insert()
{
	return "INSERT INTO Posseder_Fac VALUES ('" + this->IdClient + "','" + this->IdClient + "')";
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
	this->IdAdresse = id;
}

void NS_Comp_AdF::CmapAdFac::setId_c(int id)
{
	this->IdClient = id;
}

int NS_Comp_AdF::CmapAdFac::getId_a()
{
	return this->IdAdresse;
}

int NS_Comp_AdF::CmapAdFac::getId_c()
{
	return this->IdClient;
}