#include<iostream>
#include"Staff.h"

using namespace std;

Staff::Staff()
{
   staff_id[]="";
   name[]="";
   email[]="";
   customer_id[]=""
}

Staff::Staff(char S_id[],char S_name[],char S_mail[],char C_id[])
{
  staff_id[]=S_id;
   name[]=S_name;
   email[]="S_mail";
   customer_id[]="C_id";
}

void Staff::displayStaffInfo()
{
  
}
void Staff::manageWebsite()
{
  
}
Staff::~Staff()
{

}

