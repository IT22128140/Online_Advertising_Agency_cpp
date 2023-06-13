#pragma once
#include<string>
#include "User.h"
#include "Creative_director.h"
#include "Administrator.h"
#include "CustomerAgent.h"
#include "Report.h"
using namespace std;

class Manager : public User
{
private:
	string Manager_ID;

public:
	Manager();
	Manager(string M_name, string M_contactNumber, string M_email, string M_Username, string M_Password, string M_ManagerID);
	void displayManager();
	void manageCreativeDirector();
	void manageAdmin();
	void manageCustomerAgent();
	void generateReport();
	~Manager();

};