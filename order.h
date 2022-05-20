#include <iostream>
class orders
{
protected:
char order_ID[10] ;
char type [10];
char customer_id[10];
char staff_id [10];
char product_id[10]

public:
order();
order(const char O_ID[],const char type[],const char C_ID[], const char S_ID[],const char P_ID[]);
void setOrderId(const char O_ID);
void setCustomerId(const char C_ID);
void setCustomerName(const char C_NAME);
void setOrderId(const char O_ID[]);
void setCustomerId(const char C_ID[]);
void setCustomerName(const char C_NAME[]);
char getOrderId();
char getCustomerId();
char getCustomerName();
void DisplayOrderDetails();
~Order();

};