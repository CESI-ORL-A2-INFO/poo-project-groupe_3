#include "CmapClient.h"

System::String^ NS_Comp_Client::CmapClient::SelectAll()
{
	return "SELECT * FROM Client INNER JOIN Adresse ON IdAdresse = IdAdresseLiv";
}

System::String^ NS_Comp_Client::CmapClient::Select()
{
	return "SELECT * FROM Client INNER JOIN Adresse ON IdAdresse = IdAdresseLiv WHERE IdClient = '" + this->Id + "'";
}

System::String^ NS_Comp_Client::CmapClient::Insert()
{
	return "INSERT INTO Client VALUES ('" + this->date + "','" + this->nom + "','" + this->prenom + "','" + this->IdAd + "')\n";
	// INSERT INTO Posseder_liv VALUES (id, adresses[i])
}

System::String^ NS_Comp_Client::CmapClient::Delete()
{
	return "DELETE FROM Paiement WHERE RefCommande IN(SELECT RefCommande FROM Commande WHERE Client_ID = '" + this->Id + 
	"')\nDELETE FROM Contient WHERE RefCommande IN(SELECT RefCommande FROM Commande WHERE Client_ID = '" + this->Id +
	"')\nDELETE FROM Commande WHERE Client_ID = '" + this->Id +
	"'\nDELETE FROM Posseder_liv WHERE Client_ID = '" + this->Id +
	"'\nDELETE FROM Adresse WHERE Adresse_ID NOT IN(SELECT Adresse_ID FROM Posseder_Fac) AND Adresse_ID NOT IN(SELECT Adresse_ID FROM Posseder_Liv) AND Adresse_ID NOT IN(SELECT Adresse_ID FROM Personnel)" +
	"'\nDELETE FROM Client WHERE IdClient= ('" + this->Id + "')";
}

System::String^ NS_Comp_Client::CmapClient::Update()
{
	return "UPDATE Client SET Nom = '" + this->nom + "', Prenom ='" + this->prenom + "', Date ='" + this->date + "' WHERE IdClient = '" + this->Id + "'";
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