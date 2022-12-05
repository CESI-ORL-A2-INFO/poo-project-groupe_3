#include "CmapStat.h"

System::String^ NS_Comp_Stat::CmapStat::PanierMoyen()
{
	return "SELECT avg(montant) as [Panier Moyen] FROM Article INNER JOIN Contient ON Article.RefArticle = contient.RefArt";
}

System::String^ NS_Comp_Stat::CmapStat::ChiffreAffaire()
{
	return "";
}

System::String^ NS_Comp_Stat::CmapStat::Reapp()
{
	return "SELECT RefArticle, Quantite, Seuil FROM Article INNER JOIN Seuil ON Article.IdSeuil = Seuil.IdSeuil WHERE Quantite < seuil";
}

System::String^ NS_Comp_Stat::CmapStat::MontantClient()
{
	return "";
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

void NS_Comp_Stat::CmapStat::setDate(System::String^ date)
{
	this->date = date;
}

int NS_Comp_Stat::CmapStat::getId()
{
	return this->IdClient;
}

System::String^ NS_Comp_Stat::CmapStat::getDate()
{
	return this->date;
}