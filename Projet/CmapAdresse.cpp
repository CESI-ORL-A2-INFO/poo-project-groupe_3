#include "CmapAdresse.h"

System::String^ NS_Comp_Ad::CmapAdresse::Select()
{
	return "SELECT * FROM Adresse";
}

System::String^ NS_Comp_Ad::CmapAdresse::SelectId()
{
	return "SELECT * FROM Adresse WHERE IdAdresse = '" + this->Id + "'";
}


System::String^ NS_Comp_Ad::CmapAdresse::Insert()
{
	return "INSERT INTO Adresse (numero, Rue, CP, Ville) VALUES ('" + this->numero + "','" + this->rue + "','" + this->CP + "', UPPER('" + this->ville + "'))";
}

System::String^ NS_Comp_Ad::CmapAdresse::Delete()
{
	return "DELETE FROM Adresse WHERE IdAdresse = '" + this->Id + "'";
}

System::String^ NS_Comp_Ad::CmapAdresse::Update()
{
	return "UPDATE Adresse SET numero = '" + this->numero + "', Rue = '" + this->rue + "', CP = '" + this->CP + "', Ville = UPPER('" + this->ville + "') WHERE Adresse.IdAdresse = '"+this->Id+"'";
}

System::String^ NS_Comp_Ad::CmapAdresse::Search()
{
	return "SELECT [IdAdresse] FROM Adresse WHERE numero = '"+this->numero+"' AND rue = '"+this->rue+"' AND CP = '"+this->CP+"' AND Ville = UPPER('"+this->ville+"')";
}

void NS_Comp_Ad::CmapAdresse::setId(int id)
{
	this->Id = id;
}

void NS_Comp_Ad::CmapAdresse::setIdP(int id)
{
	this->IdP = id;
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

int NS_Comp_Ad::CmapAdresse::getIdP()
{
	return this->IdP;
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