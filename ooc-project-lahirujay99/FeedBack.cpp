#include<cstring>
#include<iostream>
using namespace std;

#include "FeedBack.h"
FeedBack::FeedBack(){
    feedBackId = 0;
    strcpy(comment,"");
}
FeedBack::FeedBack(int fID,char commentT[]){
    feedBackId = fID;
    strcpy(comment,commentT);
}
FeedBack::FeedBack(char feed[]){
    strcpy(comment,feed);
}
void FeedBack::viewFeedBack(){
    cout<<"__________FeedBack___________"<<endl;
    cout<<"FeedBack : "<<comment<<endl;
    cout<<endl;
}FeedBack::~FeedBack() {
    cout<<"All Feedbacks are cleared"<<endl;
}