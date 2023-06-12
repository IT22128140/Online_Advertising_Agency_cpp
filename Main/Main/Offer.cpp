#include "Offer.h"
#include <iostream>
#include <string>
#include "payment"
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

Offer::Offer(string ooffer_ID, string ooffer_name, string ooffer_condition, int ooffer_precentage, string ostart_date, string oend_date)
{
	offer_ID = ooffer_ID;
	offer_name = ooffer_name;
	offer_condition = ooffer_condition;
	offer_precentage = ooffer_precentage;
	start_date = ostart_date;
	end_date = oend_date;
}

void Offer::addoffers()
{
	cout << "Enter offer ID: ";
	cin >> offer_ID;
	cout << "Enter offer name: ";
	cin >> offer_name;
	cout << "Enter offer condition: ";
	cin >> offer_condition;
	cout << "Enter offer precentage: ";
	cin >> offer_precentage;
	cout << "Enter offer start date: ";
	cin >> start_date;
	cout << "Enter offer end date: ";
	cin >> end_date;
}

void Offer::displayoffers()
{
	cout << "Offer ID: " << offer_ID << endl;
	cout << "Offer name: " << offer_name << endl;
	cout << "Offer condition: " << offer_condition << endl;
	cout << "Offer precentage: " << offer_precentage << endl;
	cout << "Offer start date: " << start_date << endl;
	cout << "Offer end date: " << end_date << endl;
}

void Offer::calcoffers(payment& paymentObj, int offer_percentage)
{
		float amount = paymentObj.get_amount();

		float discount = (amount * offer_percentage) / 100;
		float totalAmount = amount - discount;

		cout << "Total amount after discount: " << totalAmount << endl;
}

void Offer::changeoffers()
{
	cout << "Enter offer ID: ";
	cin >> offer_ID;
	cout << "Enter offer name: ";
	cin >> offer_name;
	cout << "Enter offer condition: ";
	cin >> offer_condition;
	cout << "Enter offer precentage: ";
	cin >> offer_precentage;
	cout << "Enter offer start date: ";
	cin >> start_date;
	cout << "Enter offer end date: ";
	cin >> end_date;
}

Offer::~Offer()
{

}
