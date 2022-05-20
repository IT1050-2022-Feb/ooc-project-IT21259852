#include "RegisteredUser.h"
class order
{
private:
  int orderID;
  int customerID;
  int ItemID;
  int quantity;
  char Type[30];
  char Date[10];
  float Totalprice;

public:
  order();
  order(int OrderID, int OrderCid, int OrderItemid, int quantity, char OrderType[], char OrderDate[], float OrderTotalprice);
      
};
