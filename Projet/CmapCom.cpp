#include "CmapCom.h"

System::String^ NS_Comp_Com::CmapCom::Select()
{
	return "SELECT [RefCommande],[date_reglement],[date_emission], [date_livraison], [IdClient], [RefArt] FROM [Commande] INNER JOIN contient ON Commande.RefCommande = contient.RefCom";
}

System::String^ NS_Comp_Com::CmapCom::SelectRef()
{
	return "SELECT [RefCommande],[date_reglement],[date_emission], [date_livraison], [IdClient], [RefArt] FROM [Commande] WHERE RefCommande = '"+this->Reference+"'INNER JOIN contient ON Commande.RefCommande = contient.RefCommande";
}

System::String^ NS_Comp_Com::CmapCom::Insert()
{
	return "INSERT INTO Commande VALUES ('" + this->Reference + "','"+this->date_reg+"','"+this->date_emi+"','"+this->date_liv+"','"+this->IdClient+"')";
}

System::String^ NS_Comp_Com::CmapCom::Delete()
{
	return "DELETE FROM Paiement WHERE RefCommande = '" + this->Reference +"' DELETE FROM Contient WHERE RefCommande = '" + this->Reference + "' DELETE FROM Commande WHERE RefCommande = '" + this->Reference + "'";
}

System::String^ NS_Comp_Com::CmapCom::Update()
{
	return "UPDATE Commande SET date_reglement = '" + this->date_reg + "', date_emission = '" +this->date_emi + "', date_livraison = '" + this->date_liv + "', IdClient = '" + this->IdClient +"'WHERE RefCommande = '" + this->Reference + "'";
}

void NS_Comp_Com::CmapCom::setRef(System::String^ Ref)
{
	this->Reference = Ref;
}

void NS_Comp_Com::CmapCom::setDate_reg(System::String^ date)
{
	this->date_reg = date;
}

void NS_Comp_Com::CmapCom::setDate_emi(System::String^ date)
{
	this->date_emi = date;
}

void NS_Comp_Com::CmapCom::setDate_liv(System::String^ date)
{
	this->date_liv = date;
}

void NS_Comp_Com::CmapCom::setIdClient(int id)
{
	this->IdClient = id;
}

System::String^ NS_Comp_Com::CmapCom::getRef()
{
	return this->Reference;
}

System::String^ NS_Comp_Com::CmapCom::getDate_reg()
{
	return this->date_reg;
}

System::String^ NS_Comp_Com::CmapCom::getDate_emi()
{
	return this->date_emi;
}

System::String^ NS_Comp_Com::CmapCom::getDate_liv()
{
	return this->date_liv;
}

int NS_Comp_Com::CmapCom::getIdClient()
{
	return this->IdClient;
}