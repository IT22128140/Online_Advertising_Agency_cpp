#include "Payment.h"
#include<iostream>
#include<string>
using namespace std;

Payment::Payment()
{
	Payment_ID = "";
	Payment_Method = "";
	Amount = 0.0;
	NetAmount = 0.0;
}

Payment::Payment(string P_Paymentid, string P_paymeth, Package* pack)
{
	Payment_ID = P_Paymentid;
	Payment_Method = P_paymeth;
	Amount = 0.0;
	NetAmount = 0.0;
	Pkg = pack;
}

void Payment::calcNetAmount(double P_Amount, Offer* D)
{
	NetAmount = P_Amount - (P_Amount * D->getoffers());
}

void Payment::displayPayment()
{
	cout << "Payment ID : " << Payment_ID << endl;
	cout << "Payment Method : " << Payment_Method << endl;
	cout << "Net Amount : " << NetAmount << endl;
	Pkg->displayPackage();
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
