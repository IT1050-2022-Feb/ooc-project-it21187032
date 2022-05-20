#include<cstring>
#include<iostream>
using namespace std;

#include "Customer.h"

Customer::Customer(){
    strcpy(username,"");
    customerID = 0;
    age = 0;
  
    strcpy(email,"");
    strcpy(address,"");
    strcpy(phoneNumber,"");
    strcpy(password,"");
    comment[0] = new FeedBack(00000,"Customer FeedBack");

}
Customer::Customer(char uName[],int cID,int tAge,char tMail[],char tAddress[],char tPhone[],char pass[]){
    strcpy(username,uName);
    customerID = cID;
    age = tAge;
    strcpy(email,tMail);
    strcpy(address,tAddress);
    strcpy(phoneNumber,tPhone);
    strcpy(password,pass);


  
}
Customer::Customer(int fID,char commentT[]){
    comment[0] = new FeedBack(fID,commentT);

  
}
void Customer::displayFeedBack() {
    for(int f= 0; f < 1; f++){
        comment[f]->viewFeedBack();
    }
}
void Customer::displayDetailsCustomer(){
    cout<<"__Customer Details__"<<endl;
    cout<<"User Name : "<<username<<endl;
    cout<<"Customer ID : "<<customerID<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Email : "<<email<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"Phone Number : "<<phoneNumber<<endl;
    cout<<endl;
}
Customer::~Customer() {
    cout<<"All FeedBack Records are Deleted\n"<<endl;
}