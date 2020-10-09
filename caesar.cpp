/*

Author: Michelle Bravo
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 06
Purpose: write the two functions specified in the main lab.
char shiftChar(char c, int rshift)
and
string encryptCaesar(string plaintext, int rshift);
These two functions should be tested via doctest from tests.cpp
*/

#include <iostream>
#include <cctype>
#include <string>
#include "caesar.h"

//Task B
//A helper function to shift one character by rshift
char shiftChar(char c, int rshift)
{
	if(isalpha(c))//checks if character c is alphabetic
	{
		if(isupper(c))//checks if character is uppercase letter
		{
			c= ((int)c + rshift -65) %26 + 65;
		}
		else if(islower(c))//checks if character is lower case letter
		{
			c= ((int)c + rshift -97) %26 + 97;
		}
	}
		return c;
}


std:: string encryptCaesar(std::string plaintext, int rshift)
{
	using std::string;

	int size=plaintext.size();//returns the number of characters in string s
	string caesar;

	for(int i=0; i<size; i++)
	{
		caesar+= shiftChar(plaintext[i], rshift);
	}
	return caesar;
}

