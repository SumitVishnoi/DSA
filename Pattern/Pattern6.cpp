// Pattern
// 123
// 456
// 789



#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int row = 1;
    int count = 1;
    while(row <= n) {
        int col = 1;
        while(col <= n) {
            cout<<count;
            count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}