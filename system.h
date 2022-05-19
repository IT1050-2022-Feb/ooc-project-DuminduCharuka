class System{
  private:
    int DOB;
    int userID;
    char gender;
    int update,vdetail,vpayment,display;
    
  public:
    void setSystem( int u);
    void setupdateDetails(int up);
    void setvalidateDetails(int vd);
    void setvalidatePayment(int vp);
    void setdisplayApplication(int da);

    int getSystem();
    int getupdateDetails();
    int getvalidateDetails();
    int getvalidatePayment();
    int getdisplayApplication();
    
};
