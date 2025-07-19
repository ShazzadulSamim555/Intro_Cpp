#include<iostream>
using namespace std;
int main(){
    double celsius,fahrenheit;
    cout<<"Enter Celsius value: ";
    cin>>celsius;

    fahrenheit=(1.8*celsius)+32;

    cout<<"Fahrenheit Value: "<<fahrenheit;
    return 0;
}