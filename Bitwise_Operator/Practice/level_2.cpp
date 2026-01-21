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

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    //  if((n&3) == 0) {
    //     cout<<"Divisible by 4";
    // }
    // else {
    //     cout<<"Not divisible by 4";
    // }
    // -------------------------------------------

    // Q11

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // if((n&7) == 0) {
    //     cout<<"Divisble by 8";
    // }
    // else {
    //     cout<<"Not divisible by 8";
    // }
    // -------------------------------------------

    // Q12
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(n == 0) {
        cout<<"No set bit";
        return 0;
    }

    int pos = 0;
    int rightmost = (n&(-n));

    while(rightmost > 1) {
        rightmost = rightmost >> 1;
        pos++;
    }

    cout<<"Position of rightmost set bit: "<<pos<<endl;
}