// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{


	
	

	int choice;

	do {
		cout << right << setw(68) << "This is Gym menu" << endl;
		cout << right << setw(63) << "1.Adult Gym" << endl;
		cout << right << setw(62) << "2.Kids Gym" << endl;
		cout << right << setw(72) << "3.Senior Citizen Gym" << endl;
		cout << right << setw(67) << "4.Exit the menu" << endl << endl;
		cout << right << setw(92) << "Please enter your choice for this menu :";
		cin >> choice;

		switch (choice)
		{
		case 1: cout << "Adult Gym" << endl;
			break;
		case 2: cout << "Kids Gym" << endl;
			break;
		case 3: cout << "Senior Citizen Gym" << endl;
			break;
		case 4: cout << "Exit the menu" << endl;
			break;
		default: cout << "Please enter number between 1-3" << endl; 
		}

	} while (choice != 4);

    return 0;
}



