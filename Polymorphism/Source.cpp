#include <iostream>
using namespace std;

class Object
{
public:
	virtual void BeginPlay();

	void ObjectFunction()
	{
		cout << "ObjectFunction() was called\n\n";
	}
};

class Actor : public Object
{
public:
	virtual void BeginPlay() override;

	void ActorFunction()
	{
		cout << "ActorFunction() was called\n\n";
	}
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;

	void PawnFunction()
	{
		cout << "PawnFunction() was called\n\n";
	}
};

int main()
{
	Object* objectPtr = new Object();
	Actor* actorPtr = new Actor();
	Pawn* pawnPtr = new Pawn();

	Object* ObjectArray[] = { objectPtr, actorPtr, pawnPtr };
	for (int i = 0; i < 3; i++)
	{
		// Pymorphism
		ObjectArray[i]->BeginPlay();

		// Casting
		Object* obj = ObjectArray[i];
		Actor* act = dynamic_cast<Actor*>(obj);
		Pawn* pawn = dynamic_cast<Pawn*>(obj);

		if (act && pawn == NULL)
		{
			act->ActorFunction();
		} 
		else if (pawn)
		{
			pawn->PawnFunction();
		}
		else
		{
			obj->ObjectFunction();
		}

	}

	delete objectPtr;
	delete actorPtr;
	delete pawnPtr;
	system("pause");
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