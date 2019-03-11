// Implememtation file for the Die class
#include <iomanip>
#include <iostream>
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
#include "Die.h"
using namespace std;

// client code to use the Die class goes here
void displayPct(Die, int[], const int );
int main()
{
	cout << fixed << showpoint << setprecision(2);
	Die sixSide(6);
	const int sixArraySize = 7;
	int sixArray[sixArraySize] = { 0,0,0,0,0,0,0,};
	Die twelveSide(12);
	const int twelveArraySize = 13;
	int twelveArray[twelveArraySize] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int val;
	for (int count = 0; count < 1000000; count++)
	{
		sixSide.roll();
		twelveSide.roll();
		val = sixSide.getValue();
		sixArray[val] += 1;
		val = twelveSide.getValue();
		twelveArray[val] += 1;
	}
	displayPct(sixSide, sixArray, sixArraySize);
	displayPct(twelveSide, twelveArray, twelveArraySize);

	return 0;
}

void displayPct(Die dice, int array[], const int sixArraySize)
{
	cout << "Stats for the " << sixArraySize-1 << " sided die:\n";
	for (int count = 1; count < sixArraySize; count++)
	{
		float pct = static_cast<float>(array[count]) / 10000;
		cout << "Side " << count << ": " << pct << "%\n";
	}
	cout << endl;
}