#pragma once
#include<string>
#include "Order.h"
#include "Offer.h"
#include "Package.h"
using namespace std;

class Payment
{
private:
	string Payment_ID;
	string Payment_Method;
	double Amount; //without discount
	double NetAmount; //with discount
	Package* Pkg; //an object of Package as attribute

public:
	Payment();
	Payment(string P_Paymentid, string P_paymeth, Package* pack);
	void calcNetAmount(double P_Amount, Offer* D);
	void displayPayment();
	void validatePay();
	void paymentHistory();
	~Payment();
};





