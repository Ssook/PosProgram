#pragma once
#include <iostream>
#include <string>
#include "Order.h"
using namespace std;

class Table {
private:
	int _no;
	Order _orderList[100];
	int _totalPrice=0;
	int _leftPrice=0;
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
		int flag = 0;
		for (int i = 0; i < _size; i++) {
			if (order.getMenuName() ==_orderList[i].getMenuName()) {
				_orderList[i].setQuantity(_orderList[i].getQuantity()+1);
				flag = 1;
			}
		}

		if (flag == 0) {
			_orderList[_size] = order;
			_size++;
		}

	}

	int getTotalPrice() {
		return _totalPrice;
	}

	int getSize() {
		return _size;
	}

	Order getOrder(int no) {
		return _orderList[no];
	}
};