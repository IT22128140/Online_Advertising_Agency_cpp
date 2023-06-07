#pragma once
#include<string>
using namespace std;

class Administrator
{
private:
	string Admin_ID;
public:
	Administrator();
	Administrator(string AAdmin_ID);
	void managefaq();
	void manageqa();
	void manageoffers();
	~Administrator();
};

