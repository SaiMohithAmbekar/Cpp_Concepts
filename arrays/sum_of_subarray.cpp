// number of subarrays of an array with n elements = n*(n+1)/2.
// number of subsequences of an array with n elements  = 2^n.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the legth of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int curr=0;
    for(int i=0; i<n; i++){
        curr=0;
        for(int j=i; j<n; j++){
            curr += arr[j];
            cout<<curr<<" "; 
        }
    }
    cout<<endl;
    return 0;
}