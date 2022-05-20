#include "items.h"
class GuestUser{
	protected:
		char CustName[50];
		char CustAddress[50];
		char CustEmail[20];
		char CustConNo[10];
		
	public:
		GuestUser();
		GuestUser(const char gCustName[] , const char gCustAddress[], const char gCustEmail[], const char gCustConNo[]);
		void RegisteredUser();
		virtual void displayDetails();
		~GuestUser();
};
