#pragma once
#include<string>
#include "Payment.h"
#include "Proposal.h"
using namespace std;

class Order
{
private:
	string Order_id;
	string Order_date;
	Payment* pay;
	Package* pack;

public:
	Order();
	Order(string O_id, string O_date);
	void PayPayment(string P_Paymentid, string P_paymeth, Package* pack);
	void displayPayment();
	void addOrder();
	void ProcessToPay();
	void DisplayOrder();
	void AccessToPdetails();
	~Order();

};



