#pragma once
#include <iostream>
#include <string>
#include "PosMenuItem.h"
using namespace std;

class Order {
private :
	PosMenuItem _menu;
	int _quantity;
public:
	Order() {
	}
	Order(PosMenuItem menu, int quantity) {
		_menu = menu;
		_quantity = quantity;
	}

	void setMenu(PosMenuItem menu) {
		_menu = menu;
	}
	void setQuantity(int quantity) {
		_quantity = quantity;
	}

	PosMenuItem getMenu() {
		return _menu;
	}
	int getQuantity() {
		return _quantity;
	}
};