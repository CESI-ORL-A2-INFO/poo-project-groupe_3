#include "CmapStat.h"

System::String^ NS_Comp_Stat::CmapStat::PanierMoyen()
{
	return "SELECT avg(montant) as [Panier Moyen] FROM Article INNER JOIN Contient ON Article.RefArticle = contient.RefArt";
}

System::String^ NS_Comp_Stat::CmapStat::ChiffreAffaire()
{
	return "SELECT SUM(Prix) Prix_total FROM Paiement WHERE date_reglement = '%'" + this-> annee/*annee*/ + "'-'" + this->mois /*mois*/ + "'";
}

System::String^ NS_Comp_Stat::CmapStat::Reapp()
{
	return "SELECT RefArticle, Quantite, Seuil FROM Article INNER JOIN Seuil ON Article.IdSeuil = Seuil.IdSeuil WHERE Quantite < seuil";
}

System::String^ NS_Comp_Stat::CmapStat::MontantClient()
{
	return "SELECT SUM(Montant) From Article INNER JOIN Contient ON Article.RefArticle = Contient.RefArt INNER JOIN Commande ON  Commande.RefCommande = Contient.RefCom INNER JOIN Client ON Client.IdClient = Commande.IdClient WHERE Commande.IdClient = '" + this->IdClient + "'";
}

System::String^ NS_Comp_Stat::CmapStat::PlusVendus()
{
	return "SELECT RefArt, COUNT(RefArt) as NbArticle FROM contient GROUP BY RefArt ORDER BY NbArticle DESC";
}

System::String^ NS_Comp_Stat::CmapStat::MoinsVendus()
{
	return "SELECT RefArt, COUNT(RefArt) as NbArticle FROM contient GROUP BY RefArt ORDER BY NbArticle ASC";
}

System::String^ NS_Comp_Stat::CmapStat::ValeurStock()
{
	return "SELECT SUM((Montant+Montant*(pourcentage/100))) as PrixTot FROM Article INNER JOIN Tva ON Article.IdTVA = Tva.IdTVA ";
}

void NS_Comp_Stat::CmapStat::setId(int Id)
{
	this->IdClient = Id;
}

void NS_Comp_Stat::CmapStat::setMois(System::String^ mois)
{
	this->mois = mois;
}

void NS_Comp_Stat::CmapStat::setAnnee(System::String^ mois)
{
	this->annee = annee;
}

int NS_Comp_Stat::CmapStat::getId()
{
	return this->IdClient;
}

System::String^ NS_Comp_Stat::CmapStat::getMois()
{
	return this->mois;
}

System::String^ NS_Comp_Stat::CmapStat::getAnnee()
{
	return this->annee;
}