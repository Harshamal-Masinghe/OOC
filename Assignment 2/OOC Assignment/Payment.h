#include<iostream>
#include<iomanip>
using namespace std;

class Payment
{
private:
	string paymentID;
	float total;

public:
	Payment();
	Payment(float pID);
	void displayPaymentDetails();
	void makePayment();
	float calcTotal();
	~Payment();
};
