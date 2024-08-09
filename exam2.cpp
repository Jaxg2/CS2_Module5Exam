//Jaxon
#include "Email.h"
#include <iostream>
#include <time.h>
using namespace std;

int roll()
{
	int die[365];
	int num;
	int ran;

	cout << "Enter a number: ";
	cin >> num;
	
	srand(time(0));

	ran = rand() % 365 + 1;

	if (num == ran)
	{
		return num;
	}
	else
	{
		rand() % 365 + 1;
	}
	
}

int main()
{
	Email email;

	string emailValidator();
	int roll();

}