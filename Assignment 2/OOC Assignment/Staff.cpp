#include "Staff.h"

Staff::Staff(string sName, int sCon, string sID) {
	staffName = sName;
	staffContact = sCon;
	staffID = sID;
}

void Staff::dispalystaffDetails() {
	cout << "Staff Name: " << staffName << endl;
	cout << "Contact: " << staffContact << endl;
	cout << "Staff ID: " << staffID << endl;
}

Staff::~Staff() {

}
