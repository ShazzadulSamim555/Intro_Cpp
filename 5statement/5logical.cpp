#include<iostream>
using namespace std;
int main(){
    int pant,shirt;
    cout<<"Enter your Pant and Shirt price respectively: ";
    cin>>pant>>shirt;

    if(pant<=500 && shirt<=500){
        cout<<"Good deal,  i can effort this price.";
    }
    else if(pant<=1000 || shirt<=1000){
        cout<<"It's difficult, But i can buy it if it's make perfect to me";
    }
    else{
        cout<<"Assalamo-alaikom, uncle arekta dokan dekhi.";
    }
}