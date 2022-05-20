using namespace std;
#include<cstring>

class Measurement{
private:
  char measurement_code[];
  string type;
  string neck;
  string chest;
  string waist;
  string hip;
  string seat;
  string shoulder_width;
  string arm_length;
  string biceps;
  string wrist;
  string inseam;
  string thigh; 
  string calf;
  char staff_id[];
  char customer_id[];
public:
  Measurement();
  Measurement(char m_code[]),string t,string n,string c,string w,string h,string s,string s_w,string a_l,string b,string _wr,string i,string th,string _ca,char S_id[],char C_id[]) ;
  string getMeasurement();
  void setMeasurement(string n,string c,string w,string h,string s,string s_w,string a_i,string b,string _wr,string i,string t,string _ca);
  void displayMeasurement();
  ~Measurement();
  
};