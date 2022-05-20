#include<cstring>
#include<iostream>
using namespace std;
#include "User.h"

User::User(){
    strcpy(username,"");
    age = 0;
    strcpy(email,"");
    strcpy(address,"");
    strcpy(phoneNumber,"");
    strcpy(password,"");
}
User::User(char uName[],int tAge,char tMail[],char tAddress[],char tPhone[],char pass[]){
    strcpy(username,uName);
    age = tAge;
    strcpy(email,tMail);
    strcpy(address,tAddress);
    strcpy(phoneNumber,tPhone);
    strcpy(password,pass);
}
void User::displayDetails(){
    cout<<"User Name : "<<username<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Email : "<<email<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"Phone Number : "<<phoneNumber<<endl;
    cout<<endl;
}