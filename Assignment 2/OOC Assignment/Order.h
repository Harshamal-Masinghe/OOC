#include<iostream>
#include<iomanip>
using namespace std;

class Order {
private:
	string orderID;
public:
	void setOrder(string oID);
	void manageOrders();
	void displayOrderDetails();
};
