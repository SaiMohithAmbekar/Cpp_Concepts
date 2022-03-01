#include<iostream>
using namespace std;

bool pairSum(int arr[], int n, int k){
// brute force approach (time complexity = O(n^2))
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]+arr[j]==k){
    //             cout<<i<<" "<<j<<endl;
    //             return 1;
    //         }
    //     }
    // }
    // return 0;
    int low = 0;
    int high = n-1;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return 1;
        }
        else if(arr[low]+arr[high]<k){
            low++;
        }
        else{
            high--;
        }
    }
    return 0;
}

int main(){
    
    int arr[] = {2, 4, 5, 11, 14, 15, 18, 22};
    int k=24;
    cout<<pairSum(arr, 8, k)<<endl;
    return 0;
}

