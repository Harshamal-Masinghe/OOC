
#include"Staff.h"


class Doctor : public Staff {
private:
	string doctorID;
public:
	Doctor(string dName, int dCon, string dID) : Staff(dName, dCon);
	~Doctor();
};
