#include<iostream>
using namespace std;
int main(){
    int a=12,b=32,c;

    c=a&b;
    cout<<"Bitwise AND: "<<c<<endl;

    c=a|b;
    cout<<"Bitwise OR: "<<c<<endl;

    c=a^b;
    cout<<"Bitwise XOR: "<<c<<endl;

    return 0;
}