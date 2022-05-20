#include "GuestUser.h"
class RegisteredUser :public GuestUser
{
	projected:
		char CustUsername[20];
		char CustPassword[20];
		
	public:
		RegisteredUser();
		RegisteredUser(const char gCustUserName[] , const char gCustPassword[], int gCustId[], gCustName[] , const char gCustAddress[], const char gCustEmail[], const char gCustConNo[]);
		void displayDetails();
		void login();
		void logout();
		char checkLoginDetails();
		~RegisteredUser();
}
