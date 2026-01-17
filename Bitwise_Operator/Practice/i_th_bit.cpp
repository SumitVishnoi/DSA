#include<iostream>
using namespace std;

int main() {
    int n, i;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Enter the bit: ";
    cin>>i;

    if(n&(1<<i)) {
        cout<<"i-th bit is 1";
    }
    else {
        cout<<"i-th bit is 0";
    }

}