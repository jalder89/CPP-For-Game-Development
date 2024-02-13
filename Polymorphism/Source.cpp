#include <iostream>
using namespace std;

class Object
{
public:
	virtual void BeginPlay();
};

class Actor : public Object
{
public:
	virtual void BeginPlay() override;
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	Object* objectPtr = new Object();
	Actor* actorPtr = new Actor();
	Pawn* pawnPtr = new Pawn();

	Object* ObjectArray[] = { objectPtr, actorPtr, pawnPtr };
	for (int i = 0; i < 3; i++)
	{
		ObjectArray[i]->BeginPlay();
	}

	delete objectPtr;
	delete actorPtr;
	delete pawnPtr;
	system("pause");
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called\n" << endl;
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called\n" << endl;
}

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() called\n" << endl;
}