
#include<iostream>
using namespace std;

int main(){
    int score[]={90,70,180,66,40};
    int minscore =score[0];
    for (int i = 0; i < 5; i++)
    {
        if(score[i]<minscore){
            minscore = score[i];
        }
    }
    cout<<"The min number is :"<<minscore;
    return 0;
}
