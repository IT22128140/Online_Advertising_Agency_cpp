#include "Member.h"
#include <iostream>
#include <array>
#include "Feedback.h"
#include "Proposal.h"
#include "Order.h"

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


void Member::visitfaq()
{
}

void Member::useqa()
{
}

void Member::checkoffers()
{
}

void Member::addProposal(Proposal *prop1)
{
	prop1->addProposal();
}

void Member::displayProposal()
{
	prop->displayProposal();
}

void Member::addOrder(Order *ord1)
{

}

void Member::addfeedback()
{
}
void Member::addQuestion(Question* Ques)
{
	ques = Ques;
}

Member::~Member()
{

}
