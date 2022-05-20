#include<string>
#include<iostream>
using namespace std;

class delivery {

private:

char deliCode[];
date date;
time time;
char order_id[];
char staff_id;
char customer_id[];
int product_id;

public
delivery();
delivery(char d_code[],date:d_date,time:d_time:,char s_id[],int p_id)

void identifyItems();
void checkRreceiver();
void updateDeliveryInfo();
~delivery();
}