#include<string>
using namespace std;

class Customer{
private:
  char customer_id[];
  char name[];
  int telephone;
  char nic_no[];
  char email[];
  char address[];

public:
  Customer();
  Customer(char C_id[],char C_name[],int tp,char nic[],char C_mail[],char C_address[])
  void Register();
  void Login();
  void Upadate();
  void Search();
  void ViewPurchaseHistory();
  void CheckDeliveryStatus();
  void UpdatePaymentMethod();
  void displayCustomerDetails();
  ~Customer();
  
};