#include "CmapCom.h"

System::String^ NS_Comp_Com::CmapCom::SelectAll()
{
	return "SELECT * FROM Commande";
}

System::String^ NS_Comp_Com::CmapCom::Select()
{
	return "SELECT * FROM Commande WHERE RefCommande = '" + this->Reference + "'";
}

System::String^ NS_Comp_Com::CmapCom::Insert()
{
	return "INSERT INTO Commande VALUES ('" + this->dateReglement + "','" + this->dateEmission + "','" + this->dateLivraison + "','" + this->IdClient + "')";
	// "\n INSERT INTO Contient VALUES('" + this->Reference + "','" + this->contenu[i] "')";
}

System::String^ NS_Comp_Com::CmapCom::Delete()
{
	return "DELETE FROM Paiement WHERE RefCommande = '" + this->Reference + 
	"'\nDELETE FROM Contient WHERE RefCommande = '" + this->Reference +
	"'\nDELETE FROM Commande WHERE RefCommande = '" + this->Reference + "'";
}

System::String^ NS_Comp_Com::CmapCom::Update()
{
	return "UPDATE Commande SET reglement = '" + this->dateReglement + "', emission = '" +
	this->dateEmission + "', livraison = '" + this->dateLivraison + "', client = '" + this->IdClient + 
	"'WHERE RefCommande = '" + this->Reference + "'";
}

void NS_Comp_Com::CmapCom::setRef(System::String^ Ref)
{
	this->Reference = Ref;
}
System::String^ NS_Comp_Com::CmapCom::getRef()
{
	return this->Reference;
}