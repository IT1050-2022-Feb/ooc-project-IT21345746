using namespace std;

class Staff{
private:
  char staff_id[];
  char name[];
  char email[];
  char customer_id[];
public:
  Staff();
  Staff(char S_id[],char S_name[],char S_mail[],char C_id[]);
  void displayStaffInfo();
  void manageWebsite();
  ~Staff();
};

//Derived classes Accountant,Manager,Administrator

class Accountant::public Staff{
  private:
    char ac_name[];
    char mail[];
public:
    Accountant();
    Accountant(char a_name[],char a_mail[]);
    int getPurchaseReq();
    void setPayment();
    ~Accountant();
};

class Manager::public Staff{
  private:
    char manager_id[];
    char mail[];
  public:
    Manager();
    Manager(char m_id[],char m_mail[]);
    ~Manager();
};

class Administrator::public Staff{
  private:
    char admin_id[];
    char name[];
    char email[];
  public:
    Administrator();
    Administrator(char ad_id[],char ad_name[],char ad_mail[]);
    char getProduct();
    void setProduct();
    char getReport();
    void setEvent();
    void Delivery();
    void setAdmin();
    void replyMessage();
    void backupData();
    void setCategory();
    ~Administrator();
  
};
      