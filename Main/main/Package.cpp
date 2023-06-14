#include "Package.h"
#include <iostream>
#include <string>
using namespace std;

Package::Package()
{
	membershipPlan_ID = "";
}

Package::Package(string plan_id, string plan_name, double fee)
{
	membershipPlan_ID = plan_id;
	membershipPlan_Name = plan_name;
	package_fee = fee;
}

void Package::addMembershipPlan()
{

}

void Package::displayPackage()
{
	cout << "Membership ID : " << membershipPlan_ID << endl;
	cout << "You have chosen : " << membershipPlan_Name << endl;
	cout << "You have to pay : " << package_fee << endl;
}

void Package::applyMembershipPlan()
{

}

void Package::takePayment(string Payment_ID)
{

}

Package::~Package()
{

}