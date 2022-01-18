#include<iostream>
using namespace std;

int main(){

    int a,b, i;
    cout<<"Enter the Numbers: ";
    cin>>a>>b;

    for(int number=a; number<=b; number++){
        for(i=2; i<number; i++){
            if(number%i==0){
                break;
            }
        }
        if(i==number){
            cout<<number<<endl;
        }
    }
    return 0;
}