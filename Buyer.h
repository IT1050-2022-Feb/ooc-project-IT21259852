#include "RegisteredUser.h"
#include "items.h"
class Buyer:public RegisteredUser{
	private:
		
	public:
		Buyer();
		Buyer(const char buyuname[],const char buypword[],int buyid, const char buyname[], const char buyaddress[] , const char buymail[], const char buytno[]);
		void login();
		void displayBuyerDetails();
		~Buyer();
};
