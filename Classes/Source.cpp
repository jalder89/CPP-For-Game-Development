#include <iostream>
using namespace std;

class Maker
{
	char divider;
public:
	Maker();

	void Border()
	{
		for (int i = 0; i < 50; i++)
		{
			cout << divider;
		}
		cout << endl;
	}

	void Divider()
	{
		for (int i = 0; i < 2; i++)
		{
			cout << divider << endl;
		}
	}
};

class Character
{
public:
	enum CharacterType
	{
		ct_player,
		ct_npc,
		ct_enemy
	};
	enum CharacterState
	{
		idle,
		sitting,
		walking,
		running,
		talking,
		attacking
	};
	CharacterType type;
	CharacterState state;
	string name;
	string occupation;
	int health;
	int level;
	int strength;

	Character();

	void Greeting(Character* participant)
	{
		state = talking;
		cout << this->name << ": " << "Hey, " + participant->name + "!\n";
		state = idle;
	}

	void Talk(string message)
	{
		state = talking;
		cout << message << endl;
		state = idle;
	}

	void Talk(Character* participant, string message)
	{
		state = talking;
		cout << this->name << ": " << message << endl;
		state = idle;
	}

	void Attack(Character* target)
	{
		state = attacking;
		cout << this->name << " attacks!" << endl;
		cout << this->strength << " damage was done!" << endl;
		target->health -= this->strength;
		cout << target->name << " has " << target->health << " health left!" << endl;
		state = idle;
	}

	void Sit()
	{
		state = sitting;
		cout << this->name << " decided to sit down." << endl;
	}
};

class Player_Class : public Character
{
public:
	Player_Class(string newName, string newOccupation, int newStrength);
	
	void Greeting(Character* participant)
	{
		state = talking;
		cout << this->name << ": " << "Omg, hey " << participant->name << "!" << endl;
		state = idle;
	}
};

class NPC_Class : public Character
{
public:
	NPC_Class(string newName, string newOccupation, int newStrength);

	void Respawn()
	{
		cout << name << " has respawned " << endl;
	}
};

int main()
{
	Maker Make;
	Player_Class Player("Jessica", "Witch", 6);
	NPC_Class Janette("Janette", "Rave Girl", 4);
	NPC_Class Narrator("Narrator", "Narrator", 0);

	Make.Border();
	Player.Greeting(&Janette);
	Janette.Greeting(&Player);

	Make.Border();
	Player.Attack(&Janette);

	Make.Border();
	Janette.Talk(&Player, "OW! What the hell was that for, " + Player.name + "!?");
	Janette.Attack(&Player);

	Make.Border();
	Player.Talk(&Janette, "*Giggles* Sorry, I just thought it was funny. I'm still a little buzzed from last night.");
	Janette.Talk(&Player, "*Janette glares at you with disgust* You bitch, you really went without me?");
	Narrator.Talk("Janette storms over to the door.");
	Janette.Talk(&Player, "You're buying coffee this time!");
	Janette.Respawn();

	Make.Border();
	system("pause");
}

Maker::Maker()
{
	divider = '-';
}

Character::Character()
{
	type = ct_npc;
	name = "Character";
	occupation = "Default Job";
	health = 100;
	strength = 5;
	level = 1;
	state = idle;
}

Player_Class::Player_Class(string newName, string newOccupation, int newStrength)
{
	type = ct_player;
	name = newName;
	occupation = newOccupation;
	strength = newStrength;
}

NPC_Class::NPC_Class(string newName, string newOccupation, int newStrength)
{
	type = ct_npc;
	name = newName;
	occupation = newOccupation;
	strength = newStrength;
}