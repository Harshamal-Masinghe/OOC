#include "Doctor.h"

Doctor::Doctor(string dName, int dCon, string dID) : Staff(dName, dCon, dID) {
    doctorID = dID;
}

Doctor::~Doctor()
{
}
