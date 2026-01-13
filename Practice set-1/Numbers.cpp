#include<iostream>
using namespace std;

int main() {
    //Q1

    // int n;
    // int i = 1;
    // cout<<"Enter the number:"<<endl;
    // cin>>n;

    // while(i<=n) {
    //     cout<<i<<" ";
    //     i = i+1;
    // }
    // ------------------------------------------

    //Q2

    // int n;
    // cout<<"Enter the number:"<<endl;
    // cin>>n;

    // while(n>=1) {
    //     cout<<n<<" ";
    //     n = n-1;
    // }
    // ---------------------------------------------

    //Q3

    // int n;
    // int i = 1;
    // int sum = 0;
    // cout<<"Enter the number:"<<endl;
    // cin>>n;

    // while(i<=n) {
    //    sum = sum + i;
    //    i = i + 1;
    // }

    // cout<<"sum is: "<<sum<<endl;
    // --------------------------------------------------

    //Q4

    // int n;
    // int i = 1;
    // int multi = 1;
    // cout<<"Enter the number:"<<endl;
    // cin>>n;

    // while(i<=n) {
    //    multi = multi * i;
    //    i = i + 1;
    // }

    // cout<<"multi is: "<<multi<<endl;
    // -----------------------------------------------------

    // Q5

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int count = 0;

    if(n == 0) {
        count = 1;
    }
    else {
        while(n != 0) {
            n = n/10;
            count++;
        }
    }
    cout<<"count is: "<<count<<endl;
    // -----------------------------------------------------

    // Q6

    // int n;
    // cout<<"Enter the number:"<<endl;
    // cin>>n;

    // if(n>0) {
    //     cout<<"Number is positive."<<endl;
    // }
    // else if(n<0) {
    //     cout<<"Number is negative."<<endl;
    // }
    // else {
    //     cout<<"Number is zero."<<endl;
    // }
    // -----------------------------------------------------

    // Q7

    // int a,b,c;
    // cout<<"Enter the value of a, b and c: "<<endl;
    // cin>>a>>b>>c;

    // if(a>b) {
    //     cout<<"a is greater";
    // }
    // else if(b>c) {
    //     cout<<"b is greater";
    // }
    // else {
    //     cout<<"c is greater";
    // }
    // -----------------------------------------------------

    // Q8

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // if(n%5 == 0 && n%11 == 0) {
    //     cout<<"Number is divisible by 5 and 11";
    // } 
    // else {
    //     cout<<"Number is not divisible by 5 and 11";
    // }
    // ----------------------------------------------------------

    // Q9

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // int square = n*n;
    // cout<<"square is: "<<square<<endl;

    // int cube = n*n*n;
    // cout<<"cube is: "<<cube<<endl;
    // ------------------------------------------------------------

    // Q10

    // int n;
    // cout<<"Enter the year: "<<endl;
    // cin>>n;

    // if(n%4 == 0) {
    //     cout<<"Year is leap year";
    // }
    // else {
    //     cout<<"Year is non-leap year";
    // }
}