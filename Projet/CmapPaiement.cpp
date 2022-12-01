#include "CmapPaiement.h"

System::String^ NS_Comp_Paiement::CmapPaiement::Select()
{
	return "SELECT * FROM Paiement WHERE IdPaiement = '" + this->Reference + "'";
}

System::String^ NS_Comp_Paiement::CmapPaiement::Insert()
{
	return "INSERT INTO Paiement VALUES ('" + this->Date + "','" + this->prix + "','" + this->IdMoyen + "')";
}

System::String^ NS_Comp_Paiement::CmapPaiement::Delete()
{
	return "DELETE FROM Paiement WHERE IdPaiement = '" + this->Reference + "'";
}

System::String^ NS_Comp_Paiement::CmapPaiement::Update()
{
	return "UPDATE Paiement SET date = '" + this->Date + "', prix = '" + this->prix + "', IdMoyen = '" + this->Idmoyen + "'";
}

void NS_Comp_Paiement::CmapPaiement::setRef(System::String^ Ref)
{
	this->Reference = Ref;
}

void NS_Comp_Paiement::CmapPaiement::setDate(System::String^ date)
{
	this->Date = date;
}

System::String^ NS_Comp_Paiement::CmapPaiement::getRef()
{
	return this->Reference;
}

System::String^ NS_Comp_Paiement::CmapPaiement::getDate()
{
	return this->Date;
}