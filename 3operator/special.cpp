#include<iostream>
using namespace std;
int main(){
    int a;
    float b;
    double c;
    char ch;
    char name[20];

    int in=sizeof(a);
    cout<<"Int: "<<in<<endl;

    int fl=sizeof(b);
    cout<<"Float: "<<fl<<endl;

    int dou=sizeof(c);
    cout<<"Double: "<<dou<<endl;

    int cha=sizeof(ch);
    cout<<"Character: "<<cha<<endl;

    int chaa=sizeof(name);
    cout<<"Character Array: "<<chaa<<endl;
}