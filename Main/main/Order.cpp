#include<iostream>
#include<string>
#include"order.h"
using namespace std;

order::order()
{
	Order_id = "0";
	Order_date = "0";
	Offer_amount = 0;
	Total_amount = 0;
}

order::order(string O_id, string O_date, double O_Ofamount, double O_Totamount)
{

	Order_id = O_id;
	Order_date = O_date;
	Offer_amount = O_Ofamount;
	Total_amount = O_Totamount;
}

void order::ProcessToPay()
{
}

void order::DisplayOrder()
{
	cout << Order_id << Order_date << Offer_amount << Total_amount << endl;
}

void order::AccessToPdetails()
{
}

order::~order()
{
}
