#include <iostream>
using namespace std;

int CreatureCount = 0;

class Creature
{
public:
	Creature();
	
	// Setters
	void SetName(string name);
	void SetStrength(int value);
	
	// Getters
	string GetName();
	int GetHealth();

	// Functions
	void Attack(Creature* target);

private:
	string Name;
	int Health;

protected:
	int Strength;
	int NumberOfLimbs;
	
	void TakeDamage(int damage);
	void Report();
};

class Kobold : public Creature
{
public:
	Kobold();
};

int main()
{
	Kobold Scratch;
	Scratch.SetName("Scratch");

	Kobold Claw;
	Claw.SetName("Claw");
	Claw.SetStrength(7);

	Claw.Attack(&Scratch);
	Scratch.Attack(&Claw);

	system("pause");
}

Creature::Creature()
{
	Name = "Default";
	Health = 100;
	Strength = 5;
	NumberOfLimbs = 4;
	CreatureCount++;
}

void Creature::SetName(string name)
{
	Name = name;
}

string Creature::GetName()
{
	return Name;
}

int Creature::GetHealth()
{
	return Health;
}

void Creature::SetStrength(int value)
{
	Strength = value;
}

void Creature::TakeDamage(int damage)
{
	if (GetHealth() <= 0)
	{
		cout << this->Name << " has died!" << endl;
	}
	else
	{
		Health -= damage;
		cout << this->GetName() << " has " << Health << " health remaining!" << endl;
	}
}

void Creature::Attack(Creature* target)
{
	cout << this->GetName() << " attacks!" << endl;
	target->TakeDamage(this->Strength);
}

void Creature::Report()
{
	cout << "Creature Count: " << CreatureCount << endl;
}

Kobold::Kobold()
{
	Strength = 5;
	cout << "A Kobold was created!" << endl;
	Report();
}