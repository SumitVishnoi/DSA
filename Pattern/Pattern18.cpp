// Pattern
// A
// BC
// DEF
// GHIJ



#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int row = 1;
    char value = 'A';
    while(row <= n) {
        int col = 1;
        while(col <= row) {
            cout<<value;
            value = value + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}