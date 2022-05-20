#include<cstring>
#include<iostream>
using namespace std;

#include "SafariOwner.h"

SafariOwner::SafariOwner(){
    strcpy(username,"");
    safariOwnerID = 0;
    age = 0;
    strcpy(email,"");
    strcpy(address,"");
    strcpy(phoneNumber,"");
    strcpy(password,"");
    package[0] = new Package("day",0001,0,00000);
}
SafariOwner::SafariOwner(char uName[],int sOwnerID,int tAge,char tMail[],char tAddress[],char tPhone[],char pass[]){
    strcpy(username,uName);
    safariOwnerID = sOwnerID;
    age = tAge;
    strcpy(email,tMail);
    strcpy(address,tAddress);
    strcpy(phoneNumber,tPhone);
    strcpy(password,pass);
  
}
SafariOwner::SafariOwner(char pName[],int pID,int pDuration,int pPrice){
    package[0] = new Package(pName,pID,pDuration,pPrice);
}
void SafariOwner::displayPackage() {
    for (int p = 0; p < 1; p++){
        package[p] ->displayPackageDetails();
    }
}
void SafariOwner::displaySafariOwnerDetails(){
    cout<<"_____Safari Owner Details_____"<<endl;
    cout<<"User Name : "<<username<<endl;
    cout<<"Safari Owner ID : "<<safariOwnerID<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Email : "<<email<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"Phone Number : "<<phoneNumber<<endl;
    cout<<endl;
}
SafariOwner::~SafariOwner() {
    cout<<"Everything will be deleted\n"<<endl;
        for(int s = 0; s < 1; s++){
            delete package[s];
        }
    cout<<"All Clear\n"<<endl;
}