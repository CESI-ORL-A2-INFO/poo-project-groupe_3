#include "CmapPers.h"

System::String^ NS_Comp_Pers::CmapPers::Select()
{
	return "SELECT [IdPersonnel],[nom],[prenom],[date_embauche],[IdPersonnel_1] as Superieur,[CP],[IdAd] FROM [Personnel] INNER JOIN Adresse ON Personnel.IdAd = Adresse.IdAdresse";
}

System::String^ NS_Comp_Pers::CmapPers::SelectId()
{
	return "SELECT [IdPersonnel],[nom],[prenom],[date_embauche],[IdPersonnel_1] as Superieur,[CP],[IdAd] FROM [Personnel] INNER JOIN Adresse ON Personnel.IdAd = Adresse.IdAdresse WHERE IdPersonnel = '"+this->Id+"'";
}

System::String^ NS_Comp_Pers::CmapPers::Insert()
{
	return "INSERT INTO Personnel (nom, prenom, date_embauche, IdPersonnel_1, Personnel.IdAd) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->date + "','" + this->IdSup + "','" + this->IdAdresse + "');";
}

System::String^ NS_Comp_Pers::CmapPers::Delete()
{
	return "UPDATE Personnel SET IdPersonnel_1 = (SELECT IdPersonnel_1 FROM Personnel WHERE IdPersonnel = '"+this->Id+"') WHERE IdPersonnel_1 = '"+this->IdSup+"' DELETE FROM Personnel WHERE IdPersonnel = '"+this->Id+"' DELETE FROM Adresse WHERE IdAdresse NOT IN(SELECT IdAdresse FROM Posseder_Liv) AND IdAdresse NOT IN(SELECT IdAdresse FROM Personnel)";
}

System::String^ NS_Comp_Pers::CmapPers::Update()
{
	return "UPDATE Personnel SET nom = '" + this->nom + "', prenom ='" + this->prenom + "', date_embauche ='" + this->date + "', IdPersonnel_1 ='"+ this->IdSup+"',IdAd ='"+this->IdAdresse+"' WHERE IdPersonnel ='"+this->Id+"'";
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

void NS_Comp_Pers::CmapPers::setIdSup(int id)
{
	this->IdSup = id;
}

void NS_Comp_Pers::CmapPers::setIdAdresse(int id)
{
	this->IdAdresse = id;
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

int NS_Comp_Pers::CmapPers::getIdSup()
{
	return this->IdSup;
}

int NS_Comp_Pers::CmapPers::getIdAdresse()
{
	return this->IdAdresse;
}