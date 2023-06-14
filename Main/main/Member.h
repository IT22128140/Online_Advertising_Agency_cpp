#pragma once
#include <string>
#include <iostream>
#include "User.h"
#include "Proposal.h"
#include "Feedback.h"
#include "Order.h"
#include "Question.h"

using namespace std;

class Member : public User
{
private:
	string Member_ID;
	string company;
	string address;
	string designation;
	string DOB;
	Proposal *prop;
	Question *ques;
	Order *ord;
	Feedback *feed;

public:
	Member();
	Member(string mMeber_ID, string mcompany, string maddress, string mdesignation, string mDOB);
	void displaymember();
	void visitfaq();
	void useqa();
	void checkoffers();
	void addProposal(Proposal *prop1);
	void displayProposal();
	void addOrder(Order *ord1);
	void addfeedback();
	void addQuestion(Question *Ques);
	~Member();
};

