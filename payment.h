#pragma once
#include <iostream>
class payment
{
private:
char pay_ID[10];
char Method[20];
double Amount;
char staff_id[20];
char customer_id[20];




public:
payment();
payment(const char p_id[], double PAmount, double dis, const char payMethod[], const char S_id[]);



void setpay_ID(const char p_id[]);
void setAmount(double pAmount);
void setMethod(const char payMethod);
void setstaff_id(const char S_id[]);



char pay_ID();
char Method();
double Amount;
char staff_id();
char customer_id();



void displayPaymentDetails();
~payment();



};