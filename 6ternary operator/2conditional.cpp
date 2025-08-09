#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;

    (num %2 ==0) ? cout<<"This is an Even Number." : cout<<"This is an Odd Number.";

    return 0;
}