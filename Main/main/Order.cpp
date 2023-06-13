#include<iostream>
#include<string>
#include"order.h"
using namespace std;

order::order()
{
	Order_id = "0";
	Order_date = "0";

}

order::order(string O_id, string O_date)
{    
	Order_id = O_id;
	Order_date = O_date;
}

void order::ProcessToPay()
{
}

void order::DisplayOrder()
{
	cout << Order_id << Order_date  << endl;
}

void order::AccessToPdetails()
{
}

order::~order()
{
}
