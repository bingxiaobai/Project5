#include "Sales_data.h"



Sales_data::Sales_data()
{
	bookNO = "";
	revenue = 0;
	units_sold = 0;
}

Sales_data::Sales_data(string &bookno, unsigned &price)
{
	bookNO = bookno;
	revenue = 0;
	units_sold = price;
}

string Sales_data::isbn()
{
	return this->bookNO;
}

auto Sales_data::combine(const Sales_data& t)
{
	revenue += t.revenue;
	return *this;
}

auto Sales_data::add()
{
}

auto Sales_data::read()
{
}

auto Sales_data::print()
{
}


Sales_data::~Sales_data()
{
}
