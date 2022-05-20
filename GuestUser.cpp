//GuestUser.cpp

#include "GuestUser.h"
#include<cstring>

GuestUser::GuestUser()
{
	strcpy(CustName, "");
	strcpy(CustAddress, "");
	strcpy(CustEmail, "");
	strcpy(CustConNo, "0000000000");
}

GuestUser::GuestUser(const char gCustName[] , const char gCustAddress[], const char gCustEmail[], const char CustConNo[]);
{
	strcpy(CustName, gCustName);
	strcpy(CustAddress, pCustAddress);
	strcpy(CustEmail, gCustEmail);
	strcpy(CustConNo, gCustConNo);
}

void GuestUser::RegisteredUser(){
	
}

void GuestUser::displayDetails(){
	
}

GuestUser::~GuestUser(){
	//Destructor
}


