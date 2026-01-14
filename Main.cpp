#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;
int age;
int option;

int menu()
{
	cout << "Menu Test success!" << endl;
	return 0;
}

int numgen()
{
	int cinput;
	srand(time(NULL));
	
	const char num[10] = { '1','2','3','4','5','6','7','8','9','10' };
	int RandIndex = rand() % 10;
	cout << num[RandIndex];
	cout << "Would you like to return to the menu?";
	cin >> cinput;
	if (cinput == 1)
	{
		menu();
	}
	return 0;
}


int endit()
{
	exit(0);
}

int ageout()
{
	cout << age;
	exit(1);
}

int agemod()
{

	cout << "Your age will be " << age +5 << "in five years. " << endl;
	cout << "Would you like to return to the main menu (1), go to a random number generator (2), or end program (3)? " << endl;
	cin >> option;
	if (option == 1)
	{
		cout << menu();
	}
	else if (option == 3)
	{
		endit();
	}
	else if (option == 2) //this works now
	{
		cout << numgen();
	}
	return 0;
}


int main()
{
	string name;
	
	cout << "Hello! what is your name and age? ";
	cin >> name;
	cin >> age;
	cout << "Hi " << name << "! you will turn " << age +1 << "next year! " << endl;
	cout << "would you like to go to main menu (1), go to an age modifier (2), restart this function (3), or go to a number generator? (4)" << endl;
	cin >> option;
	if (option == 1)
	{
		cout << menu();
	}
	else if (option == 2)
	{
		cout << agemod();
	}
	else if (option == 3)
	{
		cout << main();
	}
	else if (option == 4) 
	{
		numgen();
	}
	else if (option == 5)
	{
		ageout();
	}
	return 0;
}


