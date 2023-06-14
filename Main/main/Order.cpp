#include<iostream>
#include<string>
#include"order.h"
#include"Payment.h"

using namespace std;

Order::Order()
{
	Order_id = "0";
	Order_date = "0";

}

Order::Order(string O_id, string O_date)
{
	Order_id = O_id;
	Order_date = O_date;
}

void Order::PayPayment(string P_Paymentid, string P_paymeth, Package* pack)
{
	pay = new Payment(P_Paymentid, P_paymeth, pack);
}

void Order::displayPayment()
{
	pay->displayPayment();
}

void Order::addOrder()
{
}

void Order::ProcessToPay()
{
}

void Order::DisplayOrder()
{
	cout << Order_id << Order_date << endl;
}

void Order::AccessToPdetails()
{
}

Order::~Order()
{
}