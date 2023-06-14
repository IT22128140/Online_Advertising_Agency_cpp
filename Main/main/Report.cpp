#include "Report.h"
#include<iostream>
#include<string>
using namespace std;

Report::Report()
{
	Report_ID = "";
	Report_Type = "";
	Report_Date = "";
}

Report::Report(string R_reportID, string R_reportTyp, string R_reportDate, order* ordd)
{
	Report_ID = R_reportID;
	Report_Type = R_reportTyp;
	Report_Date = R_reportDate;
	Orde = ordd;
}

void Report::displayReport()
{
	cout << "Report ID : " << Report_ID << endl;
	cout << "Report Type : " << Report_Type << endl;
	cout << "Report Date : " << Report_Date << endl;
	Orde->DisplayOrder();
}

void Report::monthlySalesrep()
{

}

void Report::monthlyAccountingsumrep()
{

}

void Report::membpackagerep()
{

}

void Report::offersrep()
{

}

Report ::~Report()
{

}


