#include"appointment.h"
#include<iostream>
#include<string>
using namespace std;

appointment::appointment
{
  app_id="";
  date="";
  time="";
  customer_id[]="";
}

appointment::appointment(int a_id,a_date:date,a_time:time,char C_id[])
{
  app_id=a_id;
  date=a_date;
  time=a_time;
  customer_id[]=C_id;
}

void appointment::setTailor(char tailor)
{
  Tailor=tailor;
}

float appointment::getDateTime()
{
  return DateTime;
}

void appointment::setappointment(char app_id)
{
  appointment=app_id[];
}

void appointment::displayAppointment()
{
  
}
  
~appointment()
{
  
}

