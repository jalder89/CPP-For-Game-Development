#include "Inventory.h"

using std::cout;
using std::cin;
using std::endl;
using std::find;
using std::string;

Inventory::Inventory()
{
	itemCount = 0;
	storage = new vector<Item>();
}

Inventory::~Inventory()
{
	delete storage;
}

void Inventory::AddToCount()
{
	itemCount++;
	cout << "Total Item Count: " << itemCount << endl;
	cout << endl;
}

void Inventory::AddToInventory(string itemName)
{
	Item item(itemName);
	storage->push_back(item);
	cout << "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t\t::::::::::Welcome to the Character Creator::::::::::" << endl;
	cout << "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t\t-----------::::::Inventory Updated::::::------------\n" << endl;
	cout << "\t\t\t\t" << item.itemName << " added" << endl;
}

void Inventory::RemoveFromInventory(string itemName)
{
	cout << "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t\t::::::::::Welcome to the Character Creator::::::::::" << endl;
	cout << "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t\t-----------::::::Inventory Updated::::::------------\n" << endl;

	for (unsigned i = 0; i < storage->size(); i++)
	{
		if (storage->at(i).itemName == itemName)
		{
			storage->erase(storage->begin() + i);
			cout << "\t\t\t\t" << itemName << " removed" << endl;
		}
	}
}

void Inventory::ReportContents()
{
	cout << "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t\t::::::::::Welcome to the Character Creator::::::::::" << endl;
	cout << "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t\t------------::::::Storage Contents::::::------------\n" << endl;

	for (unsigned i = 0; i < storage->size(); i++)
	{
		cout << "\t\t\t\t" << storage->at(i).itemName << endl;
	}
	cout << endl;
}