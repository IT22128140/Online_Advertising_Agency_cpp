#include <iostream>
#include "Member.h"
#include "Manager.h"
#include "Administrator.h"
#include "Offer.h"
#include "Report.h"
#include "Feedback.h"
#include "Proposal.h"
#include "Order.h"
#include "Creative_director.h"

using namespace std;

int main()
{
	//data insert into manager
	Manager* manage = new Manager("Shenali", "0702671643", "shenalimn001.unique@gmail.com", "Shenali_MN001", "Shenali123*", "MN001");
	cout << "Details of Manager : " << endl;
	manage->displayManager(); //display the details of the manager
	cout << endl << endl;

	//data insert into report
	Report* rep = new Report("RP001", "Report about month of april sales", "30/04/2023");
	cout << "Details of Report : " << endl;
	rep->displayReport(); //display the details of the report
	cout << endl << endl;

	Payment* paymnt = new Payment()





		Administrator * admin = new Administrator("AD255");
	cout << "Details of Admin" << endl;
	











	//data insert to Proposal
	Member* prop;
	prop = new Member;
	prop->buyProposal("P001", "0001", "need great");
	prop->displayProposal();
	cout << endl;



	//data insert to feedback
	Feedback* feed = new Feedback ("F0001", "Best service",5);
	cout << "Details of Feedback : " << endl;
	feed -> showFeed(); //display feed details
	cout << endl << endl;


	// data insert to Order
	Order* odr = new Order("Od003", "12/10/2021");
	cout << "Details of Order: " << endl;
	odr -> DisplayOrder();
	cout << endl << endl;

	// data insert to Creative_director

	Creative_director* CDirect = new Creative_director("CD001");
	cout << "Detail of creative director: " << endl;
	CDirect->display();
	cout << endl << endl;

}