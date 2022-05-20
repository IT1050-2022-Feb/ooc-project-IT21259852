#include "Admin.h" 
#include "OtherUsers.h"

Admin::Admin  (int padminID , char  puserName[] ,  char pemail[] , char padminPw[]) : OnlineUser ( username ) {

    adminId = padminID; 
    username[8]  = puserName [8];
    email [25] = pemail[25];
    adminPw [12] = padminPw [12];

}

void Admin:: addContent(){

}

void Admin:: removeContent(){

}

void Admin:: addUser(){

}

void Admin:: removeUser(){

}
    