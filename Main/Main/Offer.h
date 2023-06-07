#pragma once
#include <string>
using namespace std;

class Offer
{
private:
	string offer_ID;
	string offer_name;
	string offer_condition;
	int offer_precentage;
	string start_date;
	string end_date;
public:
	Offer();
	Offer(string offer_ID, string offer_name, string offer_condition, int offer_precentage, string start_date, string end_date);
	~Offer();

};

