#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0; i<n; i++){
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout<<maxNo<<" is the greatest number in the array."<<endl;
    cout<<minNo<<" is the smallest number in the array."<<endl;

    return 0;
}