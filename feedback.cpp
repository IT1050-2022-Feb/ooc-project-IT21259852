#include "feedback.h"

Feedback::Feedback(){
  feedbackID=0;
  customerID=0;
  orderID=0;
  sellerID=0;
  strcpy(customerusername,"");
}
Feedback::Feedback(int fFeedbackID, int fCustID, int fOrderID, int fSellerID, string fCustUsername[]);
{
  feedbackID=fFeedbackID;
  customerID=fCustID;
  orderID=fOrderID;
  sellerID=fSellerID;
  strcpy(customerusername,fCustUsername);
}
void Feedback::displayFeedback(){
  
}
