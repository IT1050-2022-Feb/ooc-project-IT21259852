#include "order.h"

Order::Order(){
  orderID=0;
  customerID=0;
  ItemID=0;
  quantity=0;
  Totalprice=0;
  strcpy(Type,"");
  strcpy(Date,"");
}
Order::Order(int OrderID,int OrderCid, int OrderItemid, int quantity, char OrderType[], char Orderdate[], float OrderTotalprice);
{
        orderID=OrderID;
        customerID=OrderCid;
        ItemID=OrderItemid;
        quantity=quantity;
        Totalprice=OrderTotalprice;
        strcpy(Type,OrderType);
        strcpy(Date,Orderdate);
  }
void Order::ObtainOrder(){
  
}
void Order::CancelOrder{
  
}
