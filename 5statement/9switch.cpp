#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    switch(num){
        case 0: cout<<"You entered zero."; break;
        case 1: cout<<"You entered one."; break;
        case 2: cout<<"You entered two."; break;
        case 3: cout<<"You entered three."; break;
        case 4: cout<<"You entered four."; break;
        case 5: cout<<"You entered five."; break;
        default: cout<<"Invalid input. Enter the number around 5."; break;
    }
}