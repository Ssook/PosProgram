#pragma once
#include <iostream>
#include <string>
#include "Order.h"
class Table {
private:
	int _no;
	Order _orderList[100];
	int _totalPrice;
	int _leftPrice;
	int _size=0;
public:
	Table();
	void setTotalPrice(int total_price) {
		_totalPrice = total_price;
	}
	void setLeftPrice(int left_price) {
		_leftPrice = left_price;
	}

	void setOrder(Order order) {
		_orderList[_size] = order;
		_size++;
	}
};