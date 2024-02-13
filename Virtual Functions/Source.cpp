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
	Object* obj = new Object();
	obj->BeginPlay();

	Actor* act = new Actor();
	act->BeginPlay();

	Pawn* pawn = new Pawn();
	pawn->BeginPlay();

	delete obj;
	delete act;
	delete pawn;
	system("pause");
	return 0;
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called" << endl;
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called" << endl;
}

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() called" << endl;
}