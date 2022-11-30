#include "CmapAdresse.h"

System::String^ NS_Comp_Ad::CmapAdresse::Select()
{
	return "";
}

System::String^ NS_Comp_Ad::CmapAdresse::Insert()
{
	return "";
}

System::String^ NS_Comp_Ad::CmapAdresse::Delete()
{
	return "";
}

System::String^ NS_Comp_Ad::CmapAdresse::Update()
{
	return "";
}

void NS_Comp_Ad::CmapAdresse::setId(int id)
{
	this->Id = id;
}

void NS_Comp_Ad::CmapAdresse::setNumero(int num)
{
	this->numero = num;
}

void NS_Comp_Ad::CmapAdresse::setRue(System::String^ rue)
{
	this->rue = rue;
}

void NS_Comp_Ad::CmapAdresse::setCP(System::String^ CP)
{
	this->CP = CP;
}

void NS_Comp_Ad::CmapAdresse::setVille(System::String^ ville)
{
	this->ville = ville;
}

int NS_Comp_Ad::CmapAdresse::getId()
{
	return this->Id;
}

int NS_Comp_Ad::CmapAdresse::getNumero()
{
	return this->numero;
}

System::String^ NS_Comp_Ad::CmapAdresse::getRue()
{
	return this->rue;
}

System::String^ NS_Comp_Ad::CmapAdresse::getCP()
{
	return this->CP;
}

System::String^ NS_Comp_Ad::CmapAdresse::getVille()
{
	return this->ville;
}