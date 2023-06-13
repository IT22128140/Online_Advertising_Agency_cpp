#pragma once
#include <string>

class Question
{
private:
	string faq_ID;
	string faq;

protected:
	string QA_ID;
	string qa;

public:
	Question();
	Question(string faq_id, string faq_ques, string qa_id, string qa_ques);
	void storeFAQDetails(string faq_ID, string faq);
	void displayFAQDetails();
	void addToFAQ(string new_faq);
	void storeQandADetails(string QA_ID, string qa);
	void displayQandADetails();
	void addToQandA(string new_qa);
	~Question();
};
