// Pattern
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1



#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int row = 1;
    while(row <= n) {
        // for 1st traingle
        int col = 1;
        int start = n-row+1;
        while(col <= start) {
            cout<<col;
            col = col + 1;
        }

        // for 1st star traingle
        int first = row-1;
        while(first) {
            cout<<"*";
            first = first - 1;
        }

        // for 2nd star traingle
        int second = row-1;
        while(second) {
            cout<<"*";
            second = second - 1;
        }

        // for 2nd traingle
        int count = n-row+1;
        while(count) {
            cout<<count;
            count = count - 1;
        }

        cout<<endl;
        row = row + 1;
    }
}