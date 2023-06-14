#pragma once
#include<string>
#include "Payment.h"
#include "Proposal.h"
using namespace std;

class order
{
private:
	string Order_id;
	string Order_date;
	
public:
	order();
	order(string O_id, string O_date);
	void addOdrder();
	void ProcessToPay();
	void DisplayOrder();
	void AccessToPdetails();
	~order();

};

