#pragma once
#include <string>
#include "User.h"
#include "Question.h"
using namespace std;

class CustomerAgent : public User
{
private:
    Question* Ques;
    string CustomerAgent_ID;

public:
    CustomerAgent();
    CustomerAgent(string CA_id);
    void displayCustomerAgentDetails();
    void setQuestions(Question* Question);
    string answerQuestions();
    void updateUserprofile();
    ~CustomerAgent();
};