
#include "Creative_director.h"
#include<iostream>
#include<string>
using namespace std;


Creative_director::Creative_director()
{
	CDirector_ID = "0";
}

Creative_director::Creative_director(string CD_ID) : User (CD_ID)
{
	CDirector_ID = CD_ID;
}

void Creative_director::display()
{
	User::displayUser();
	cout << CDirector_ID << endl;
}

void Creative_director::FInalizeProject()
{
}

void Creative_director::ConductCMeeting()
{
}

void Creative_director::EnsureBrandIdentity()
{
}

Creative_director::~Creative_director()
{
}
