#include<iostream>
#include<cstring>
#include "Measurement.h"

using namespace std;

Measurement::Measurement()
{
   measurement_code[]="";
   type="";
   neck="";
   chest="";
   waist="";
   hip="";
   seat="";
   shoulder_width="";
   arm_length="";
   biceps="";
   wrist="";
   inseam="";
   thigh=""; 
   calf="";
   staff_id[]="";
   customer_id[]="";
}

Measurement::Measurement(char m_code[]),string t,string n,string c,string w,string h,string s,string s_w,string a_l,string b,string _wr,string i,string th,string _ca,char S_id[],char C_id[])
{
   measurement_code[]=M_code;
   type=t;
   neck=n;
   chest=c;
   waist=w;
   hip=h;
   seat=s;
   shoulder_width=s_w;
   arm_length=a_l;
   biceps=b;
   wrist=_wr;
   inseam=i;
   thigh=th; 
   calf=_ca;
   staff_id[]=S_id;
   customer_id[]=C_id;
}

 void Measurement::setMeasurement(string n,string c,string w,string h,string s,string s_w,string a_i,string b,string _wr,string i,string t,string _ca)
{
  type=t;
   neck=n;
   chest=c;
   waist=w;
   hip=h;
   seat=s;
   shoulder_width=s_w;
   arm_length=a_l;
   biceps=b;
   wrist=_wr;
   inseam=i;
   thigh=th; 
   calf=_ca;
  
}
  void Measurement::displayMeasurement()
{
  return 0;
}

  ~Measurement()
{
  
}