#include "Cadb.h"

NS_Comp_Data::Cadb::Cadb(void)
{
	this->sCnx = "Data Source = cesi-orl-maxence.database.windows.net;Initial Catalog = ProjetPoo; User ID = cesi-orl; Password=Azertyuiop_";

	this->sSql = "Null";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDa = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_Comp_Data::Cadb::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDa->SelectCommand = this->oCmd;
	this->oDa->Fill(this->oDs, sDataTableName);

	return this->oDs;
}
void NS_Comp_Data::Cadb::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDa->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}
