#include "Retail.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

float Retail::getStockValue()
{
	float stock = unitsOnHand * price;
	return stock;
}

Retail::Retail(string desc, int units, double cost)
{
	description = desc;
	unitsOnHand = units;
	price = cost;
}

double Retail::getPrice() const
{
	return price;
}


int Retail::getUnits() const
{
	return unitsOnHand;
}

string Retail::getDescription() const
{
	return description;
}
