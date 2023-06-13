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
	double NetAmount;

public:
	Payment();
	Payment(string P_Paymentid, string P_paymeth, double P_netAmount);
	double calcNetAmount(double P_Amount, Offer* D);
	void displayPayment();
	void validatePay();
	void paymentHistory();
	~Payment();
};





