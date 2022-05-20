#include "order.h"
#include "stdafx.h"
#include <cstring>
using namespace std;


Order::Order()
{
  strcpy (order_ID, "")
  strcpy (type, "")
  strcpy (customer_id, "")
  strcpy (staff_id, "") 
  strcpy (product_id, "")
}

Order::Order (const char O_ID[],const char type[],const char C_ID[], const char S_ID[],const char P_ID[]);
{
  strcpy (order_ID, "")
  strcpy (type, "")
  strcpy (customer_id, "")
  strcpy (staff_id, "") 
  strcpy (product_id, "")
}

void Order::setOrderId(const char O_ID)
{
  
}

  void Order::setCustomerName(const char C_NAME)
  {
    
  }
void Order::setOrderId(const char O_ID[])
  {
    
  }
void Order:: setCustomerId(const char C_ID[])
  {
    
  }
void setCustomerName(const char C_NAME[])
  {
    
  }
char getOrderId()
  {
    
  }
char getCustomerId()
  {
    
  }
char getCustomerName()
  {
    
  }
void DisplayOrderDetails()
  {
    
  }
 Order::~Order()
{
  cout << "Delete Order" << endl;
}