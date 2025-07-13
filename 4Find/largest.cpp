#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"The Array size is: "<<n<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter "<<i+1<<" number element: ";
        cin>>arr[i];
    }
    cout<<"Full Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if( arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<endl<<"The largest element in the array is: "<<largest<<endl;
    return 0;
}