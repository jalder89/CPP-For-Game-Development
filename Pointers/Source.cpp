#include <iostream>
using namespace std;

struct Character
{
	string name;
	string occupation;
	int age;
};

void GetPlayerName(Character*);

int main()
{
	cout << "Welcome to pointers!\n" << endl;

	int myArray[] = { 0, 10, 20, 30, 40, 50 };
	int* myArrayPtr = myArray;
	cout << "Array initialized!" << endl;
	cout << "Pointer initialized to myArray!\n" << endl;
	cout << "My array element 1: " << myArray[1] << endl;
	cout << "Address of element 0 of myArray: " << myArrayPtr << endl;

	myArrayPtr += 2;
	cout << "Dereferenced value of element 2 of myArrayPtr: " << *myArrayPtr << endl;
	cout << "Address value of element 2 of myArrayPtr: " << myArrayPtr << endl;

	Character player = { "Jessica", "Software Engineer", 34 };
	cout << "\nPlayer initialized!" << endl;
	Character* playerPtr = &player;
	cout << "Player pointer initialized!\n" << endl;
	cout << "Address of player struct: " << &player << endl;
	GetPlayerName(playerPtr);
	system("pause");
}

void GetPlayerName(Character* playerPtr)
{
	cout << "Get player name: " << playerPtr->name << "\n" << endl;
}
