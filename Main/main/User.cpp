#include "User.h"
#include<iostream>
#include<string>
using namespace std;

User::User()
{
    Name = "";
    ContactNumber = "";
    Email = "";
    Username = "";
    Password = "";
}

User::User(string uName, string uContact, string uEmail, string username, string pass)
{
    this->Name = uName;
    this->ContactNumber = uContact;
    this->Email = uEmail;
    this->Username = username;
    this->Password = pass;
}

void User::displayUser()
{
    cout << "Name: " << Name << endl;
    cout << "Contact Number: " << ContactNumber << endl;
    cout << "Email: " << Email << endl;
    cout << "Creating an account for user: " << Name << endl;
    cout << "Username: " << Username << endl;
    cout << "Password: " << Password << endl;
}
void User::createAccount()
{
    
}

void User::addPersonalDetails()
{

}
void User::acceptTerms_Conditions()
{

}

void User::login()
{
    
}

void User::UpdateDetails()
{
    
}

User::~User()
{

}
