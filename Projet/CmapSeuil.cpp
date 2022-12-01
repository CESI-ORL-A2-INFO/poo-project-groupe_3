#include "CmapSeuil.h"

System::String^ NS_Comp_Seuil::CmapSeuil::Select()
{
	return "SELECT * FROM Seuil WHERE IdSeuil = '" + this->Id + "'";
}

System::String^ NS_Comp_Seuil::CmapSeuil::Insert()
{
	return "INSERT INTO Seuil VALUES ('" + this->seuil + "')";
}

System::String^ NS_Comp_Seuil::CmapSeuil::Delete()
{
	return "DELETE FROM Seuil WHERE IdSeuil = '" + this->Id + "'";
}

System::String^ NS_Comp_Seuil::CmapSeuil::Update()
{
	return "UPDATE FROM Seuil SET seuil = '" + this->seuil + "'";
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