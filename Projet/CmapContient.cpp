#include "CmapContient.h"

System::String^ NS_Comp_Contient::CmapContient::Select()
{
	return "SELECT * FROM Contient WHERE RefArticle = '" + this->ReferenceA + "' OR RefCommande = '"+ this->ReferenceC + "'";
}

System::String^ NS_Comp_Contient::CmapContient::Insert()
{
	return "INSERT INTO Contient VALUES ('" + this->ReferenceA + "','" + this->ReferenceC + "')";
}

System::String^ NS_Comp_Contient::CmapContient::Delete()
{
	return "DELETE FROM Contient WHERE RefArticle = '" + this->ReferenceA + "' OR RefCommande = '" + this->ReferenceC + "'";
}

void NS_Comp_Contient::CmapContient::setRefCom(System::String^ RefCom)
{
	this->ReferenceC = RefCom;
}

void NS_Comp_Contient::CmapContient::setRefArt(System::String^ RefArt)
{
	this->ReferenceA = RefArt;
}

System::String^ NS_Comp_Contient::CmapContient::getRefCom()
{
	return this->ReferenceC;
}

System::String^ NS_Comp_Contient::CmapContient::getRefArt()
{
	return this->ReferenceA;
}