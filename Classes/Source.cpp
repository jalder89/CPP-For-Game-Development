#include <iostream>
using namespace std;

class Maker
{
	char divider;
public:
	Maker()
	{
		divider = '-';
	}

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
		walking,
		running,
		talking,
		attacking
	};

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
};

class PlayerClass : public Character
{
public:
	PlayerClass()
	{
		type = ct_player;
		name = "Player";
		occupation = "Withc";
		strength = 6;
	}

	void Greeting(Character* participant)
	{
		state = talking;
		cout << this->name << ": " << "Omg, hey " << participant->name << "!" << endl;
		state = idle;
	}
};

class JanetteClass : public Character
{
public:
	JanetteClass()
	{
		type = ct_npc;
		name = "Janette";
		occupation = "Rave Girl";
		strength = 4;

	}
		
	void Greeting(Character* Player)
	{
		
		state = talking;
		cout << this->name << ": " << "Hey, " + Player->name + "!\n";
		state = idle;
	}
};

int main()
{
	Maker Make;
	PlayerClass Player;
	JanetteClass Janette;
	
	Make.Border();
	Player.Greeting(&Janette);
	Janette.Greeting(&Player);

	Make.Border();
	Player.Attack(&Janette);

	Make.Border();
	Janette.Talk(&Player, "OW! What the hell was that for, " + Player.name + "!?");
	Janette.Attack(&Player);

	Make.Border();
	system("pause");
}