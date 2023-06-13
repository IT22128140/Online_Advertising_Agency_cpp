#pragma once
#include <string>
using namespace std;

class Offers
{
private:
	string offer_ID;
	string offer_name;
	string offer_condition;
	int offer_precentage;
	string start_date;
	string end_date;
public:
	Offers();
	Offers(string offer_ID, string offer_name, string offer_condition, int offer_precentage, string start_date, string end_date);
	~Offers();

};

