#pragma once
#include<iostream>
#include<string>
#include "Manager.h"
#include "Payment.h"
#include "Order.h"
#include "Package.h"
#include "Offer.h"

using namespace std;

class Report
{
private:
	string Report_ID;
	string Report_Type;
	string Report_Date;
	Order *Order;//an object of Order as attribute

public:
	Report();
	Report(string R_reportID, string R_reportTyp, string R_reportDate, order* ordd);
	void displayReport();
	void monthlySalesrep();
	void monthlyAccountingsumrep();
	void membpackagerep();
	void offersrep();
	~Report();
};





