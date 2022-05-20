#ifndef LASTASSIGN_PACKAGE_H
#define LASTASSIGN_PACKAGE_H

#include "Payment.h"
#include "FeedBack.h"

class Package {
private:
    char packageName[50];
    int packageID;
    int packageDuration;
    int packagePrice;
    Payment *Pay[1];
    FeedBack *feed[1];
public:
    Package();
    Package(char pName[],int pID,int pDuration,int pPrice);
    Package(char bName[],char cardNumber[],int payID,int amountT);
    void displayPayment();
    void displayPackageDetails();
    void addFeedBack(FeedBack *feedB);
    void displayFeed();
    ~Package();
};


#endif //LASTASSIGN_PACKAGE_H