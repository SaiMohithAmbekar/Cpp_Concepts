#include<iostream>
using namespace std;

int main(){
    
    float a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    char opr;
    cout<<"Enter the operator: ";
    cin>>opr;

    switch (opr)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    
    default:
        cout<<"Enter another operator: "<<endl;
        break;
    }

    return 0;
}