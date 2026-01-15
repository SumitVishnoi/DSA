// Pattern
// 1111
// -222
// --33
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
        int col = 1;
        int start = n-row+1;
        while(col <= start) {
            cout<<row;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}