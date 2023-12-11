#include"RegisteredUser.h"

class Supplier : public RegisteredUser {
private:
	string supplierID;
public:
	Supplier(string sID, string sName, string sAddress, int sContactNo, string sUserName, string sPassword, string sEmail) : RegisteredUser(sName, sAddress, sContactNo, sUserName, sPassword), Guest(sEmail);
	void displayPatientDetails();
	~Supplier();
};
