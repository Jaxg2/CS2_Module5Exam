#include "Email.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

Email::Email()
{

}

string Email::emailValidator()
{

	int count = 0;
	int i = 0;
	int j = 0;

	cout << "Please enter an email address: ";
	cin >> email;

	try 
	{
		if (email.at(0) == '@')
		{
			cout << "Incorrect email address.";
		}
	}
	catch (string email)
	{
		emailValidator();
	}

	try
	{
		int e = email.length();
		for (int i = 0; i < e; j++)
		{
			count = 1;
		}

		if (count < 1 && email[i] != '@')
		{
			cout << "Error: too many @'s.";
		}
	}
	catch (string email)
	{
		emailValidator();
	}
	
	cout << "Email address accepted." << endl;

	return email;
}