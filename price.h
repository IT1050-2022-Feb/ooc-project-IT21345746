#pragma once
#include<iostream>
class price
{
private:
double Price;
int Discount;
public:
price();
price(double P_price, int dis);
void setP_price(double Pprice);
void setDiscount(int dis);
double getprice();
int getDiscount();
~price();
};