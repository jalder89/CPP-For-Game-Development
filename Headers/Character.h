#pragma once
#include "Inventory.h"
#include <string>
using std::string;

class Character
{
protected:
	Inventory* inventory;
public:
	enum CharacterType;
	enum CharacterState;
	CharacterType type;
	CharacterState state;
	string firstName;
	string lastName;
	string occupation;
	string gender;
	int age;
	int health;
	int level;
	int strength;

	Character();
	~Character();

	void Greeting(Character* participant);

	virtual void Talk(string message);

	virtual void Talk(Character* participant, string message);

	virtual void Attack(Character* target);

	virtual void Sit();

	virtual void AddToInventory(string itemName);

	virtual void RemoveFromInventory(string itemName);

	virtual void ReportInventory();

	virtual void ReportSelf();

};