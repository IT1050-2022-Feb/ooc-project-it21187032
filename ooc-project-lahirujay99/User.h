#ifndef LASTASSIGN_USER_H
#define LASTASSIGN_USER_H

class User{
protected:
    char username[30];
    int age;
    char email[100];
    char address[100];
    char phoneNumber[13];
    char password[50];
public:
    User();
    User(char uName[],int tAge,char tMail[],char tAddress[],char tPhone[],char pass[]);
    void displayDetails();
};


#endif //LASTASSIGN_USER_H
