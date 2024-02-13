#include <iostream>
#include <vector>
using namespace std;

class Item
{
public:
	string itemName;

	Item(string name)
	{
		itemName = name;
	}
};

class Inventory
{
public:
	vector<Item>* storage = new vector<Item>();
	
	Inventory()
	{
		cout << "----------:Inventory Created:----------" << endl;
		cout << "----------:::::::::::::::::::----------" << endl;
		cout << endl;
	}
	~Inventory()
	{
		cout << "Inventory deleted" << endl;
		delete storage;
	}

	void AddToInventory(string name)
	{
		Item item(name);
		storage->push_back(item);
		cout << "----------:Inventory Updated:----------" << endl;
		cout << "----------:::::::::::::::::::----------" << endl;
		cout << item.itemName << " added" << endl;
	}

	void ReportContents()
	{
		cout << "----------:Storage  Contents:----------" << endl;
		cout << "----------:::::::::::::::::::----------" << endl;
		int index = 0;
		for(vector<Item>::iterator i = storage->begin(); i != storage->end(); i++)
		{
			cout << storage->at(index).itemName << endl;
			index++;
		}
		index = 0;
		cout << endl;
	}

	static void AddToCount()
	{
		static int itemCount = 0;
		itemCount++;
		cout << "Total Item Count: " << itemCount << endl;
		cout << endl;
	}
};


int main()
{
	Inventory* myInventory = new Inventory;
	
	myInventory->AddToInventory("Cardboard Box");
	Inventory::AddToCount();

	myInventory->AddToInventory("Pack of Smokes");
	Inventory::AddToCount();

	myInventory->ReportContents();

	system("pause");
	delete myInventory;
	return 0;
}