#include <iostream>
using namespace std;

enum CharacterType 
{
	ct_player, 
	ct_npc, 
	ct_enemy
};

enum CharacterState
{
	idle,
	walking,
	running,
	talking,
	attacking
};

class Character
{
public:

	Character()
	{
		type = ct_player;
		name = "Character";
		occupation = "Witch";
		health = 100;
		strength = 5;
		level = 1;
		state = idle;
	}

	CharacterType type;
	CharacterState state;
	string name;
	string occupation;
	int health;
	int level;
	int strength;
	

	void Talk(Character* participant)
	{
		state = talking;
		cout << this->name << ": " << "Hello, " << participant->name << endl;
		state = idle;
	}

	void Talk(Character* participant, string message)
	{
		state = talking;
		cout << this->name << ": " << message << endl;
	}

	void Attack(Character* target)
	{
		state = attacking;
		cout << this->name << " attacks!" << endl;
		cout << this->strength << " damage was done!\n" << endl;
		target->health -= this->strength;
		cout << target->name << " has " << target->health << " health left!" << endl;
	}
};

int main()
{
	Character Player;
	Player.name = "Jessica";
	Character Janette;
	Janette.name = "Janette";
	Janette.type = ct_npc;

	Player.Talk(&Janette);
	Janette.Talk(&Player, "Hi, " + Player.name + "!\n");

	Player.Attack(&Janette);
	Janette.Talk(&Player, "OW! What the fuck was that for, " + Player.name + "!?\n");

	system("pause");
}