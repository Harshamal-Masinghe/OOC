#include "Patient.h"

Patient::Patient(string pID, string pName, string pAddress, int pContactNo, string pUserName, string pPassword, string pEmail)
    : RegisteredUser(pName, pAddress, pContactNo, pUserName, pPassword, pEmail), Guest(pEmail)
{
    patientID = pID;
}

void Patient::displayPatientDetails()
{
    cout << "Patient ID: " << patientID << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Contact No: " << contactNo << endl;
    cout << "Username: " << userName << endl;
    cout << "Password: " << password << endl;
    cout << "Email: " << email << endl;
}


Patient::~Patient()
{
}
