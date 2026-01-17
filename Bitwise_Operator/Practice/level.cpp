#include<iostream>
using namespace std;

int main() {
    // Q3

    // int n, i;
    // cout<<"Enter the number: ";
    // cin>>n;

    // cout<<"Enter the bit value: ";
    // cin>>i;

    // int result = (n|(1<<i));

    // cout<<"Result is: "<<result<<endl;
    // -----------------------------------------------

    int n, i;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter bit position: ";
    cin >> i;

    int result = n & ~(1 << i);

    cout << "Number after clearing ith bit: " << result;
}
