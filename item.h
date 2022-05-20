#include<iostream>
#include<string>
#define SIZE 5
using namespace std;

class Item
{
private:
string ItemID;
float price;
Cart * Car;

public:
Item(string pItemID,float pPrice,Cart *pCar);
void displayOut();
};
