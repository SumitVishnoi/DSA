// Pattern
// 1
// 23
// 345
// 4567



#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int row = 1;
    while(row <= n) {
        int value = row;
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