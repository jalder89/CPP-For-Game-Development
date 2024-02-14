#include "Character.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum Character::CharacterType 
{
	ct_player,
	ct_npc,
	ct_enemy
};

enum Character::CharacterState
{
	idle,
	sitting,
	walking,
	running,
	talking,
	attacking,
	inventoryOpen
};

Character::Character()
{
	inventory = new Inventory;
	type = ct_npc;
	state = idle;
	firstName = "Character";
	lastName = "Default";
	occupation = "Default Job";
	gender = "Uknown";
	age = 99;
	health = 100;
	level = 1;
	strength = 5;
}

Character::~Character()
{
	delete inventory;
}

void Character::Greeting(Character* participant)
{
	state = talking;
	cout << this->firstName << ": " << "Hey, " + participant->firstName + "!\n";
	state = idle;
}

void Character::Talk(string message)
{
	state = talking;
	cout << message << endl;
	state = idle;
}

void Character::Talk(Character* participant, string message)
{
	state = talking;
	cout << this->firstName << ": " << message << endl;
	state = idle;
}

void Character::Attack(Character* target)
{
	state = attacking;
	cout << this->firstName << " attacks!" << endl;
	cout << this->strength << " damage was done!" << endl;
	target->health -= this->strength;
	cout << target->firstName << " has " << target->health << " health left!" << endl;
	state = idle;
}

void Character::Sit()
{
	state = sitting;
	cout << this->firstName << " decided to sit down." << endl;
}

void Character::AddToInventory(string itemName)
{
	inventory->AddToInventory(itemName);
}

void Character::RemoveFromInventory(string itemName)
{
	inventory->RemoveFromInventory(itemName);
}

void Character::ReportInventory()
{
	inventory->ReportContents();
}

void Character::ReportSelf()
{
	cout << "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t\t::::::::::Welcome to the Character Creator::::::::::" << endl;
	cout << "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t\t------------::::::Character Report::::::------------\n" << endl;
	cout << "\t\t\t\t\tFirst Name: " << firstName << "\t" << "Last Name : " << lastName << endl;
	cout << "\t\t\t\t\tGender: " << gender << "\t\tAge: " << age << endl;
	cout << "\t\t\t\t\tOccupation: " << occupation << "\t" << "Level: " << level << "\n" << endl;
}
