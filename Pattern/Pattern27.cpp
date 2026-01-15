// Pattern
// 1234
// -234
// --34
// ---4



#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int row = 1;
    while(row <= n) {
        // For space
        int space = row-1;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        // For counting
        int col =  1;
        int value = row;
        int start = n-row+1;
        while(col <= start) {
            cout<<value;
            value = value + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}