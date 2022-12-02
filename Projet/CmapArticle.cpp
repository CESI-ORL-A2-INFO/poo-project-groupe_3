#include "CmapArticle.h"

System::String^ NS_Comp_Art::CmapArticle::Select()
{
	return "SELECT [RefArticle], [Nom], [Quantite], [Montant] FROM Article";
}

System::String^ NS_Comp_Art::CmapArticle::SelectRef()
{
	return "SELECT [RefArticle], [Nom], [Quantite], [Montant] FROM Article WHERE RefArticle = '"+this->Reference+"'";
}

System::String^ NS_Comp_Art::CmapArticle::Insert()
{
	return "INSERT INTO Article (RefArticle, Nom, Quantite, Montant) VALUES('" + this->Reference + "','" + this->nom + "','" + this->quantite + "','" + this->montant + "');";
}

System::String^ NS_Comp_Art::CmapArticle::Delete()
{
	return "DELETE FROM Contient WHERE RefArticle = '" + this->Reference +"' DELETE FROM Article WHERE RefArticle = ('"+ this->Reference+"')";
}

System::String^ NS_Comp_Art::CmapArticle::Update()
{
	return "UPDATE Article SET Nom = '"+this->nom+"', Quantite = '"+this->quantite+"', Montant = '"+this->montant+"' WHERE RefArticle = '"+this->Reference+"'";
}


void NS_Comp_Art::CmapArticle::setRef(System::String^ Ref)
{
	this->Reference = Ref;
}

void NS_Comp_Art::CmapArticle::setNom(System::String^ nom)
{
	this->nom = nom;
}

void NS_Comp_Art::CmapArticle::setQuantite(int quantite)
{
	this->quantite = quantite;
}

void NS_Comp_Art::CmapArticle::setMontant(System::String^ Montant)
{
	this->montant = Montant;
}

void NS_Comp_Art::CmapArticle::setTVA(int tva)
{
	this->TVA = tva;
}

void NS_Comp_Art::CmapArticle::setSeuil(int seuil)
{
	this->Seuil = seuil;
}
System::String^ NS_Comp_Art::CmapArticle::getRef()
{
	return this->Reference;
}

System::String^ NS_Comp_Art::CmapArticle::getNom()
{
	return this->nom;
}

int NS_Comp_Art::CmapArticle::getQuantite()
{
	return this->quantite;
}

System::String^ NS_Comp_Art::CmapArticle::getMontant()
{
	return this->montant;
}

int NS_Comp_Art::CmapArticle::getTVA()
{
	return this->TVA;
}

int NS_Comp_Art::CmapArticle::getSeuil()
{
	return this->Seuil;
}