#include <iostream>
#include <string>

using namespace std;

int test()
{
	cout << "Test ";
	return 0;
}


int main()
{
	string name;
	int age;
	int option;

	cout << "Hello! what is your name and age? ";
	cin >> name;
	cin >> age;
	cout << "Hi " << name << "! you will turn " << age +1 << "next year! " << endl;
	cout << "would you like to try again (1), go to a random number generator (2), or end program? (3)" << endl;
	cin >> option;
	if (option == 1)
	{
		cout << main();
	}
	else if (option == 2)
	{
		cout << test();
	}
	return 0;
}


