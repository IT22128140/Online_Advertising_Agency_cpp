#pragma once
#include<string>
#include "User.h"
#include "Question.h"
#include "Member.h"

class CustomerAgent : public User
{
private:
	string CustomerAgent_ID;

public:
	CustomerAgent();
	CustomerAgent(string CA_name, string CA_contactNumber, string CA_email, string CA_username, string CA_password, string CA_id);
	void displayCustomerAgentDetails();
	void takeQuestions(string Question_ID[], string question[]);
	string answerQuestions();
	void updateUserprofile();
	~CustomerAgent();
};

