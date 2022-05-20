#include<cstring>
#include<iostream>
using namespace std;

#include "Package.h"

Package::Package(){
    strcpy(packageName,"");
    packageID = 0;
    packageDuration = 0;
    packagePrice = 0;
    Pay[0] = new Payment("Bank","0000000000000000",00000,00000);
}
Package::Package(char pName[],int pID,int pDuration,int pPrice){
    strcpy(packageName,pName);
    packageID = pID;
    packageDuration = pDuration;
    packagePrice = pPrice;
}
Package::Package(char bName[],char cardNumber[],int payID,int amountT){
    Pay[0] = new Payment(bName,cardNumber,payID,amountT);
}
void Package::displayPayment() {
    for(int p = 0; p <1; p++){
        Pay[p] ->displayPayment();
    }
}
void Package::displayPackageDetails(){
    cout<<"__Package Details__"<<endl;
    cout<<"Package Name : "<<packageName<<endl;
    cout<<"Package ID : "<<packageID<<endl;
    cout<<"Package Duration : "<<packageDuration<<" Day"<<endl;
    cout<<"Package Price : "<<packagePrice<<"/-"<<endl;
    cout<<endl;
}
void Package::addFeedBack(FeedBack *feedB) {
    feed[0] = feedB;
}
void Package::displayFeed() {
    cout<<"__Newly Added FeedBack__"<<endl;
        for(int f = 0; f < 1; f++){
            feed[f]->viewFeedBack();
          
        }
    cout<<endl;
}
Package::~Package(){
    cout<<"Package Details are Deleted\n"<<endl;
    for(int p=0;p<1;p++){
        delete Pay[p];
    }
    cout<<"All payment records cleared\n"<<endl;
}