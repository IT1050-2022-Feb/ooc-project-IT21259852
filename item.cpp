#include Item.h


Item::Item(string pItemID,float pPrice,Cart* pCar)
{
  ItemID=  PItemID;
  price=pPrice;
  Car=pCar;
  Car->addItem(this);
}

void Item::displayOut()
{
  cout<<"ItemID :"<<ItemID<<endl;
  coun<<"price :" <<price <<endl;
}

