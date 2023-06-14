#include "CustomerAgent.h"
#include <iostream>
#include <string>
using namespace std;

CustomerAgent::CustomerAgent()
{
    CustomerAgent_ID = "";
}

CustomerAgent::CustomerAgent(string CA_id)
{
    CustomerAgent_ID = CA_id;
}

void CustomerAgent::displayCustomerAgentDetails()
{
    cout << "Customer Agent ID : " << CustomerAgent_ID << endl;
}

void CustomerAgent::setQuestions(Question* Question)
{
    Ques = Question;
    Ques->displayQandADetails();
}

string CustomerAgent::answerQuestions()
{

}

void CustomerAgent::updateUserprofile()
{

}

CustomerAgent::~CustomerAgent()
{
    delete Ques;

    cout << "Question deleted!" << endl;
}