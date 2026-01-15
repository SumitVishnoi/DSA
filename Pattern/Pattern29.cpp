// Pattern
// ---1
// --23
// -456
// 78910



#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int row = 1;
    int value = row;
    while(row <= n) {
        // For space
        int space = n-row;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        // For counting
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