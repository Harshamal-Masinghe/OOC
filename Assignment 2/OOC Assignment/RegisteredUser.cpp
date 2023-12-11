#include "RegisteredUser.h"

RegisteredUser::RegisteredUser(string rName, string rAddress, int rContactNo, string rUserName, string rPassword, string rEmail) : Guest(rEmail) {
    name = rName;
    address = rAddress;
    contactNo = rContactNo;
    userName = rUserName;
    password = rPassword;
}

void RegisteredUser::addUserAccount(string rName, string rAddress, int rContactNo, string rEmail) {
    name = rName;
    address = rAddress;
    contactNo = rContactNo;
}

void RegisteredUser::removeUserAccount(string rName, string rAddress, int rContactNo, string rUserName, string rPassword, string rEmail) {
    name = rName;
    address = rAddress;
    contactNo = rContactNo;
    userName = rUserName;
    password = rPassword;
}

void RegisteredUser::updateuserAccount(string rName, string rAddress, int rContactNo, string rEmail) {
    name = rName;
    address = rAddress;
    contactNo = rContactNo;
}

RegisteredUser::~RegisteredUser()
{
}