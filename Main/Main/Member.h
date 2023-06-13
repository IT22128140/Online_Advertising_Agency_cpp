#pragma once
#include <string>
#include "User.h"

using namespace std;

class Member : public User
{
private:
	string Member_ID;
	string company;
	string address;
	string designation;
	string DOB;
public:
	Member();
	Member(string mMember_ID, string mcompany, string maddress, string mdesignation, string mDOB);
	void displaymember();
	void requestproposal();
	void visitfaq();
	void useqa();
	void checkoffers();
	void payadvertiesment();
	~Member();



};

