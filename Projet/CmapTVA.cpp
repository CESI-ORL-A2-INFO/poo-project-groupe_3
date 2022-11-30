#include "CmapTVA.h"

System::String^ NS_Comp_TVA::CmapTVA::Select()
{
	return "";
}

System::String^ NS_Comp_TVA::CmapTVA::Insert()
{
	return "";
}

System::String^ NS_Comp_TVA::CmapTVA::Delete()
{
	return "";
}

System::String^ NS_Comp_TVA::CmapTVA::Update()
{
	return "";
}

void NS_Comp_TVA::CmapTVA::setId(int id)
{
	this->Id = id;
}

void NS_Comp_TVA::CmapTVA::setPourcentage(int pourcentage)
{
	this->poucentage = pourcentage;
}

int NS_Comp_TVA::CmapTVA::getId()
{
	return this->Id;
}

int NS_Comp_TVA::CmapTVA::getPourcentage()
{
	return this->poucentage;
}