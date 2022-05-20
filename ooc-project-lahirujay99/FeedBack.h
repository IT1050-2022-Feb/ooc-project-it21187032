
#ifndef LASTASSIGN_FEEDBACK_H
#define LASTASSIGN_FEEDBACK_H


class FeedBack {
private:
    int feedBackId;
    char comment[300];
public:
    FeedBack();
    FeedBack(int fID,char commentT[]);
    FeedBack(char feed[]);
    void viewFeedBack();
    ~FeedBack();
};


#endif //LASTASSIGN_FEEDBACK_H
