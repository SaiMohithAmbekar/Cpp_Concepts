#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(int n){

    int x=1;
    string ans="";

    while(x<=n){
        x*=16;
    }
    x/=16;

    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=16;

        if(lastDigit<=9){
            ans = ans+to_string(lastDigit);
        }
        else{
            char a = 'A'+lastDigit-10;
            ans.push_back(a);
        }
    }
    return ans;   
}

int main()
{

    int n;
    cout<<"Enter the number to convert: ";
    cin>>n;

    cout<<decimalToBinary(n)<<endl;

    return 0;
}