#include "CmapPayer.h"

System::String^ NS_Comp_Payer::CmapPayer::Select()
{
	return "";
}

System::String^ NS_Comp_Payer::CmapPayer::Insert()
{
	return "";
}

System::String^ NS_Comp_Payer::CmapPayer::Delete()
{
	return "";
}

System::String^ NS_Comp_Payer::CmapPayer::Update()
{
	return "";
}

void NS_Comp_Payer::CmapPayer::setRef(System::String^ Ref)
{
	this->Reference = Ref;
}

void NS_Comp_Payer::CmapPayer::setDate(System::String^ date)
{
	this->Date = date;
}

System::String^ NS_Comp_Payer::CmapPayer::getRef()
{
	return this->Reference;
}

System::String^ NS_Comp_Payer::CmapPayer::getDate()
{
	return this->Date;
}