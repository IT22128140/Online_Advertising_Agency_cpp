
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

Feedback::~Feedback()
{
}
