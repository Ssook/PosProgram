#pragma once
#include <iostream>
#include <string>
#include "MenuItem.h"

class Order {
private :
	MenuItem _menu;
	int _quantity;
public:
	Order();
	Order(MenuItem menu, int quantity) {
		_menu = menu;
		_quantity = quantity;
	}

	void setMenu(MenuItem menu) {
		_menu = menu;
	}
	void setQuantity(int quantity) {
		_quantity = quantity;
	}

	MenuItem getMenu() {
		return _menu;
	}
	int getQuantity() {
		return _quantity;
	}
};