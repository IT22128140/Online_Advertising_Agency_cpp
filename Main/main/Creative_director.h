#pragma once
#include<string>
#include"Member.h"
#include"User.h"

using namespace std;

class Creative_director : public User
{
private:
	string CDirector_ID;
public:
	Creative_director();
	Creative_director(string CD_ID);
	void display();
	void FInalizeProject();
	void ConductCMeeting();
	void EnsureBrandIdentity();
	~Creative_director();
};
