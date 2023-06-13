#pragma once
#include <string>
using namespace std;

class Member
{
private:
	string Meber_ID;
	string company;
	string address;
	string designation;
	string DOB;
public:
	Member();
	Member(string Meber_ID, string company, string address, string designation, string DOB);
	~Member();
};

