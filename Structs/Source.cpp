#include <iostream>
using namespace std;

enum CharacterType
{
	ct_player,
	ct_npc,
	ct_enemy
};

struct Character 
{
	string name;
	CharacterType type;
	string occupation;
	int health;
	int level;
	enum state
	{
		idle,
		walking,
		running,
		talking,
		attacking
	};

	void Talk(Character participant)
	{
		cout << "Hello, " << participant.name;
	}
};

Character CreateCharacter(CharacterType type);

int main()
{
	cout << "Welcome to the game!\n";
	cout << "Beginning character creation..." << endl;
	Character player = CreateCharacter(ct_player);
	system("pause");
}

Character CreateCharacter(CharacterType type)
{
	Character newCharacter;
	newCharacter.type = type;
	newCharacter.health = 100;
	newCharacter.level = 1;

	switch (newCharacter.type)
	{
		case ct_player:
			cout << "Please enter your first name: ";
			cin >> newCharacter.name;
			cout << "Please enter the characters occupation: ";
			cin >> newCharacter.occupation;
			break;
		case ct_npc:
			cout << "Please enter the characters name: ";
			cin >> newCharacter.name;
			cout << "Please enter the characters occupation: ";
			cin >> newCharacter.occupation;
			break;
		case ct_enemy:
			cout << "Please enter the enemies name: ";
			cin >> newCharacter.name;
			cout << "Please enter the enemies occupation: ";
			cin >> newCharacter.occupation;
	}

	cout << "Character creation complete!" << endl;
	cout << "Name: " << newCharacter.name << endl;
	cout << "Occupation: " << newCharacter.occupation << endl;
	cout << "Health: " << newCharacter.health << endl;
	cout << "Level: " << newCharacter.level << endl;

	return newCharacter;
}