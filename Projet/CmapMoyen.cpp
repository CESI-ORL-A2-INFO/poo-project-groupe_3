#include "CmapMoyen.h"

System::String^ NS_Comp_Contient::CmapContient::SelectAll()
{
	return "SELECT * FROM Moyen";
}

System::String^ NS_Comp_Moyen::CmapMoyen::Select()
{
	return "SELECT * FROM Moyen WHERE IdMoyen = '" + this->Id + "'";
}

System::String^ NS_Comp_Moyen::CmapMoyen::Insert()
{
	return "INSERT INTO Moyen VALUES ('" + this->moyen + "')";
}

System::String^ NS_Comp_Moyen::CmapMoyen::Delete()
{
	return "DELETE FROM Moyen WHERE IdMoyen = '" + this->Id + "'";
}

System::String^ NS_Comp_Moyen::CmapMoyen::Update()
{
	return "UPDATE FROM Moyen SET moyen = '" + this->moyen + "'";
}

void NS_Comp_Moyen::CmapMoyen::setId(int id)
{
	this->Id = id;
}

void NS_Comp_Moyen::CmapMoyen::setMoyen(System::String^ moyen)
{
	this->moyen = moyen;
}

int NS_Comp_Moyen::CmapMoyen::getId()
{
	return this->Id;
}

System::String^ NS_Comp_Moyen::CmapMoyen::getMoyen()
{
	return this->moyen;
}