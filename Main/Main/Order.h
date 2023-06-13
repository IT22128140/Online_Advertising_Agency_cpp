#pragma once
#include<string>
using namespace std;

class order
{
private:
	string Order_id;
	string Order_date;
	double Offer_amount;
	double Total_amount;
public:
	order();
	order(string O_id, string O_date, double O_Ofamount, double O_Totamount);
	void ProcessToPay();
	void DisplayOrder();
	void AccessToPdetails();
	~order();

};

