#include "CmapPayer.h"

System::String^ NS_Comp_Payer::CmapPayer::SelectAll()
{
    return "SELECT [IdPaiement],[date_paie],[prix],[RefCommande],[MoyenPaiement] FROM Paiement INNER JOIN Moyen ON Moyen.IdMoyen = Paiement.IdMoyen";
}

System::String^ NS_Comp_Payer::CmapPayer::Select()
{
    return "SELECT [IdPaiement],[date_paie],[prix],[RefCommande],[MoyenPaiement] FROM Paiement INNER JOIN Moyen ON Moyen.IdMoyen = Paiement.IdMoyen WHERE IdPaiement = '" + this->Reference + "'";
}

System::String^ NS_Comp_Payer::CmapPayer::Insert()
{
    return "INSERT INTO Paiement (date_paie,prix,RefCommande,IdMoyen) VALUES ('" + this->Date + "','" + this->prix + "','"+this->RefCommande+"','" + this->IdMoyen + "')";
}

System::String^ NS_Comp_Payer::CmapPayer::Delete()
{
    return "DELETE FROM Paiement WHERE IdPaiement = '" + this->Reference + "'";
}

System::String^ NS_Comp_Payer::CmapPayer::Update()
{
    return "UPDATE Paiement SET date_paie = '" + this->Date + "', prix = '" + this->prix + "', IdMoyen = '" + this->IdMoyen + "' WHERE IdPaiement = '"+this->Reference+"'";
}

void NS_Comp_Payer::CmapPayer::setRef(int Ref)
{
    this->Reference = Ref;
}

void NS_Comp_Payer::CmapPayer::setDate(System::String^ date)
{
    this->Date = date;
}

void NS_Comp_Payer::CmapPayer::setPrix(float prix)
{
    this->prix = prix;
}

void NS_Comp_Payer::CmapPayer::setIdMoyen(int moyen)
{
    this->IdMoyen = moyen;
}

void NS_Comp_Payer::CmapPayer::setRefCommande(System::String^ reference)
{
    this->RefCommande = reference;
}

int NS_Comp_Payer::CmapPayer::getRef()
{
    return this->Reference;
}

System::String^ NS_Comp_Payer::CmapPayer::getDate()
{
    return this->Date;
}

float NS_Comp_Payer::CmapPayer::getPrix()
{
    return this->prix;
}

int NS_Comp_Payer::CmapPayer::getIdMoyen()
{
    return this->IdMoyen;
}

System::String^ NS_Comp_Payer::CmapPayer::getRefCommande()
{
    return this->RefCommande;
}
