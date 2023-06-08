#include "Proposal.h"
#include<iostream>
#include<string>
using namespace std;

Proposal::Proposal()
{
	Proposal_id = "";
	RegisteredUser_id = "";
	requirement = "";
}
Proposal::Proposal(string Pro_id, string RUser_id, string requrement)
{
	this->Proposal_id = Pro_id;
	this->RegisteredUser_id = RUser_id;
	this->requirement = requrement;
}
void Proposal::validateMembership()
{
	cout << "Proposal_id:" << Proposal_id << endl;
	cout << "RegisteredUser_id:" << RegisteredUser_id << endl;
	cout << "requirment:" << requirement << endl;
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