#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter an integer number: ";
    cin>>num1>>num2;

    (num1>num2) ? cout<<"Large Number: "<<num1 : cout<<"Large Number: "<<num2;


    return 0;
}