#include "Payment.h"
#include<iostream>
#include<string>
using namespace std;

Payment::Payment()
{
	Payment_ID = "";
	Payment_Method = "";
	NetAmount = 0.0;
}

Payment::Payment(string P_Paymentid, string P_paymeth, double P_netAmount)
{
	Payment_ID = P_Paymentid;
	Payment_Method = P_paymeth;
	NetAmount = P_netAmount;
}

double Payment::calcNetAmount(double P_Amount, Offer* D)
{
	NetAmount = P_Amount - D->getDiscount();
	return NetAmount;
}

void Payment::displayPayment()
{
	cout << "Payment ID : " << Payment_ID << endl;
	cout << "Payment Method : " << Payment_Method << endl;

}

void Payment::validatePay()
{

}

void Payment::paymentHistory()
{

}

Payment::~Payment()
{

}
