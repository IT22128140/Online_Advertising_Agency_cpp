#pragma once
#include<string>
using namespace std;

class Feedback
{
private:
	string Feedb_id;
	string description;
	int rate;
public:
	Feedback();
	Feedback(string f_id, string f_des, int frate);
	void showFeed();
	~Feedback();
};
