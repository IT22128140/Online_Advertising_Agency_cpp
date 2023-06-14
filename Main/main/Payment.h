#pragma once
#include<string>
#include "Order.h"
#include "Offer.h"
using namespace std;

class Payment
{
private:
	string Payment_ID;
	string Payment_Method;
	double Amount; //without discount
	double NetAmount; //with discount

public:
	Payment();
	Payment(string P_Paymentid, string P_paymeth);
	void calcNetAmount(double P_Amount, Offer* D);
	void displayPayment();
	void validatePay();
	void paymentHistory();
	~Payment();
};





