#include<iostream>
using namespace std;
int main(){
    int num1,num2, choice;
    cout<<"Enter Two Number: ";
    cin>>num1>>num2;
    cout<<"Choose operation:\n 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n";
    cin>>choice;
    switch(choice){
        case 1: cout<<"The adding number here: "<<num1+num2; break;
        case 2: cout<<"The substracting Number here: "<<num1-num2; break;
        case 3: cout<<"The Multiplying Number here: "<<num1*num2; break;
        case 4:
        if(num2 != 0){
            cout<<"The Dividing Number here: "<<num1/num2; break;
        }
        else{
            cout<<"Division by zero is error.";
        }
    }
}