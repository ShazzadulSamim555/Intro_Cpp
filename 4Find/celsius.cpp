#include<iostream>
using namespace std;
int main(){
    int celsius,fahrenheit;

    cout<<"Enter Fahrenheit value: ";
    cin>> fahrenheit;

    celsius= (fahrenheit-32)/1.8;

    cout<<"Celsius Value: "<<celsius;
    return 0;
}