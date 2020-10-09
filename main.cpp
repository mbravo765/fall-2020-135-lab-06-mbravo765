/*
Author: Michelle Bravo
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 06

Purpose: call void test_ascii() from main
*/

#include <iostream>
#include "funcs.h"


int main()
{
	using std::string;
	using std::cout;
	using std::endl;

	test_ascii("Cat :3 Dog");
	cout<<"\n";

	test_ascii("50");//evaluates to 53-48
	cout<<"\n";

	test_ascii("Hello world");
	cout << "\n";

	//encryptCaesar("Hello World", 10);
	//cout << "Ciphertext: ";
	//cout << "\n";

  return 0;
}
