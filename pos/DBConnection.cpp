#pragma once
#include "DBConnection.h"

DBConnection::DBConnection() {
	std::string stringPart;
	mysql_init(&conn);
	cout << "DB »ý¼ºÀÚ" << endl;
	mysql_options(&conn, MYSQL_SET_CHARSET_NAME, "utf8");
	mysql_options(&conn, MYSQL_INIT_COMMAND, "SET NAMES utf8");
	connection = mysql_real_connect(&conn, server_ip, user, pw, db_name, 3306, (char *)NULL, 0);
	
	if (connection == NULL) {
		//connection error
		cout << "Mysql connection error : " << mysql_error(&conn) << endl;
	}
	else {
		cout << "connection success!" << endl;
	}
}

DBConnection::~DBConnection() {
	mysql_close(connection);
}

PosMenuItem* DBConnection::select_menu_item() {
	PosMenuItem* menu_items = new PosMenuItem[30];
	mysql_query(connection, "set names euckr");
	query_stat = mysql_query(connection, "SELECT * FROM pos_menu_item");
	if (query_stat != 0) {
		cout << "Mysql query error : " << mysql_error(&conn) << endl;
	}

	sql_result = mysql_store_result(connection);
	int i = 0;
	while ((sql_row = mysql_fetch_row(sql_result)) != NULL) {
		
		sql_row[0];	//no
		menu_items[i].setCategory(atoi(sql_row[1]));	//category
		menu_items[i].setName(sql_row[2]);	//name
		cout << sql_row[2] << endl;
		menu_items[i].setPrice(atoi(sql_row[3]));	//price
		i++;
	}
	return menu_items;
}

