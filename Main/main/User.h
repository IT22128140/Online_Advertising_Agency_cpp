#pragma once
#include <string>
using namespace std;

class User
{
protected:
	string Name;
	string ContactNumber;
	string Email;
	string Username;
	string Password;

public:
	User();
	User(string Name, string ContactNumber, string Email, string Username, string Password);
	void createAccount();
	void addPersonalDetails();
	void acceptTerms_Conditions();
	void login();
	void UpdateDetails();
	~User();
};

