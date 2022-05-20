#include<iostream>
#include"bill.h"
#include<cstring>

using namespace std;

Bill::Bill()

{
  strcpy(bill_code,"")
  strcpy(bill_amount,"")
  strcpy(bill_date,"")
  strcpy(Customer_ID,"")
  strcpy(Staff_ID,"")
  
}
 bill::bill(const char b_code[], double b_amount[], date 
 b_date,const char C_ID[],const char S_ID[])

{
  strcpy(bill_code,"")
  strcpy(bill_amount,"")
  strcpy(bill_date,"")
  strcpy(Customer_ID,"")
  strcpy(Staff_ID,"")
  
}

void bill::setBill_code(const char b_code)
{
  
}

void bill::setBill_amount(double b_amount)
{
  
}

void bill::setBill_date(date b_date)
{
  
}

void product::setCustomer_ID(const char C_ID)
{
  
}

void product::setStaff_ID(const char S_ID)
{
  
}

char getBillCode()
{
  
}

double getBillAmount()
{
  
}

date getBillDate()
{
  
}

void DisplayBillDetails()
{
  
}

Bill::~Bill()
{
  cout<<"DeleteBill"<<endl;
}