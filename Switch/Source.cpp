#include <iostream>
using namespace std;

enum MoveSpeed 
{
	Idle = 0,
	WalkSpeed = 10,
	RunSpeed = 25
};

void CheckPlayerState(MoveSpeed moveSpeed);

int main()
{
	char response = ' ';
	char command = ' ';

	cout << "Welcome to Switch Tester!\n";
	cout << "Do you want to play? (y/n): ";
	cin >> response;
	while (response == 'y')
	{
		// Get player input, w for walk, r for run, i for idle, q for quit
		cout << "\nEnter a command (w/r/i/q): ";
		cin >> command;
		switch (command)
		{
			case 'w':
				CheckPlayerState(WalkSpeed);
				break;
			case 'r':
				CheckPlayerState(RunSpeed);
				break;
			case 'i':
				CheckPlayerState(Idle);
				break;
			case 'q':
				cout << "Goodbye!\n";
				response = 'n';
				break;
		}
	}
	system("pause");
}

void CheckPlayerState(MoveSpeed moveSpeed)
{
	switch (moveSpeed)
	{
	case 0:
		cout << "Player is idle\n";
		break;
	case 10:
		cout << "Player is walking\n";
		break;
	case 25:
		cout << "Player is running\n";
		break;
	default:
		cout << "Player is in an unknown state\n";
		break;
	}
}