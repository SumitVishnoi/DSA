#include<iostream>
using namespace std;

int main() {
    int n;
    int number = 1;
    int sum = 0;
    cout<<"Enrter the number:" <<endl;
    cin>>n;

    while(number<=n) {
        sum = sum+number;
        number += 1;
    }

    cout<<"sum of N number is:"<<sum <<endl;
}