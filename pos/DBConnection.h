#pragma once
#include <mysql.h>
#include <msclr/marshal_cppstd.h>
#include "Table.h"
#include "Category.h"
#include "Order.h"
#include <cstdlib>	//atoi
using namespace std;

class DBConnection{
private:
	const char* server_ip = "54.173.116.26";
	const char* user = "user";
	const char* pw ="513246";
	const char* db_name = "pos";

	MYSQL *connection = NULL, conn;
	MYSQL_RES *sql_result;
	MYSQL_ROW sql_row;
	int query_stat;
	
public:
	DBConnection();
	~DBConnection();
	MYSQL DBConnect();

	PosMenuItem* select_menu_item();
	void insert_payment_info(Table table);
	Category* select_menu_category();
};