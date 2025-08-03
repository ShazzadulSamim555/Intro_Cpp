#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter Your Mark: ";
    cin>>mark;
    
    if(mark==100){
        cout<<"You get full mark and won 100% scholarship";
    }

    else if(mark>=80){
        cout<<"You get A+";
    }
    else if(mark>=33){
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}