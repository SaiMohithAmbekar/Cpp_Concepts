#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int sum=0;
    int i; //i is the counter for 'for' loop
    for(i=1; i<=n; i++){
        sum = sum + i;
    }
    cout<<"The Sum of "<<n<<" Numbers is: "<<sum<<endl;
    return 0;
}