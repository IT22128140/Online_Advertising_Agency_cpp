#pragma once
#include <string>
#include "Payment.h"
#include "Creative_director.h"
#include "Member.h"
using namespace std;

class Proposal
{
private:
	string Proposal_id;
	string Member_id;
	string requirement;
public:
	Proposal();
	Proposal(string Pro_id, string member_id, string requirement);
	void displayProposal();
	void validateMembership();
	void AskRequirement();
	void createProposal();
	void finalizeProposal();
	~Proposal();
};
