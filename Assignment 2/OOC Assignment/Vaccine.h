#include<iostream>
#include<iomanip>
using namespace std;

class Vaccine
{
private:
	string vaccineID;
	string vaccineName;
	string manufacture;
	float price;
public:
	Vaccine(string vID, string vName, string vManu, float vPrice);
	void displayVaccineDetails();
	void addVaccine(string vID, string vName, string vManu, float vPrice);
	void removeVaccine();
	void updateVaccine(string vID, string vName, string vManu, float vPrice);
	~Vaccine();
};
