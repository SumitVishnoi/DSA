#include<iostream>
using namespace std;

int main() {
    // Q10

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // if(n == 0) {
    //     cout<<"zero";
    // }
    // else if((n>>31)) {
    //     cout<<"Negative";
    // }
    // else {
    //     cout<<"Positive";
    // ---------------------------------------

    // Q11

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if((n&(n>>2))==0) {
        cout<<"Divisible by 4";
    }
    else {
        cout<<"Not divisible by 4";
    }
}