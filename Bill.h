using namespace std;

#include<iostream>
class Bill{

private:
  char bill_Code[10];
  char bill_amount[10];
  date bill_date[10];
  char customer_ID[10];
  char staff_ID[10];

public:
  bill();
  bill(const char b_code[], const char b_amount[], date b_date, const char C_ID, 
  const char S_ID);

  void setBillCode(const char b_code);
  void setBillAmount(const char b_amount);
  void setBillDate(const date b_date);
  void setStaffId(char S_ID);
  void setCustomerID(char C_ID);
  char getBillCode();
  char getBillAmount();
  date getBillDate();
  void displayBilltDetails();
  ~Bill();
};