#include "payment.h"
#include<cstring>
#include<iostream>
using namespace std;





payment::payment()
{

}



payment::payment(const char p_id[], double PAmount, double dis, const char payMethod[], const char S_id[])
{
}




void payment::setpay_ID(const char p_id[])
{
}



void payment::setAmount(double pAmount)
{
}



void payment::setMethod(const char payMethod)
{
}



void payment::setstaff_id(const char S_id[])
{
}



char payment::pay_ID()
{
return 0;
}



char payment::Method()
{
return 0;
}



char payment::staff_id()
{
return 0;
}



char payment::customer_id()
{
return 0;
}




void payment::displayPaymentDetails()
{
}



payment::~payment()
{
cout << "Delete Payment" << endl;
}