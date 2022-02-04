#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n+1];
    arr[n] = -1;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(n==1){
        cout<<"1"<<endl;
    }

    int ans=0;
    int mx=-1;

    for(int i=0; i<n; i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx = max(mx,arr[i]);
    }
    cout<<"Number of record breaking days = "<<ans<<endl;
    // for finding the date of the record breaking day.) cout<<mx<<endl;

    return 0;
}