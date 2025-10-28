
#include<iostream>
using namespace std;

int main(){
    int score[]={90,70,180,66,40};
    int maxscore =score[0];
    for (int i = 0; i < 5; i++)
    {
        if(score[i]>maxscore){
            maxscore = score[i];
        }
    }
    cout<<"The max number is :"<<maxscore;
    return 0;
}

