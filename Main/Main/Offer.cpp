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

Offer::Offer(string offer_ID, string offer_name, string offer_condition, int offer_precentage, string start_date, string end_date)
{

}

Offer::~Offer()
{
}
