#include<iostream>
using namespace std;

int main(){
    int arr[]={90,10,20,30};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum+arr[i];
    }
    cout<<"The sum of arrays element is :"<<sum<<endl;
    
    return 0;
}