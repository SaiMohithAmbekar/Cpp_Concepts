#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    while(n>0){
        cout<<"The Given Number is a Positive Number: "<<n<<endl;

        cout<<"Enter a Number: ";
        cin>>n;
    }
    cout<<"The Given Number is a Negative Number: "<<n<<endl;
    return 0;
}
