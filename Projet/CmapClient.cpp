#include "CmapClient.h"
System::String^ NS_Comp_Client::CmapClient::Select()
{
	return "SELECT [IdClient],[nom],[prenom],[date_naissance], [IdAd] FROM [Client]";
}

System::String^ NS_Comp_Client::CmapClient::Insert()
{
	return "INSERT INTO Client (nom, prenom, date_naissance, Client.IdAd) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->date + "','" + this->IdAd + "');";
}

System::String^ NS_Comp_Client::CmapClient::Delete()
{
	return "DELETE FROM Paiement WHERE RefCommande IN(SELECT RefCommande FROM Commande WHERE IdClient = '" + this->Id+"') DELETE FROM Contient WHERE RefCommande IN(SELECT RefCommande FROM Commande WHERE IdClient = '" + this->Id+"') DELETE FROM Commande WHERE IdClient = '" + this->Id+"' DELETE FROM Posseder_liv WHERE IdClient = '" + this->Id+"' DELETE FROM Adresse WHERE IdAdresse  NOT IN(SELECT IdAdresse FROM Posseder_Liv) AND IdAdresse NOT IN(SELECT IdAd FROM Personnel) DELETE FROM Client WHERE IdClient = '" + this->Id+"'";
}

System::String^ NS_Comp_Client::CmapClient::Update()
{
	return "UPDATE Client SET nom = '" + this->nom + "', prenom ='" + this->prenom + "', date_naissance ='" + this->date + "', IdAd ='"+this->IdAd+"' WHERE IdClient = '"+this->Id+"'";
}

void NS_Comp_Client::CmapClient::setId(int id)
{
	this->Id = id;
}

void NS_Comp_Client::CmapClient::setNom(System::String^ nom)
{
	this->nom = nom;
}

void NS_Comp_Client::CmapClient::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void NS_Comp_Client::CmapClient::setDate(System::String^ date)
{
	this->date = date;
}

int NS_Comp_Client::CmapClient::getId()
{
	return this->Id;
}

System::String^ NS_Comp_Client::CmapClient::getNom()
{
	return this->nom;
}

System::String^ NS_Comp_Client::CmapClient::getPrenom()
{
	return this->prenom;
}

System::String^ NS_Comp_Client::CmapClient::getDate()
{
	return this->date;
}

void NS_Comp_Client::CmapClient::setIdAd(int id)
{
	this->IdAd = id;
}

int NS_Comp_Client::CmapClient::getIdAd()
{
	return this->IdAd;
}