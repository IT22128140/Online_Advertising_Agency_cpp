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

User::User(string Name, string Email, string ContactNumber, string Username, string Password)
{
    this->Name = Name;
    this->ContactNumber = ContactNumber;
    this->Email = Email;
    this->Username = Username;
    this->Password = Password;
}

void User::createAccount()
{
    cout << "Name: " << Name << endl;
    cout << "Contact Number: " << ContactNumber << endl;
    cout << "Email: " << Email << endl;
    cout << "Creating an account for user: " << Name << endl;
    cout << "Username: " << Username << endl;
    cout << "Password: " << Password << endl;
}

void User::login()
{
    string enteredUsername, enteredPassword;

    cout << "Enter username: ";
    cin >> enteredUsername;

    cout << "Enter password: ";
    cin >> enteredPassword;

    if (enteredUsername == Username && enteredPassword == Password)
    {
        cout << "Login successful!" << endl;
    }
    else
    {
        cout << "Invalid username or password. Login failed!" << endl;
        return;

    }
}

void User::UpdateDetails()
{
    cout << "Updating details for user: " << Name << endl;
    cout << "Enter new email: ";
    cin >> Email;

    cout << "Enter new contact number: ";
    cin >> ContactNumber;

    cout << "Details updated successfully!" << endl;

}

User::~User()
{

}
