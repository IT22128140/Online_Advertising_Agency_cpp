#pragma once
#include <string>
using namespace std;

class User
{
protected:
	string Name;
	string Email;
	string ContactNumber;
	string Username;
	string Password;

public:
	User();
	User(string Name, string Email, string ContactNumber, string Username, string Password);
	void createAccount();
	void login();
	void UpdateDetails();
	~User();
};
