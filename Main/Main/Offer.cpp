#include "Offer.h"
#include <iostream>
#include <string>
using namespace std;

Offer::Offer()
{
	offer_ID = "";
	offer_name = "";
	offer_condition = "";
	offer_precentage = 0;
	start_date = "";
	end_date = "";
}

Offer::Offer(string ooffer_ID, string ooffer_name, string ooffer_condition, int ooffer_precentage, string ostart_date, string oend_date)
{
	offer_ID = ooffer_ID;
	offer_name = ooffer_name;
	offer_condition = ooffer_condition;
	offer_precentage = ooffer_precentage;
	start_date = ostart_date;
	end_date = oend_date;
}

void Offer::setoffers()
{
}

void Offer::displayoffers()
{

}

int Offer::getoffers()
{
	return offer_precentage;
}

void Offer::changeoffers()
{

}

Offer::~Offer()
{

}
