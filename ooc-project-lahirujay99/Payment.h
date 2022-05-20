
#ifndef LASTASSIGN_PAYMENT_H
#define LASTASSIGN_PAYMENT_H


class Payment {
private:
    char bankName[50];
    char bankCardNumber[17];
    int paymentID;
    int amount;
public:
    Payment();
    Payment(char bName[],char cardNo[],int payID,int amountT);
    void displayPayment();
    ~Payment();
};


#endif //LASTASSIGN_PAYMENT_H
