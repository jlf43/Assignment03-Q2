// Jaeni Lee
//CS 303 Assignment 3 Question 2: Write a recursive function that determines whether its argument string is apalindrome.

#include <string>
#include <iostream>
#include "PALINDROME.H";
using namespace std;

int main()
{
	int x = 1;
	while (x != 0)
	{
		cout << "A palindrome is a word that reads the same left to right asright to left" << endl;
		cout << "Here is a list of strings. Select each one to determine if the selected word is a palindrome." << endl;
		char m[] = "mom";
		char d[] = "dog";
		char l[] = "l";
		char n[] = "nurse";


		//the list of strings
		cout << "   *** Press 0 to exit ***   " << endl;
		cout << "[1] " << m << "\n[2] " << d << "\n[3] " << l << "\n[4] " << n << "\n" << endl;
		cin >> x;

		//based on the options, it displays wheter or not the option is a palindrome or not
		switch (x)
		{
			case 1:
			{
				cout << "The word is " << m << endl << endl;
				if (isPalindrome(m))
					cout << "Is it a palindrome: YES :)\n" << endl;
				else
					cout << "Is it a palindrome: NO :(\n" << endl;
				break;
			}
			case 2:
			{
				cout << "The word is " << d << endl << endl;
				if (isPalindrome(d))
					cout << "Is it a palindrome: YES :)\n" << endl;
				else
					cout << "Is it a palindrome: NO :(\n" << endl;
				break;
			}
			case 3:
			{
				cout << "The word is " << l << endl << endl;
				if (isPalindrome(l))
				{
					cout << "Is it a palindrome: YES :)\n" << endl;
				}
				else
				{
					cout << "Is it a palindrome: NO :(\n" << endl;
				}
				break;
			}
			case 4:
			{
				cout << "The word is " << n << endl << endl;
				if (isPalindrome(n))
					cout << "Is it a palindrome: YES :)\n" << endl;
				else
					cout << "Is it a palindrome: NO :(\n" << endl;
				break;
			}
			default:
			{
				cout << "\nleaving. . . \n";
				break;
			}
		}
	}

	return 0;
}



