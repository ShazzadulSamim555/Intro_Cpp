#include<iostream>
#include<cmath> // here <cmath> is a library function, we use this we want to get a reminder number of two float/double input type
#include<string>
using namespace std;
int main(){
    double num1,num2;
    cout<<"Enter Two Integer Numbers: ";
    cin>>num1>>num2;

    cout<<showpoint;

    int sum=num1+num2;
    cout<<"Sum of Two numbers: "<<sum<<endl;

    int sub=num1-num2;
    cout<<"Substraction of two Numbers: "<<sub<<endl;

    int mul=num1*num2;
    cout<<"Multiplication of two Numbers: "<<mul<<endl;

    double divi=num1/num2;
    cout<<"Division of two numbers: "<<divi<<endl;

    /*if i want to get an integer number of two input integer number, then we should use this part-
    int rem = num1%num2;   % just work for integer value
    but if we use float input type, then we should use -
    double rem=fmod(num1,num2);   it's just worked for reminder*/
    double rem=fmod(num1,num2);  //fmod() is a standard library function and it's come from <cmath> header file
    cout<<"Reminder of two numbers: "<<rem<<endl;

    cin.ignore();
    string name;
    cout<<"Enter your full name: ";
    getline(cin,name);  // getline is a standard library function and it's come from <string> header file
    cout<<"Your full name is: "<<name;
    return 0;
}