
// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int choice;
	int month, adult = 50, kid = 20, senior_citizen = 0, payment;

	do {
		cout << right << setw(65) << "This is Gym menu" << endl;
		cout << right << setw(60) << "1.Adult Gym" << endl;
		cout << right << setw(59) << "2.Kids Gym" << endl;
		cout << right << setw(69) << "3.Senior Citizen Gym" << endl;
		cout << right << setw(64) << "4.Exit the menu" << endl << endl;
		cout << right << setw(89) << "Please enter your choice for this menu :";
		cin >> choice;

		switch (choice)
		{
		case 1: cout << "How many month you want ?" << endl;
			cin >> month;
			payment = month * adult;
			cout << "Adult Gym" << "The price is RM " << payment << endl;
			break;
		case 2: cout << "How many month you want ?" << endl;
			cin >> month;
			payment = month * kid;
			cout << "Kids Gym" << "The price is RM " << payment << endl;
			break;
		case 3:cout << "How many month you want ?" << endl;
			cin >> month;
			payment = month * senior_citizen;
			cout << "Senior Citizen Gym" << "The price is RM " << payment << endl;
			break;
		case 4: cout << "Exit the menu" << endl;
			break;
		default: cout << "Please enter number between 1-3" << endl;
		}

	} while (choice != 4);

	return 0;
}


