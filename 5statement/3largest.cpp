#include<iostream>
using namespace std;
int  main(){
    int num1,num2;
    cout<<"Enter 2 number: ";
    cin>>num1>>num2;

    if(num1>num2){
        cout<<num1<<" is bigger then "<<num2<<endl;
    }
    else if(num1 == num2){
        cout<<"They are equal.";
    }
    else{
        cout<<num2<<" is bigger then "<<num1<<endl;
    }
}