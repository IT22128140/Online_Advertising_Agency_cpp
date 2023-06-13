#include "Proposal.h"
#include<iostream>
#include<string>
using namespace std;

Proposal::Proposal()
{
	Proposal_id = "";
	Member_id = "";
	requirement = "";
}
Proposal::Proposal(string Pro_id, string member_id, string requrement)
{
	this->Proposal_id = Pro_id;
	this->Member_id = member_id;
	this->requirement = requrement;
}
void Proposal::displayProposal()
{
	cout << "Proposal_id:" << Proposal_id << endl;
	cout << "Member_id:" << Member_id << endl;
	cout << "requirment:" << requirement << endl;
}
void Proposal::validateMembership()
{

}
void Proposal::AskRequirement()
{

}
void Proposal::createProposal()
{

}
void Proposal::finalizeProposal()
{

}
Proposal::~Proposal()
{

}