#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;

    cout<<"At "<<binarySearch(arr, n, key)<<" index the value is present."<<endl;
    //if -1 comes then the value is not present in the array.
    return 0;
}
//Linear Search complexity is O(logn with base 2).