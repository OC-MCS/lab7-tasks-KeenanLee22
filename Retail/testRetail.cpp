#include "Retail.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
// code to test your RetailItem class goes here
void loadItems(vector <Retail>&);
int main()
{
	double total = 0;
	cout << fixed << showpoint << setprecision(2);
	vector <Retail> Chloe;
	loadItems(Chloe);
	cout << "   Description\tPrice\tOn Hand\tValue\n";
	for (int count = 0; count < Chloe.size(); count++)
	{
		
		cout << setw(16) << left << Chloe[count].getDescription() << setw(10);
		cout << Chloe[count].getPrice() << setw(5);
		cout << Chloe[count].getUnits() << setw(5);
		cout << right << Chloe[count].getStockValue() << endl;
		total += Chloe[count].getStockValue();
	}
	cout << "Total inventory value: " << total;
	return 0;
}

void loadItems(vector <Retail>& Chloe)
{
	string description;
	string units;
	string price;
	ifstream inFile;
	inFile.open("ChloeIsANerd.csv");
	while (getline(inFile, description, ','))
	{
		getline(inFile, units, ',');
		getline(inFile, price);
		Retail temp(description, stoi(units), stod(price));
		Chloe.push_back(temp);
	}
	
}