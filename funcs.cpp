/*
Author: Michelle Bravo
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 06

Purpose: Write the function using the prototype void test_ascii()
It should be called from the main and should not be tested via doctest from tests.cpp

*/


#include <iostream>
#include <string>
#include "funcs.h"

// add functions here

void test_ascii(std::string line)
{

	int size=line.size();
	for (int i=0; i<size; i++)
	{//goes through the index of each letter in the string
		std::cout <<line[i] << " " << (int) line[i] <<"\n";//starts with index 0 and then increases by 1
	}

}


