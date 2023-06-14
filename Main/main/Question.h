#pragma once
#include <string>
#include "CustomerAgent.h"
using namespace std;

class Question
{
private:
	string QA_ID;
	string qa;

public:
	Question();
	Question(string qa_id, string qa_ques);
	void displayQandADetails();
	void addToQandA();
	~Question();
};