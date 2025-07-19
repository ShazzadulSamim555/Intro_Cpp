#include<iostream>
using namespace std;
int main(){
    int a=32;
    int b=10;

    int c=a>>3;
    cout<<"Right shift Bitwise: "<<c<<endl;  //division by 2

    int d=a<<4;
    cout<<"Left shift Bitwise: "<<d<<endl;   //multiply by 2

    return 0;
}