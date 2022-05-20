#ifndef LASTASSIGN_SAFARIOWNER_H
#define LASTASSIGN_SAFARIOWNER_H


#include "User.h"
#include "Package.h"

class SafariOwner : public User{
protected:
    int safariOwnerID;
    Package *package[1];
public:
    SafariOwner();
    SafariOwner(char uName[],int sOwnerID,int tAge,char tMail[],char tAddress[],char tPhone[],char pass[]);
    SafariOwner(char pName[],int pID,int pDuration,int pPrice);
    void displayPackage();
    void displaySafariOwnerDetails();
    ~SafariOwner();
};


#endif //LASTASSIGN_SAFARIOWNER_H
