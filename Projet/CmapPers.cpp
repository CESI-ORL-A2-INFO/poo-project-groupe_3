#include "CmapPers.h"

System::String^ NS_Comp_Pers::CmapPers::Select()
{
	return "SELECT [id],[nom],[prenom],[date] FROM [Personnel]";
}

System::String^ NS_Comp_Pers::CmapPers::Insert()
{
	return "INSERT INTO Personnel (nom, prenom, date) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->date + "');";
}

System::String^ NS_Comp_Pers::CmapPers::Delete()
{
	return "DELETE FROM Personnel WHERE Personnel.Id = ('" + this->Id + "')";
}

System::String^ NS_Comp_Pers::CmapPers::Update()
{
	return "UPDATE Personnel SET nom = '" + this->nom + "', Prenom ='" + this->prenom + "', Date ='" + this->date + "'";
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