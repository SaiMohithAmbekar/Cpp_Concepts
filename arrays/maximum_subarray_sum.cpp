#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxSum = INT_MIN; 
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
            maxSum=max(maxSum,sum);
        }
    }
    cout<<"The maximum subarray sum is "<<maxSum<<endl;

    return 0;
}