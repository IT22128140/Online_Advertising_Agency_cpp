#include "Administrator.h"
#include <iostream>
#include <string>
using namespace std;

Administrator::Administrator()
{
	Admin_ID = "";
}

Administrator::Administrator(string AAdmin_ID)
{
	Admin_ID = AAdmin_ID;
}

void Administrator::displayadmin()
{
	cout << "Admin ID: " << Admin_ID << endl;
}

void Administrator::managefaq()
{

}

void Administrator::manageqa()
{

}

void Administrator::manageoffers()
{

}

Administrator::~Administrator()
{

}