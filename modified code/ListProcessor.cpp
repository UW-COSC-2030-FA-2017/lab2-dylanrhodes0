// #############
// Dylan Rhodes
// COSC 2030
// ListProcessor.cpp
// #############

// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
// and destructor.

#include "LinkedList.h"

int main() {
	List cows;
	cows.printValues("cows");

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.printValues("cows");

	cows.removeFirst();
	cows.printValues("cows");

	cows.insertAsLast(57.4);

	List horses(cows);
	cows.printValues("cows");

	horses.insertAsLast(6.8);
	horses.insertAsLast(7.3);

	horses.printValues("horses");

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);

	cows.printValues("cows");
	horses.printValues("horses");

	List pigs;
	cows.printValues("cows");
	horses.printValues("horses");
	pigs.printValues("pigs");

	cows.insertAsLast(5.3);
	cows.insertAsLast(8.2);
	horses.insertAsLast(9.5);
	pigs.insertAsLast(1.4);
	
	pigs.printValues("pigs");

	pigs = cows;
	cows.printValues("cows");
	horses.printValues("horses");
	pigs.printValues("pigs");

	pigs = horses;

	cows.insertAsLast(6.6);
	cows.insertAsLast(8.1);
	horses.insertAsLast(3.4);
	pigs.insertAsLast(4.5);

	cows.printValues("cows");
	horses.printValues("horses");
	pigs.printValues("pigs");

	cout << "End of code" << endl;

	return 0;
}
