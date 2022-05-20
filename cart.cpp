#include Cart.h

Cart::Cart(string pCartID)
{
  CartID= pCartID;
  quantity=0;
}

void Cart::addItem(Item* 0)
{
  if(quantity<SIZE)
    item[quantity]=0;
  quantity++;
}

void Cart::displayCart()
{
  cout<<"Cart ID :" <<CartID<<endl;
  cout<<"Quantity :"<<quantity<<endl;
  for(int i =0;i<quantity;i++)
    item[i]->displayOut();
}
