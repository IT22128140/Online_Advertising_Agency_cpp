#include "Member.h"
#include <iostream>

using namespace std;

Member::Member()
{
	Member_ID = "";
	company = "";
	address = "";
	designation = "";
	DOB = "";
}

Member::Member(string mMeber_ID, string mcompany, string maddress, string mdesignation, string mDOB)
{
	Member_ID = mMeber_ID;
	company = mcompany;
	address = maddress;
	designation = mdesignation;
	DOB = mDOB;
}

void Member::displaymember()
{
	cout << "Member ID: " << Member_ID << endl;
	cout << "Company: " << company << endl;
	cout << "Address: " << address << endl;
	cout << "Designation: " << designation << endl;
	cout << "Date of Birth: " << DOB << endl;
}

void Member::requestproposal()
{

}

void Member::visitfaq()
{

}

void Member::useqa()
{

}

void Member::checkoffers()
{

}

void Member::payadvertiesment()
{

}

Member::~Member()
{

}
