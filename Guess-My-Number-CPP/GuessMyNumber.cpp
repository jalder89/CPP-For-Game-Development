#include <iostream>
using namespace std;

bool AskToPlay();
void PlayGame();
int RandomNumber();
bool Guess(int number);
string GetName();

int main()
{
	cout << "Welcome to Guess My Number!" << "\n";
	bool isPlaying = AskToPlay();
	string username = "";
	if (isPlaying)
	{
		username = GetName();
		PlayGame();
	}
	else
	{
		cout << "Have a great day, " << username << "!";
		return 0;
	}

	cout << endl << "Thank you for playing, " << username << ". Have a great day!" << endl;;
	system("pause");
	return 0;
}

// Confirm if the user would like to play Guess My Number
bool AskToPlay()
{
	string playerInput;
	cout << "Would you like to play? ( y/n | yes/no )" << endl;
	cin >> playerInput;
	return playerInput == "Y" || playerInput == "y" || playerInput == "Yes" || playerInput == "yes";
}


// Guess My Number game loop
void PlayGame()
{
	bool isGuessed = false;
	int number = RandomNumber();
	cout << "\nI'm thinking of a number betweem 1 and 20..." << endl;
	while (!isGuessed)
	{
		isGuessed = Guess(number);
	}
}

int RandomNumber()
{
	srand((unsigned)time(NULL));
	return 1 + rand() % 20;
}

// Get the users guess
bool Guess(int number)
{
	int guess = 0;
	cout << "Please enter your guess: ";
	cin >> guess;

	if (guess == number)
	{
		cout << "Correct! My number was " << number << ", that's amazing!" << endl;
		return true;
	}
	else if (guess > number)
	{
		cout << "Your guess is too high!\n" << endl;;
		return false;
	}
	else if (guess < number)
	{
		cout << "Your guess is too low!\n" << endl;;
		return false;
	}
}

string GetName()
{
	string username = "";

	cout << "Please enter your name: ";
	cin >> username;
	return username;
}