#pragma once
#include<iostream>
#include<string>
using namespace std;

class Category {
private:
	int _no;
	string _name;

public:
	Category();
	Category(string name);
	void setName(string name) {
		_name = name;
	}
	void setNo(int no) {
		_no = no;
	}

	string getName() {
		return _name;
	}

	int getNo() {
		return _no;
	}

};