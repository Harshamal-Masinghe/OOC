#include<iostream>
#include<iomanip>
using namespace std;

class Staff {
protected:
	string staffName;
	int staffContact;
	string staffID;
public:
	Staff(string sName, int sCon, string sID);
	void dispalystaffDetails();
	~Staff();
		
};
