#include<cstring>
#include<iostream>
using namespace std;

#include "Payment.h"

Payment::Payment(char bName[],char cardNo[],int payID,int amountT){
    strcpy(bankName,bName);
    strcpy(bankCardNumber,cardNo);
    paymentID = payID;
    amount = amountT;
}
void Payment::displayPayment(){
    cout<<"_____Payment Information_____"<<endl;
    cout<<"Bank Name : "<<bankName<<endl;
    cout<<"Bank Card Number : "<<bankCardNumber<<endl;
    cout<<"Payment ID : "<<paymentID<<endl;
    cout<<"Amount : "<<amount<<endl;
    cout<<endl;
}
Payment::~Payment() {
    cout<<"Delete Payment Details\n"<<endl;
}