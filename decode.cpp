/*
Author: Michelle Bravo
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 06 routine decode.cpp
Purpose: decode should try every rotation and for each calculate its
distance to the vector of letter frequencies as we discussed in class.
The rotation that's closest to the frequency vector is probablt the decoded
string
*/


#include "decode.h"
#include "decrypt.h"
#include "funcs.h"


std::string decoder(std::string encryptedSt)
{
	using std::string;

	string s [26];
	double letter_freq[]={0.082, 0.015, 0.028, 0.043, 0.13, 0.022, 0.02, 0.061, 0.07, 0.0015, 0.0077, 0.04, 0.024, 0.067, 0.075, 0.019, 0.00095, 0.06, 0.063, 0.091, 0.028, 0.0098, 0.024, 0.0015, 0.02, 0.00074};
	double tot[26];
	int len=0;
	double distance[26]={0};

	for(int i=0; i<26; i++)
	{
		s[i] = decryptCaesar(encryptedSt,i);
		string hold=s[i];
		double freq[26];
		double ds[26];
		for(int i=0; i<hold.length(); i++)
		{
			if(islower(hold[i]))
			{
				tot[hold[i] - 'a']++;
			}
			else if(isupper(hold[i]))
			{
				tot[hold[i] - 'A']++;
			}
		}

		for(int i=0; i<26;i++)
		{
			freq[i]=(double)tot[i]/hold.length();
		}
		for(int i=0; i<26; i++)
		{
			ds[i]=(freq[i]-letter_freq[i])*(freq[i]-letter_freq[i]);
		}

		for(int j=0; j<26; j++)
		{
			distance[i] = distance[i]+ ds[j];
		}
	}
	for(int i=1; i < 26; i++)
	{
		if(distance[i] < distance[len])
		{
			len=i;
		}
	}
	return s[len];
}


