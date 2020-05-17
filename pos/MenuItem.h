#pragma once
#include<iostream>
#include<string>
using namespace std;
class MenuItem {
private : 
	string _name;
	int _price;
	int _category;

public:
	MenuItem();
	MenuItem(string name, int price, int category);
	void setName(string name) {
		_name = name;
	}
	void setPrice(int price) {
		_price = price;
	}
	void setCategory(int category) {
		_category = category;
	}
	
	string getName() {
		return _name;
	}

	int getPrice() {
		return _price;
	}
	int getCategory() {
		return _category;
	}


};