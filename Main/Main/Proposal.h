#pragma once
#include <Payment.h>
#include <CreativeDirector.h>
#include <RegisteredUser.h>
#include <string>
using namespace std;

class Proposal
{
private:
	string Proposal_id;
	string RegisteredUser_id;
	string requirement;
public:
	Proposal();
	Proposal(string Pro_id, string RUser_id, string requirement);
	void displayProposal();
	void validateMembership();
	void AskRequirement();
	void createProposal();
	void finalizeProposal();
	~Proposal();
};

