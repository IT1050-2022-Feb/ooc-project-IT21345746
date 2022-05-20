#include<iostream>
#include"Customer.h"

using namespace std;

Customer::Customer()
{
   customer_id[]="";
   name[]="";
   telephone="";
   nic_no[]="";
   email[]="";
   address[]="";
}

Customer::Customer(char C_id[],char C_name[],int tp,char nic[],char C_mail[],char C_address[])
{
  customer_id[]=C_id;
   name[]=C_name;
   telephone=tp;
   nic_no[]=nic;
   email[]=C_mail;
   address[]=C_address;
}

void Customer:: Register()
{
  
}
void Customer::Login()
{
  
}
void Customer:: Upadate()
{
  
}
void Customer::Search()
{
  
}  
void Customer::ViewPurchaseHistory()
{
  
} 
void Customer::CheckDeliveryStatus()
{
  
}  
void Customer::UpdatePaymentMethod()
{
  
}
void Customer::displayCustomerDetails()
{
  
}

