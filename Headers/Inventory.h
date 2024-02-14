#pragma once
#include "Item.h"
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class Inventory
{
protected:
	int itemCount;
public:
	vector<Item>* storage;

	Inventory();
	~Inventory();

	void AddToInventory(string itemName);

	void RemoveFromInventory(string itemName);

	void ReportContents();

	void AddToCount();
};