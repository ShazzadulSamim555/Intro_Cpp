#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Full array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    int search;
    bool find=false;
    cout<<"Search for element: ";
    cin>>search;

    for(int i=0; i<n; i++){
        if(arr[i]==search){
            cout<<"Element "<<arr[i]<<" index number is "<<i<<endl;
            find=true;
            break;
        }

    }
    if(!find){
        cout<<"Element is not found";
    }
    return 0;
}