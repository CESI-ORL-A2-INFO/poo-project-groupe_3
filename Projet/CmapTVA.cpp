#include "CmapTVA.h"

System::String^ NS_Comp_TVA::CmapTVA::SelectAll()
{
	return "SELECT * FROM TVA";
}

System::String^ NS_Comp_TVA::CmapTVA::Select()
{
	return "SELECT * FROM TVA WHERE IdTva = '" + this->Id + "'";
}

System::String^ NS_Comp_TVA::CmapTVA::Insert()
{
	return "INSERT INTO TVA VALUES ('" + this->pourcentage + "')";
}

System::String^ NS_Comp_TVA::CmapTVA::Delete()
{
	return "DELETE FROM TVA WHERE IdTva = '" + this->Id + "'";
}

System::String^ NS_Comp_TVA::CmapTVA::Update()
{
	return "UPDATE FROM TVA SET pourcentage = '" + this->pourcentage + "'";
}

void NS_Comp_TVA::CmapTVA::setId(int id)
{
	this->Id = id;
}

void NS_Comp_TVA::CmapTVA::setPourcentage(int pourcentage)
{
	this->pourcentage = pourcentage;
}

int NS_Comp_TVA::CmapTVA::getId()
{
	return this->Id;
}

int NS_Comp_TVA::CmapTVA::getPourcentage()
{
	return this->pourcentage;
}