using namespace std;

#include<iostream>

class Delivery_Guy{

private:
  char DeliveryGuy_ID[10];
  char DeliveryGuy_email[10];

public:
  Delivery_Guy();
  Delivery_Guy(const char Dlvg_ID[], const char Dlvg_email[]);

  void setDeliveryGuyID(const char Dlvg_ID);
  void setDeliveryGuyEmail(const char Dlvg_email);
  
  char getDeliveryGuyID();
  char getDeliveryGuyEmail();
  void displayDeliveryGuyDetails();
  ~Delivery_Guy();
};