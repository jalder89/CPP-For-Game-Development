#include <iostream>
#include <array>
using namespace std;

void ChangeString(string& stringRef);

int main()
{
	string myString = "Jessica";
	cout << myString << endl;
	ChangeString(myString);
	cout << "I'm sorry, you forgot to add your last name, I've corrected it for you: " << myString << endl;

	system("pause");

	array<int, 5> numbers{ 1, 2, 3, 4, 5 };
	int total = 0;

	for (int i = 0; i < numbers.size(); i++)
	{
		total += numbers[i];
	}
	
	cout << total;
}

void ChangeString(string& stringRef)
{
	stringRef = "Jessica Alder";
}