#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"The array size is: "<<n<<endl;
    int arr[n];
    cout<<"Enter the element in this array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The full arary: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Search for the element: ";
    int search;
    cin>>search;
    for(int i=0; i<n; i++){
        if(search==arr[i]){
            cout<<"Element "<<search<<" found at index "<<i<<endl;
            break;
        }
        else{
            cout<<"Element is not found"<<endl;
        }
    }
}


/* Output Looks like this: -  
Enter the size of an array: 5
The array size is: 5
Enter the element in this array: 10
11
12
13
14
The full arary: 10 11 12 13 14 
Search for the element: 13
Element is not found
Element is not found
Element is not found
Element 13 found at index 3
Element is not found*/