#include<iostream>
using namespace std;

int main(){
    // We can do a square pattern too if the number of rows and columns are equal.
    int rows, columns;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    cout<<"Enter the number of columns: ";
    cin>>columns;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=columns; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;

}