#include <iostream>
#include<cstring>
using namespace std;

//Header Files
#include"User.h"
#include"Customer.h"
#include"SafariOwner.h"
#include "FeedBack.h"
#include"Payment.h"
#include "Package.h"

int main() {
    //Customer.
    Customer c1("Isuru Madusanka",10009,30,"izum@gmail.com","no 4,new street,Galle",
                "+94712548569","cstringh");
    c1.displayDetailsCustomer();

    //Safari Owner.
    SafariOwner s1("Kusal Dorenegoda",1001,45,"kusald67@gmail.com","34,silverlake,Kadugannawa",
               "+94785623589","kusalk1234");
    s1.displaySafariOwnerDetails();

    //Package details.
    SafariOwner *data;
    data = new SafariOwner("Wilpaththu Adventures",12,3,120000);
    data ->displayPackage();

    //Payment Information.
    Package *pay;
    pay = new Package("Commercial Bank","431564768905",89000123,120000);
    pay ->displayPayment();

    //FeedBack.
    FeedBack *f1;
    f1 = new FeedBack(10099,"Friendly Service , Easy to use , this will be a fantastic journey");
    f1 ->viewFeedBack();

    //delete data.
    delete data;
    delete pay;
    delete f1;

    return 0;
}