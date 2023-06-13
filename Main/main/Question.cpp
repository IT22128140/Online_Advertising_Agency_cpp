#include "Question.h"
#include <iostream>
#include <string>
using namespace std;

Question::Question()
{
	faq_ID = "";
	faq = "";
	QA_ID = "";
	qa = "";
}

Question::Question(string faq_id, string faq_ques, string qa_id, string qa_ques)
{
	faq_ID = faq_id;
	faq = faq_ques;
	QA_ID = qa_id;
	qa = qa_ques;
}

void Question::storeFAQDetails(string faq_ID, string faq)
{

}

void Question::displayFAQDetails()
{
	cout << "FAQ ID : " << faq_ID << endl;
	cout << "FAQ question : " << faq << endl;
}

void Question::addToFAQ(string new_faq)
{
	cout << "Enter the new FAQ ID : ";
	cin >> faq_ID;

	cout << "Enter the new FAQ question : ";
	cin >> faq;
}

void Question::storeQandADetails(string QA_ID, string qa)
{

}

void Question::displayQandADetails()
{
	cout << "Q&A ID : " << QA_ID << endl;
	cout << "Q&A question : " << qa << endl;
}

void Question::addToQandA(string new_qa)
{
	cout << "Enter the new Q&A ID : ";
	cin >> QA_ID;

	cout << "Enter the new Q&A question : ";
	cin >> qa;
}

Question::~Question()
{

}