#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Retail
{
private:
	string description;
	int unitsOnHand;
	double price;
public:
	float getStockValue();
	Retail(string, int, double);
	string getDescription() const;
	int getUnits() const;
	double getPrice() const;

};