#include<string>
#include<iostream>
using namespace std;

class appointment{

private:

int app_id;
date date;
time time;
char customer_id ;

public:
appointment();
appointment(int a_id,a_date:date,a_time:time,char C_id[]);
void setTailor();
float getDateTime();
void setAppointment();
void dispiayAppointment();
~appointment();
}