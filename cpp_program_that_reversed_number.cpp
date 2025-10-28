#include<iostream>
using namespace std;

int main(){
    int data[]= {1, 2, 3, 4, 5, 6};
        cout << "Reversed: ";
    for (int i = 5; i >=0; i--)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
    return 0;
}

