#include "CustomerAgent.h"
#include <iostream>
#include <string>
using namespace std;

CustomerAgent::CustomerAgent()
{
    CustomerAgent_ID = "";
}

CustomerAgent::CustomerAgent(string CA_id, string CA_name, string CA_email, string CA_contactNumber, string CA_username, string CA_password)
{
    CustomerAgent_ID = CA_id;
    Name = CA_name;
    Email = CA_email;
    ContactNumber = CA_contactNumber;
    Username = CA_username;
    Password = CA_password;
}

void CustomerAgent::displayCustomerAgentDetails()
{
    cout << "Customer Agent ID : " << CustomerAgent_ID << endl;
    cout << "Customer Agent Name : " << Name << endl;
    cout << "Customer Agent Email : " << Email << endl;
    cout << "Customer Agent Contact Number : " << ContactNumber << endl;
    cout << "Customer Agent Username : " << Username << endl;
    cout << "Customer Agent Password : " << Password << endl;
}

void CustomerAgent::takeQuestions(string Question_ID, string question)
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