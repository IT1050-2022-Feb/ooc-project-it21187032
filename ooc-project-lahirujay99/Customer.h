#ifndef LASTASSIGN_CUSTOMER_H
#define LASTASSIGN_CUSTOMER_H


#include "User.h"
#include "FeedBack.h"

class Customer : public User {
protected:
    int customerID;
    FeedBack *comment[1];
public:
    Customer();
    Customer(char uName[],int cID,int tAge,char tMail[],char tAddress[],char tPhone[],char pass[]);
    Customer(int fID,char commentT[]);
    void displayFeedBack();
    void displayDetailsCustomer();
    ~Customer();
};


#endif //LASTASSIGN_CUSTOMER_H