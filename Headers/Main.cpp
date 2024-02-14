#include "Character.h"
#include <iostream>
using namespace std;

int main()
{
	system("CLS");
	cout << "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t\t::::::::::Welcome to the Character Creator::::::::::" << endl;
	cout << "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t\t------------::::::::Game  Start::::::::-------------\n" << endl;
	Character* character = new Character;

	cout << "Please enter your characters first name: ";
	cin >> character->firstName;

	cout << "Please enter your characters last name: ";
	cin >> character->lastName;

	cout << "What is your age: ";
	cin >> character->age;

	cout << "How about your gender: ";
	cin >> character->gender;
	
	cout << "Please enter your occupation: ";
	cin >> character->occupation;
	cout << endl;

	system("CLS");
	character->ReportSelf();
	system("pause");

	system("CLS");
	character->ReportInventory();
	system("pause");

	system("CLS");
	character->AddToInventory("Lighter");
	system("pause");

	system("CLS");
	character->ReportInventory();
	system("pause");
	delete character;
	return 0;
}