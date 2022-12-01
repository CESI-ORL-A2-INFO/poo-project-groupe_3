#include "CmapPers.h"

System::String^ NS_Comp_Pers::CmapPers::SelectAll()
{
	return "SELECT * FROM Personnel INNER JOIN Adresse ON Id_Adresse = IdAdresse";
}

System::String^ NS_Comp_Pers::CmapPers::Select()
{
	return "SELECT * FROM Personnel INNER JOIN Adresse ON Id_Adresse = IdAdresse WHERE IdPersonnel = '" + this->Id + "'";
}

System::String^ NS_Comp_Pers::CmapPers::Insert()
{
	return "INSERT INTO Personnel VALUES ('" + this->nom + "','" + this->prenom + "','" + this->date + "','" + this->IdSup + "');";
}

System::String^ NS_Comp_Pers::CmapPers::Delete()
{
	return "UPDATE Personnel SET IdSuperviseur = (SELECT ID_Superviseur FROM Personnel WHERE ID_Personnel = '" + this->Id + "') WHERE ID_Superviseur = '" + this->Id +
	"'\nDELETE FROM Personnel WHERE IdPersonnel = ('" + this->Id + 
	"')\nDELETE FROM Adresse WHERE IdAdresse NOT IN (SELECT IdAdresse FROM Posseder_Fac) AND IdAdresse NOT IN (SELECT IdAdresse FROM Client) AND IdAdresse NOT IN (SELECT IdAdresse FROM Personnel)";
}

System::String^ NS_Comp_Pers::CmapPers::Update()
{
	return "UPDATE Personnel SET nom = '" + this->nom + "', Prenom ='" + this->prenom + "', Date ='" + this->date + "', IdSuperviseur = '" + this->IdSup + "' WHERE IdPersonnel = '" + this->Id + "'";
}

void NS_Comp_Pers::CmapPers::setId(int id)
{
	this->Id = id;
}

void NS_Comp_Pers::CmapPers::setNom(System::String^ nom)
{
	this->nom = nom;
}

void NS_Comp_Pers::CmapPers::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void NS_Comp_Pers::CmapPers::setDate(System::String^ date)
{
	this->date = date;
}

int NS_Comp_Pers::CmapPers::getId()
{
	return this->Id;
}

System::String^ NS_Comp_Pers::CmapPers::getNom()
{
	return this->nom;
}

System::String^ NS_Comp_Pers::CmapPers::getPrenom()
{
	return this->prenom;
}

System::String^ NS_Comp_Pers::CmapPers::getDate()
{
	return this->date;
}