#pragma once
#include <string>
#include "payment.h"
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
	Offer(string ooffer_ID, string ooffer_name, string ooffer_condition, int opffer_precentage, string ostart_date, string oend_date);
	void addoffers();
	void displayoffers();
	void calcoffers(payment& paymentObj, int offer_precenytage);
	void changeoffers();
	~Offer();
};

