#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a>b){
        if (a>c){
            cout<<"The greatest of the Three Numbers is "<<a<<endl;
        }
        else{
            cout<<"The greatest of the Three Numbers is "<<c<<endl;
        }
    }
    else{
        if (b>c){
            cout<<"The greatest of the Three Numbers is "<<b<<endl;
        }
        else{
            cout<<"The greatest of the Three Numbers is "<<c<<endl;
        }
    }
}
