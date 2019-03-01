#pragma once
#include <iostream>
#include <string>
using namespace std;

class Sales_data
{
public:
	Sales_data();
	Sales_data(string &bookno,unsigned &price);
	string isbn();
	auto combine(const Sales_data& t);
	auto add();
	auto read();
	auto print();
	~Sales_data();
private:
	string bookNO;
	double revenue;
	unsigned units_sold;

};

