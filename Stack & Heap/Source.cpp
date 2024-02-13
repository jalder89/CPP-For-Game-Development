#include <iostream>
using namespace std;

class Character
{
public:
	// Declare Character constructor and destructor
	Character();
	~Character();

	// Declare pointers to int for dynamically allocating member variables
	int* CharacterAge;
	int* CharacterHealth;
};

int main()
{
	// Dynamically allocate new Character to memory heap
	Character* Sam = new Character;
	// Dynamically deallocate character from memory heap
	delete Sam;

	system("pause");
}

// Define Character constructor
Character::Character()
{
	// Initialize pointers to int and dynamically allocate int member variables to the heap
	CharacterAge = new int(1);
	CharacterHealth = new int(100);

	cout << "A character was created" << endl;
}

// Define Character destructor
Character::~Character()
{
	// During Character destruction, dynamically deallocate member variables from the heap
	delete CharacterAge;
	delete CharacterHealth;

	cout << "A character was destroyed" << endl;
}