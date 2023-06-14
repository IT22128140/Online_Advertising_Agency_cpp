#include <iostream>
#include "Member.h"
#include "Manager.h"
#include "Offer.h"
#include "Report.h"
#include "Feedback.h"
#include "Proposal.h"
#include "Order.h"
#include "Creative_director.h"

using namespace std;

int main()
{
	//data inset into Order
	Order* ord = new Order();
	cout << "Details of Order : " << endl;
	ord->DisplayOrder(); //display details of the order
	cout << endl << endl;

	//data insert into offer
	Offer* off = new Offer("OF001", "New Year Offer", "For all the members", 10, "01/01/2021", "31/01/2021");
	cout << "Details of Offer : " << endl;
	off->displayoffers(); //display the details of the offer
	cout << endl << endl;

	//data insert into Package
	Package* pac = new Package();
	cout << "Details of Packages : " << endl;
	pac->displayPackage();	//display details of the packages
	cout << endl << endl;

	//data insert into Payment
	Payment* paymnt = new Payment("PY001", "Credit Card", pac);
	cout << "Details of Payement : " << endl;
	paymnt->calcNetAmount(100000, off); //calculate the net amount to be paid using offers
	paymnt->displayPayment();
	cout << endl << endl;

	//data insert into Report
	Report* rep = new Report("RP001", "Report about month of April sales", "30/04/2023", ord);
	cout << "Details of Report : " << endl;
	rep->displayReport(); //display details of the report
	cout << endl << endl;

	//data insert into manager
	Manager* manage = new Manager("Shenali Perera", "0702671643", "shenalimn001.unique@gmail.com", "Shenali_MN001", "Shenali123*", "MN001", rep);
	cout << "Details of Manager : " << endl;
	manage->displayManager(); //display details of the manager
	cout << endl << endl;

	//data insert into report
	Report* rep = new Report("RP001", "Report about month of April sales", "30/04/2023",ord);
	cout << "Details of Report : " << endl;
	rep->displayReport(); //display details of the report
	cout << endl << endl;

	//data insert into member
	Member* mem = new Member("0001", "ABC", "Colombo", "Manager", "12/10/1998");
	cout << "Details of Member : " << endl;
	mem->displaymember(); //display the details of the member
	cout << endl << endl;

	//data insert to Proposal
	Proposal* prop = new Proposal("P001", "0001", "need great");
	cout << "Details of Proposal : " << endl;
	prop->displayProposal();//display the details of the proposal
	cout << endl;

	//data insert to feedback
	Feedback* feed = new Feedback ("F0001", "Best service",5);
	cout << "Details of Feedback : " << endl;
	feed -> showFeed(); //display feed details
	cout << endl << endl;

	// data insert to Creative_director
	Creative_director* CDirect = new Creative_director("CD001");
	cout << "Detail of creative director: " << endl;
	CDirect->display(); //display details of the creative director
	cout << endl << endl;

}