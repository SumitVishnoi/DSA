#include<iostream>
using namespace std;

int main() {
    int n;
    int number = 2;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    while(number<n) {
        //divide hogya = not prime
        if(n%number == 0) {
            cout<<"Not prime "<<number<<endl;
        } else {
            cout<<"prime "<<number<<endl;
        }
        number += 1;
    }
}