#pragma once
#include<string>
#include "User.h"
#include "Creative_director.h"
#include "CustomerAgent.h"
#include "Report.h"
using namespace std;

class Manager : public User
{
private:
	string Manager_ID;
	Report* Rpt;	//an object of Report as attribute

public:
	Manager();
	Manager(string M_name, string M_contactNumber, string M_email, string M_Username, string M_Password, string M_ManagerID, Report* rep);
	void displayManager();
	void manageCreativeDirector();
	void manageCustomerAgent();
	void generateReport();
	~Manager();

};