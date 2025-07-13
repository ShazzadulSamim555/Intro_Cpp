#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    double num1,num2;
    cout<<"Enter two number: ";
    cin>>num1>>num2;

    double sum=num1+num2;
    cout<<"Sum of two numbers: "<<sum<<endl;

    double rem=fmod(num1,num2);
    cout<<"The reminder of two numbers: "<<rem<<endl;

    cin.ignore();
    string name;
    cout<<"Enter Your full name: ";
    getline(cin,name);
    cout<<"Your full name: "<<name;

    return 0;
}