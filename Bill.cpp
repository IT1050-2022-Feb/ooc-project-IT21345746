#include<iostream>
#include"bill.h"
#include<cstring>

using namespace std;

product::Bill()

{
  strcpy(bill_code,"")
  strcpy(bill_amount,"")
  strcpy(bill_date,"")
  strcpy(Customer_ID,"")
  strcpy(Staff_ID,"")
  
}
 product::product (const char P_ID[], const char P_code[], const char P_name[], 
 const char P_category[], double P_price, const char S_ID[], const char C_ID[])

{
  strcpy(Product_ID,"")
  strcpy(Product_code,"")
  strcpy(Product_name,"")
  strcpy(Product_category,"")
  strcpy(Product_price,"")
  strcpy(Staff_ID,"")
  strcpy(Customer_ID,"")
  
}

void product::setProduct_ID(const char P_ID)
{
  
}

void product::setProduct_code(const char P_code)
{
  
}

void product::setProduct_name(const char P_name)
{
  
}

void product::setProduct_category(const char P_category)
{
  
}

void product::setProduct_price(double P_price)
{
  
}

void product::setStaff_ID(const char S_ID)
{
  
}

void product::setCustomer_ID(const char C_ID)
{
  
}

char getProductID()
{
  
}

char getProductCode()
{
  
}

char getProductName()
{
  
}

char getProductCategory()
{
  
}

char getProductPrice()
{
  
}
 void DisplayProductDetails()
{
  
}

product::~product()
{
  cout<<"DeleteProduct"<<endl;
}