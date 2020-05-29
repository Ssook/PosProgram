#pragma once
#include "DBConnection.h"

DBConnection::DBConnection() {
	std::string stringPart;
	mysql_init(&conn);
	cout << "DB 생성자" << endl;
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
//주용
PosMenuItem* DBConnection::select_menu_item() {
	PosMenuItem* menu_items = new PosMenuItem[300];
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
	cout << "select_complete" << endl;
	return menu_items;
}

//주용
void DBConnection::insert_payment_info(Table param_table) {
	mysql_query(connection, "set names euckr");
	char query[255];
	//메뉴 이름, 메뉴 갯수, 날짜
	Order order;
	Table table = param_table;
	PosMenuItem item;
	char temp[30];
	for (int i = 0; i < table.getSize(); i++) {
		order = table.getOrder(i);
		cout << "tt : " << order.getMenuName() << endl;
		cout << "tt : " << order.getQuantity() << endl;
		strcpy(temp, order.getMenuName().c_str());
		sprintf(query, "insert into pos_payment_info(pos_payment_info_menu_item_name,pos_payment_info_menu_item_quantity, pos_payment_info_date) values('%s', %d, NOW())", temp, order.getQuantity());
		cout << "query" << query << endl;
		query_stat = mysql_query(connection, query);
		if (query_stat != 0)
		{
			fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		}

		mysql_close(connection);
	}


	cout << "insert_complete" << endl;
	return;
}

Category* DBConnection::select_menu_category() {
	Category* category = new Category[100];
	mysql_query(connection, "set names euckr");
	query_stat = mysql_query(connection, "SELECT * FROM pos_menu_category");
	if (query_stat != 0) {
		cout << "Mysql query error : " << mysql_error(&conn) << endl;
	}

	sql_result = mysql_store_result(connection);
	int i = 0;
	while ((sql_row = mysql_fetch_row(sql_result)) != NULL) {

		category[i].setNo(atoi(sql_row[0]));	//no
		category[i].setName(sql_row[1]);//category_name
		cout << sql_row[1] << endl;
		i++;
	}
	cout << "select_complete" << endl;
	return category;
}
