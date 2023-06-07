#include "CustomerAgent.h"
#include <iostream>
#include <string>
using namespace std;

CustomerAgent::CustomerAgent()
{
	CustomerAgent_ID = "";
}

CustomerAgent::CustomerAgent(string CA_name, string CA_contactNumber, string CA_email, string CA_username, string CA_password, string CA_id)
{
	CA_name;
	CA_contactNumber;
	CA_email;
	CA_username;
	CA_password;
	CustomerAgent_ID = CA_id;
}

void CustomerAgent::displayCustomerAgentDetails()
{

}

void CustomerAgent::takeQuestions(string Question_ID[], string question[])
{

}

string CustomerAgent::answerQuestions()
{

}

void CustomerAgent::updateUserprofile()
{

}

CustomerAgent::~CustomerAgent()
{

}