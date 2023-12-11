// IT22586452 - I D Kulasinghe
#include"Guest.h"

class RegisteredUser : public Guest {
protected:
    string name;
    string address;
    int contactNo;
    string userName;
    string password;
public:
    RegisteredUser(string rName, string rAddress, int rContactNo, string rUserName, string rPassword, string rEmail);
    void addUserAccount(string rName, string rAddress, int rContactNo, string rEmail);
    void removeUserAccount(string rName, string rAddress, int rContactNo, string rUserName, string rPassword, string rEmail);
    void updateuserAccount(string rName, string rAddress, int rContactNo, string rEmail);
    ~RegisteredUser();
};
