#include<iostream>
using namespace std;
int main(){
    int a,b,c,largest;
    cout<<"Enter any 3 number using gap: ";
    cin>>a>>b>>c;

    if(a>b && a>c){
        largest=a;
    }
    else if(b>a && b>c){
        largest=b;
    }
    else{
        largest=c;
    }
    cout<<"Largest number is: "<<largest;

    return 0;
}