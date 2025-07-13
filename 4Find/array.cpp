#include<iostream>
using namespace std;

int main(){
    int n,element,index=-1;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"You chose the array size: "<<n<<endl;
    int arr[n];
    cout <<"Enter the elements fo the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to find: ";
    cin>>element;
    for(int i=0; i<n; i++){
        if(arr[i]==element){
            index=i;
            break;
        }
    }
    if(index!=-1){
        cout<<"Element "<<element<<" Find at index "<<index<<endl;
    }
    else{
        cout<<"Element "<<element<<" not found in the array."<<endl;
    }
    return 0;
}