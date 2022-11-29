#pragma
#include <iostream>
#include <string>

//// A recursive function that checks if the given char array is a palindrome or not
bool recursivePali(char str[],
	int first, int last)
{

	// If there was only one char, then it would be an automatic palindrome
	if (first == last)
	{
		return true;
	}
		

	// If first and last characters do not match, then it will NOT be a palindrome
	if (str[first] != str[last])
	{
		return false;
	}

	// If there are more than two char, then we need to check if the middle substrings are the same or not
	if (first < last + 1)
	{
		return recursivePali(str, first + 1, last - 1);
	}
	return true;
}

bool isPalindrome(char str[])
{
	int x = strlen(str);

	// An empty string is considered as palindrome
	if (x == 0)
		return true;

	return recursivePali(str, 0, x - 1);
}