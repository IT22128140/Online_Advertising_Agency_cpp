
#include "Feedback.h"
#include<string>
#include<iostream>
using namespace std;

Feedback::Feedback()
{
	Feedb_id = "0";
	description = "0";
	rate = 0;
}

Feedback::Feedback(string f_id, string f_des, int f_rate)
{
	Feedb_id = f_id;
	description = f_des;
	rate = f_rate;
}

void Feedback::showFeed()
{
	cout << description << rate << endl;
}
void Feedback::addFeed()
{
	cout << "Enter Feedback ID: ";
	cin >> Feedb_id;
	cout << "Enter Feedback Description: ";
	cin >> description;
	cout << "Enter Feedback Rate: ";
	cin >> rate;
}

Feedback::~Feedback()
{
}
