/*
Author: Michelle Bravo
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 06

Purpose: call void test_ascii() from main
*/

#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include "decode.h"
int main()
{
	using std::string;
	using std::cout;
	using std::endl;
	using std::cin;

	test_ascii("Cat :3 Dog");
	cout<<"\n";

	test_ascii("50");//evaluates to 53-48
	cout<<"\n";

	test_ascii("Hello world");
	cout << "\n";
	cout << "decode encryptCaesar(Taylor Swift, 13)" <<"\n" << decoder(encryptCaesar("Taylor Swift", 13));
	cout << "\n";
	cout << "decode encryptCaesar(Hello now, What's up, 8)" << "\n" << decoder(encryptCaesar("Hello What's up", 8));
	cout << "\n";

  return 0;
}
