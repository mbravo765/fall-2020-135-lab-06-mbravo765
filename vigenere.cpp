/*
Author: Michelle Bravo
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 06-Task C

Purpose: Write a program vigenere.cpp. It should contain a function encryptVigenere implementing
this cipher:
	string encryptVigenere(string plaintext, string keyword);
	You may assume that the keyword contains only lowercase alphabetic characters
	a-z.
*/
#include <iostream>
#include <cctype>
#include <string>
#include "vigenere.h"
#include "caesar.h"



int getShift(char c)
{
	if(isupper(c))//check if character is uppercase letter
	{
		return (int)c -65;
	}
	else
	{
		return (int)c -97;
	}
}

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
	using std::string;

	char encrypted;
	string vigenere;
	int count=0;

	int size=plaintext.size();
	for(int i=0; i<size; i++)
	{
		if(isalpha(plaintext[i]))
		{
			encrypted=shiftChar(plaintext[i], getShift(keyword[count]));
			vigenere+= encrypted;
			count++;
		}
		else
		{
			vigenere += plaintext[i];
		}
		count=count%keyword.length();
	}
	return vigenere;
}
