#include<iostream>
#include<iomanip>
#include<string>
#include "system.h"

using namespace std;

int main(){
  System s1;
  int ua,di;
  cout<<"input UserID :";
  cin>>ua;
  cout<<"update paiment price :";
  cin>>di;
  s1.setSystem(ua);
  s1.setvalidatePayment(di);
  s1.setvalidateDetails(1);
  cout<<"user ID is :"<<setw(5)<<setfill('0')<<s1.getSystem()<<endl<<"your paiment is :"<< s1.getvalidatePayment()<<endl;

  
  return 0;
}