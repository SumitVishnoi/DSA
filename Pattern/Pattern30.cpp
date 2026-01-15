// Pattern
// ---1---
// --121--
// -12321-
// 1234321



#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int row = 1;
    while(row <= n) {
        // for space
        int space = n-row;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        // for 1st triangle
        int col = 1;
        while(col <= row) {
            cout<<col;
            col = col + 1;
        }

        // for 2nd triangle
        int start = row-1;
        while(start) {
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        row = row + 1;
    }
}