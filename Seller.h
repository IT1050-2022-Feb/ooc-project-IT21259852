#include "RegisteredCustomer.h"
class Seller:public RegisteredUser{
	private:
		
	public:
		Seller();
		Seller(const char selluname[],const char sellpword[],int sellid, const char sellname[], const char selladdress[] , const char sellmail[], const char selltno[]);
		void addSellingItems();
		void login();
		void displaySellerDetails();
		~Seller();
};
