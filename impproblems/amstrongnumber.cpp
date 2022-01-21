#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n, sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    int originaln=n;

    while(n>0){
        int lastDigit=n%10;
        sum += pow(lastDigit,3);
        n=n/10;
    }
    if(sum==originaln){
        cout<<"It is an Amstrong Number."<<endl;
    }
    else{
        cout<<"It is not an Amstrong Number."<<endl;
    }

    return 0;
}