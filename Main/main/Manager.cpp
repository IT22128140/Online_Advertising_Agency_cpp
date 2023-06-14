#include "Manager.h"
#include<iostream>
#include <string>
using namespace std;

Manager::Manager()
{
	Manager_ID = "";
}

Manager::Manager(string M_name, string M_contactNumber, string M_email, string M_Username, string M_Password, string M_ManagerID, Report* rep) : User(M_name, M_contactNumber, M_email, M_Username, M_Password)
{
	Manager_ID = M_ManagerID;
	Rpt = rep;
}

void Manager::displayManager()
{
	User::displayUser();
	cout << "Manager ID : " << Manager_ID << endl;
	Rpt->displayReport();
}

void Manager::manageCreativeDirector()
{

}

void Manager::manageCustomerAgent()
{

}

void Manager::generateReport()
{

}

Manager::~Manager()
{

}

