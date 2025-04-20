//Today we made a program that show the 
//time and can run

#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    int hours, min , sec , a , err;
    err = a = 0;
    while (err == 0)
    {
        cout<<"Enter the hours:";
        cin>>hours;
        cout<<"Enter the minutes:";
        cin>>min;
        cout<<"Enter the second:";
        cin>>sec;

        if (hours<24 && min<60 && sec<60)
        {
            err++;
        }else{
            system("cls");
        }
        
    }
    while (a == 0)
    {
        system("cls");
        cout<<hours<<":"<<min<<":"<<sec;
        Sleep(1000);
        sec++;
        if (sec>59)
        {
            sec=0;
            min++;
        }
        if (min>59)
        {
            min=0;
            hours++;
        }
        if (hours>24)
        {
            hours=0;
        }
        
        
    }
    
    
    
    return 0;
}