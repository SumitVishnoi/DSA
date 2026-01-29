#include <iostream>
using namespace std;

int main()
{
    // Q18

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // if(n==0) {
    //     cout<<"Trailing zeros are undefined for 0";
    // }

    // n = n&(-n);
    // int count = 0;
    // while(n!=1) {
    //     n = n>>1;
    //     count++;
    // }

    // cout<<"Trailing of zeros: "<<count<<endl;
    // -------------------------------------------------

    // Q19
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;

    // if (n == 0)
    // {
    //     cout << "MSB none";
    //     return 0;
    // }

    //  n = abs(n);   // handle negative numbers

    // int pos = 0;
    // while (n > 1) {
    //     n = n >> 1;
    //     pos++;
    // }

    // cout << "MSB position is: " << pos;
    // -------------------------------------------------

    // Q20
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    
    if (n > 0 && (n & (n + 1)) == 0) {
        cout << "Number is of form (2^n - 1)";
    } else {
        cout << "Number is NOT of form (2^n - 1)";
    }
    // ---------------------------------------------
    // Q22

    // int a, b;
    // cout << "Enter the value of a and b: ";
    // cin >> a >> b;

    // while(b != 0) {
    //     int carry = a&b;
    //     a = a^b;
    //     b = carry<<1;
    // }

    // cout<<"Sum is: "<<a<<endl;
}