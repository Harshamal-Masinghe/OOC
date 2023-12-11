#include "Vaccine.h"

Vaccine::Vaccine(string vID, string vName, string vManu, float vPrice)
{
	vaccineID = vID;
	vaccineName = vName;
	manufacture = vManu;
	price = vPrice;
}

void Vaccine::displayVaccineDetails()
{
    cout << "Vaccine ID: " << vaccineID << endl;
    cout << "Vaccine Name: " << vaccineName << endl;
    cout << "Manufacturer: " << manufacture << endl;
    cout << "Price: " << price << endl;
}

void Vaccine::addVaccine(string vID, string vName, string vManu, float vPrice)
{
    vaccineID = vID;
    vaccineName = vName;
    manufacture = vManu;
    price = vPrice;
    cout << "Vaccine added successfully!" << endl;
}

void Vaccine::removeVaccine()
{
    vaccineID = "";
    vaccineName = "";
    manufacture = "";
    price = 0.0;
    cout << "Vaccine removed successfully!" << endl;
}

void Vaccine::updateVaccine(string vID, string vName, string vManu, float vPrice)
{
    vaccineID = vID;
    vaccineName = vName;
    manufacture = vManu;
    price = vPrice;
    cout << "Vaccine updated successfully!" << endl;
}


Vaccine::~Vaccine()
{
}
