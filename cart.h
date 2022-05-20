#include<string>
#include<iostream>
using namespace std;

class cart {

private:

char cart_id;
int quantity;
char staff_id;
char customer_id;

public:

cart();
cart(char ca_id[],int q,char s_id[],char c_id[]);
char getitems();
void setitems();
void setqunatity();
void  displayitems();
void displayCartDeatails();
void checkOut();
void calUnitPrice();
void calTotalPrice();
~cart();

}