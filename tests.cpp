/*
Author: Michelle Bravo
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 06

test cases for task b, c, and d.
*/


#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include "decode.h"

// add your tests here
//Task B
TEST_CASE ("Check encryptCaesar (string plaintext, int rshift")
{
	CHECK(encryptCaesar("Taylor Swift", 26)== "Taylor Swift");
	CHECK(encryptCaesar("Dear",0) == "Dear");
	CHECK(encryptCaesar("computers", 1) == "dpnqvufst");
	CHECK(encryptCaesar("Hello World",10) == "Rovvy Gybvn");
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}

TEST_CASE ("Check shiftChar (char c, int rshift)")
{
	CHECK(shiftChar('a',0)== 'a');
	CHECK(shiftChar('A',3)== 'D');
	CHECK(shiftChar('Q', -4)== 'M');
}

//Task C
TEST_CASE ("Check encryptVigenere (string plaintext, string keyword)")
{
	CHECK(encryptVigenere("Hello, World!", "cake")== "Jevpq, Wyvnd!");
	CHECK(encryptVigenere("Speak", "now")=="Fdany");
	CHECK(encryptVigenere("lost", "ab") == "lpsu");
	CHECK(encryptVigenere(" ", "nOtHIng")== " ");
	CHECK(encryptVigenere("#helpIN(1)", "cde")== "#jhprLR(1)");
}

//Task D
TEST_CASE("Check decryptCaesar (ciphertext, rshift)")
{
	CHECK(decryptCaesar("Rovvy, Gybvn!",10)=="Hello, World!");
	CHECK(decryptCaesar("Bfd yt Lt!", 5)=="Way to Go!");
	CHECK(decryptCaesar("#sims",0)=="#sims");
}

TEST_CASE("Check decryptVigenere (string ciphertext, string keyword)")
{
	CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake")=="Hello, World!");
	CHECK(decryptVigenere("Jevpq", "cake") == "Hello");
}

TEST_CASE("Checking Decode Caesar function")
{
	CHECK(decoder(encryptCaesar("Taylor Swift",13)) == "Gnlybe Fjvsg");
	CHECK(decoder("no change") == "no change");
	CHECK(decoder(encryptCaesar("Hello What's up", 8)) == "Pmttw Epib'a cx");

}
