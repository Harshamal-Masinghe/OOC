#include "Payment.h"

Payment::Payment()
{
	total = 0;
}

Payment::Payment(float pID)
{
	paymentID = pID;
}

void Payment::displayPaymentDetails()
{
	cout << "Payment ID: " << paymentID << endl;
	cout << "Total Amount: " << total << endl;
}

void Payment::makePayment()
{
	cout << "Payment processed successfully!" << endl;
}

float Payment::calcTotal()
{
	return 0.0f;
}

Payment::~Payment()
{
}
