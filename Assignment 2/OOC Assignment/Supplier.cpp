#include "Supplier.h"

Supplier::Supplier(string sID, string sName, string sAddress, int sContactNo, string sUserName, string sPassword, string sEmail)
{
	supplierID = sID;
}

void Supplier::displayPatientDetails()
{
    cout << "Supplier ID: " << supplierID << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Contact No: " << contactNo << endl;
    cout << "Username: " << userName << endl;
    cout << "Password: " << password << endl;
    cout << "Email: " << email << endl;
}

Supplier::~Supplier()
{
}
