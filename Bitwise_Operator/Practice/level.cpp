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

    // Q4

    // int n, i;
    // cout << "Enter number: ";
    // cin >> n;
    // cout << "Enter bit position: ";
    // cin >> i;

    // int result = n & ~(1 << i);

    // cout << "Number after clearing i-th bit: " << result;
    // ------------------------------------------------------------

    // Q5

    // int n, i;
    // cout<<"Enter the number: ";
    // cin>>n;

    // cout<<"Enter the i-th bit: ";
    // cin>>i;

    // int result = n ^ (1<<i);
    // cout<<"Number after toggle i-th bit: "<<result;
    // -----------------------------------------------------

    // Q6

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // cout<<"Multiply by 2: "<<(n<<1)<<endl;
    // cout<<"Divide by 2: "<<(n>>1)<<endl;
    // --------------------------------------------------------

    // Level-1

    // Q7

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // int i = n/2;
    // if((n>>i) == 1) {
    //     cout<<"Power of 2";
    // }
    // else  {
    //     cout<<"Not power of 2";
    // }

    // ------------ or----------------
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(n>0 && (n&(n-1)) == 0) {
        cout<<"Power of 2";
    }
    else {
        cout<<"Not power of 2";
    }
}
