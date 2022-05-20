#include "Payment.h"

Payment::Payment (int ppid , int pregid ,  int peid, char pmode[] , float ptotal){
    paymentId = ppid;
    registerdCustomerId = pregid;
    execId = peid;
    paymentMode = pmode;
    totalPayment = ptotal; 
}

void Payment::paymentDetails() {

}

void Payment::paymentStatus(){

}

void Payment::verifyStatus(){

}

PaymentCash::PaymentCash(int prefNo) {
    refNo = prefNo; 
}

PaymentCard::PaymentCard(int pNo , int pexpdate , int pcvc) {
    cardNo = pNo;
    expDate = pexpdate;
    cvc = pcvc; 
}


