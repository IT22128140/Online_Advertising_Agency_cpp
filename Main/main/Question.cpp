#include "Question.h"
#include <iostream>
#include <string>
using namespace std;

Question::Question()
{
	QA_ID = "";
	qa = "";
}

Question::Question(string qa_id, string qa_ques)
{
	QA_ID = qa_id;
	qa = qa_ques;
}

void Question::displayQandADetails()
{
	cout << "Q&A ID : " << QA_ID << endl;
	cout << "Q&A question : " << qa << endl;
}

void Question::addToQandA()
{
	cout << "Enter the new Q&A ID : ";
	cin >> QA_ID;

	cout << "Enter the new Q&A question : ";
	cin >> qa;
}

Question::~Question()
{
}