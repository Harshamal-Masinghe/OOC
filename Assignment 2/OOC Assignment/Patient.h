// IT22577306 - H I H P MASINGHE
#include"RegisteredUser.h"

class Patient : public RegisteredUser {
private:
	string patientID;
public:
	Patient(string pID, string pName, string pAddress, int pContactNo, string pUserName, string pPassword, string pEmail) : RegisteredUser(pName, pAddress, pContactNo, pUserName, pPassword),Guest(pEmail);
	void displayPatientDetails();
	~Patient();
};
