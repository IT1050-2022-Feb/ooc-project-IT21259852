 #include "RegisteredUser.h"
class Payment  {
    protected:
        int paymentId;
        int registerdCustomerId; 
        int execId;
        char paymentMode[40];
        float totalPayment;

    public:
        Payment ();
        Payment (int ppid , int pregId ,  int peid, char pmode[] , float ptotal);
        void paymentDetails ();
        void paymentStatus(); 
        void verifyStatus (); 
};


class PaymentCash:public Payment {
    protected:
    int refNo;

    public:
    PaymentCash();
    PaymentCash(int prefNo);
    
};


class PaymentCard:public Payment {
   protected:
   int cardNo;
   int expDate;
   int cvc; 
  

   public:
    PaymentCard(); 
    PaymentCard (int pNo , int pexpdate , int pcvc);


};


class PaymentVisa:public Payment , public PaymentCard {

    
};

class PaymentMaster:public Payment , public PaymentCard {
    
    
};






        
