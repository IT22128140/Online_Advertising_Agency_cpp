#pragma once
#include <string>
#include "Payment.h"

class Package
{
private:
	string membershipPlan_ID;
	string membershipPlan_Name;
	double package_fee;

public:
	Package();
	Package(string plan_id, string plan_name, double fee);
	void addMembershipPlan();
	void displayPackage();
	void applyMembershipPlan();
	void takePayment(string Payment_ID);
	~Package();
};
};

