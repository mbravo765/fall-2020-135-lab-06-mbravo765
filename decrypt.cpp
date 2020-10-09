/*
Author: Michelle Bravo
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 06: Task D

Purpose: Implement two decryption functions corresponding to the above ciphers.
When decrypting ciphertext, ensure that the produced decrypted string is equal to
the original plaintext:
decryptCaesar(ciphertext, rshift)
decryptVigenere(ciphertext, keyword)

*/

#include <iostream>
#include <cctype>
#include <string>
#include "decrypt.h"
#include "caesar.h"

std::string decryptCaesar(std::string ciphertext, int rshift)
{
	std::string decryption;
	for(int i=0; i<ciphertext.size(); i++)
	{
		decryption += shiftChar(ciphertext[i], 26- rshift);
	}
	return decryption;
}


std::string decryptVigenere(std::string ciphertext, std::string keyword)
{
	std::string decryption;
	int rshift;
	int count=0;
	for(int i=0; i<ciphertext.size(); i++)
	{
		rshift=(int)(keyword[count%keyword.size()]-97);
		if(!isalpha(ciphertext[i]))
		{
			count--;
		}
		decryption += shiftChar(ciphertext[i],26-rshift);
		count++;
	}
	return decryption;
}

