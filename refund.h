#include "RegisteredUser.h"
#include "Payment.h"

class Refund {
    protected:
        int registerdCustomerId; 
        int paymentId;
        int refundId;
        float totalRefund;


    public: 
        Refund();
        Refund(int ppregid, int ppayid , int prefundid , float ptotalrefund);
        void refundStatus();
};

