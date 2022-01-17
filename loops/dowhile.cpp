#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    do // dowhile loop prints the number atleast 1 time even if it doesn't satisly the condition. 
    {
        cout<<"The Number is Positive: "<<n<<endl;

        cout<<"Enter a Number: ";
        cin>>n;

    } while (n>0);

    cout<<"The Number is Negative: "<<n<<endl;
    
    return 0;

}