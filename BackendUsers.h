#include "GuestUser.h"
class BackendUsers {
    protected:
        char username[8];
        char backendPw [20];
       

    public:
        BackendUsers (char pusername[],char backendPw []);
        void viewItems ();
        void viewSerivces (); 
        void BackEndLogin(); 
       
};