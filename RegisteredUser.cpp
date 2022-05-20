//RegisteredUser.cpp
#include "RegisteredUser.h"
#include<cstring>

RegisteredUser::RegisteredUser(){
	strcpy(CustUsername,"");
	strcpy(CustPassword,"");
}

RegisteredUser::RegisteredUser(const char gCustUserName[] , const char gCustPassword[], int gCustId[], 
gCustName[] , const char gCustAddress[], const char gCustEmail[], const char gCustConNo[]): GuestUser(gCustName,gCustAddress,gCustEmail,CustConNo){
	strcpy(CustUsername,gCustUserName);
	strcpy(CustPassword,gCustPassword);
}

void RegisteredUser::displayDetails(){
	
}

void RegisteredUser::login(){
	
}
void RegisteredUser::logout(){
	
}
void RegisteredUser::checkLoginDetails(){
	return 0;
}
RegisteredUser::~RegisteredUser(){
	
}
