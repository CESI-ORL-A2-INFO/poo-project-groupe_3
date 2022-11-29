#include "CmapClient.h"
System::String^ NS_Comp_Client::CmapClient::Select()
{
	return "SELECT [id],[nom],[prenom],[date] FROM [Client]";
}

System::String^ NS_Comp_Client::CmapClient::Insert()
{
	return "INSERT INTO Client (nom, prenom, date) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->date + "');";
}

System::String^ NS_Comp_Client::CmapClient::Delete()
{
	return "DELETE FROM Client WHERE Client.Id = ('" + this->Id + "')";
}

System::String^ NS_Comp_Client::CmapClient::Update()
{
	return "UPDATE Client SET Nom = '" + this->nom + "', Prenom ='" + this->prenom + "', Date ='" + this->date + "'";
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