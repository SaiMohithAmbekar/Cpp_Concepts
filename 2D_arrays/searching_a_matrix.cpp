#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Number of rows: ";
    cin>>n;
    cout<<"Number of columns: ";
    cin>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int x;
    cout<<"Enter the value to be found: ";
    cin>>x;
    bool flag=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==x){
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is present."<<endl;
    }
    else{
        cout<<"Element is not present."<<endl;
    }
    return 0;
}