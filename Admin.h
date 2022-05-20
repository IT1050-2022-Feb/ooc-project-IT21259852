#include "BackendUsers.h"
class Admin : public BackendUsers {
    private: 
     int  adminId; 
     char email[25]; 
     
        
    public:
        Admin();
        Admin (int padminID , char puserName[] ,char pbackendPw [], char pemail[], char padminPw[]  );
        void addContent();
        void removeContent();
        void addUser();
        void removeUser();
};


