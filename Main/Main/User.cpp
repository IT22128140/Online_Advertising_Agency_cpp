#include "User.h"
#include<iostream>
#include<string>
using namespace std;

User::User()
{
    Name, "";
    ContactNumber = "";
    Email = "";
    Username = "";
    Password = "";
}
User::User(string Name, string ContactNumber, string Email, string Username, string Password)
{
    Name = Name;
    ContactNumber = ContactNumber;
    Email = Email;
    Username = Username;
    Password = Password;
}
void User::createAccount()
{
    cout << "Name: " << Name << endl;
    cout << "Contact Number: " << ContactNumber << endl;
    cout << "Email: " << Email << std::endl;
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
        return;
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
    getline(cin, Email);

    cout << "Enter new contact number: ";
    getline(cin, ContactNumber);

    cout << "Details updated successfully!" << endl;
}