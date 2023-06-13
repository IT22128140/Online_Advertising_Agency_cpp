#pragma once
#include<string>
#include "User.h"
using namespace std;

class Administrator : public User
{
private:
	string Admin_ID;
public:
	Administrator();
	Administrator(string AAdmin_ID);
	void displayadmin();
	void managefaq();
	void manageqa();
	void manageoffers();
	~Administrator();
};

