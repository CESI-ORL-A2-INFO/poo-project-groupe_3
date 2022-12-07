#pragma once

namespace NS_Comp_Data
{
	ref class Cadb
	{
	private:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDa;
		System::Data::DataSet^ oDs;
	public:
		Cadb();
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
		int scalarRows(System::String^);
	};
}


