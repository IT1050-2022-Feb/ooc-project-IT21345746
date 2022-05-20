#include "stdafx.h"
#include "price.h"
#include<cstring>
#include<iostream>
using namespace std;
price::price()
{
Price = 0.0;
Discount = 0.0;
}
price::price(double P_price, int dis)
{
Price = P_price;
Discount = dis;
}
void price::setP_price(double Pprice)
{
}
void price::setDiscount(int dis)
{
}
double price::getprice()
{
return 0.0;
}
int price::getDiscount()
{
return 0;
}
price::~price()
{
cout << "Delete Payment" << endl;
}