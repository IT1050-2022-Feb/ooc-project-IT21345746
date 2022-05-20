include namespace std;

#include<iostream>
class product{

private:
  char product_ID[10];
  char product_code[10];
  char name[20];
  char category[20];
  double price[10];
  char staff_ID[10];
  char customer_ID[10];


public:
  product();
  product(const char P_ID[], const char P_code[], const 
  char P_name[], const char P_category[], double P_price, 
  const char C_ID, const char S_ID);

  void setProductID(const char P_ID);
  void setProductCode(const char P_code);
  void setProductName(const char P_name);
  void setProductCategory(const char P_category);
  void setProductPrice(double P_price);
  void setStaffId(char S_ID);
  void setCustomerID(char C_ID);
  char getProductID();
  char getProductCode();
  char getProductName();
  double getProductPrice();
  void displayProductDetails();
  ~product();
};