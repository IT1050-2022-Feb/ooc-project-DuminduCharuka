#include "system.h"

void System::setSystem(int u){
  userID=u;
  
}
void System::setupdateDetails(int up){
  update=up;
}
void System::setvalidateDetails(int vd){
  vdetail=vd;
}
void System::setvalidatePayment(int vp){
  vpayment=vp;
}
void System::setdisplayApplication(int da){
  display=da;
}


int System::getSystem(){
  return userID;
  
}
int System::getupdateDetails(){
   return update;   
}
int System::getvalidateDetails(){
   return vdetail;
}
int System::getvalidatePayment(){
   return vpayment;
}
int System::getdisplayApplication(){
   return display;
}
