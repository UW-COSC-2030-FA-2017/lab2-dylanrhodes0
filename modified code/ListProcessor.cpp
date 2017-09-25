// #############
// Dylan Rhodes
// COSC 2030
// ListProcessor.cpp
// #############

// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"

int main() {
	List cows;
	cout << "cows list   :  " << cows << endl;
	cout << "cows count  :  " << cows.getCount() << endl;
	cout << "cows sum    :  " << cows.getSum();
	cout << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list   :  " << cows << endl;
	cout << "cows count  :  " << cows.getCount() << endl;
	cout << "cows sum    :  " << cows.getSum();
	cout << endl << endl;

	cows.removeFirst();
	cout << "cows list   :  " << cows << endl;
	cout << "cows count  :  " << cows.getCount() << endl;
	cout << "cows sum    :  " << cows.getSum();
	cout << endl << endl;

	List horses(cows);
	cout << "cows list   :  " << cows << endl;
	cout << "cows count  :  " << cows.getCount() << endl;
	cout << "cows sum    :  " << cows.getSum() << endl;
	cout << "horses list :  " << horses << endl;
	cout << "horses count:  " << horses.getCount() << endl;
	cout << "horses sum  :  " << horses.getSum();
	cout << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list   :  " << cows << endl;
	cout << "cows count  :  " << cows.getCount() << endl;
	cout << "cows sum    :  " << cows.getSum() << endl;
	cout << "horses list :  " << horses << endl;
	cout << "horses count:  " << horses.getCount() << endl;
	cout << "horses sum  :  " << horses.getSum();
	cout << endl << endl;

	List pigs;
	cout << "cows list   :  " << cows << endl;
	cout << "cows count  :  " << cows.getCount() << endl;
	cout << "cows sum    :  " << cows.getSum() << endl;
	cout << "horses list :  " << horses << endl;
	cout << "horses count:  " << horses.getCount() << endl;
	cout << "horses sum  :  " << horses.getSum() << endl;
	cout << "pigs list   :  " << pigs << endl;
	cout << "pigs count  :  " << pigs.getCount() << endl;
	cout << "pigs sum    :  " << pigs.getSum();
	cout << endl << endl;

	pigs = cows;
	cout << "cows list   :  " << cows << endl;
	cout << "cows count  :  " << cows.getCount() << endl;
	cout << "cows sum    :  " << cows.getSum() << endl;
	cout << "horses list :  " << horses << endl;
	cout << "horses count:  " << horses.getCount() << endl;
	cout << "horses sum  :  " << horses.getSum() << endl;
	cout << "pigs list   :  " << pigs << endl;
	cout << "pigs count  :  " << pigs.getCount() << endl;
	cout << "pigs sum    :  " << pigs.getSum();
	cout << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "cows count :  " << cows.getCount() << endl;
	cout << "cows sum    :  " << cows.getSum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses count:  " << horses.getCount() << endl;
	cout << "horses sum  :  " << horses.getSum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs count  :  " << pigs.getCount() << endl;
	cout << "pigs sum    :  " << pigs.getSum();
	cout << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
