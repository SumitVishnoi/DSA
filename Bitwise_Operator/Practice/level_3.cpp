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
    
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    
    // if (n > 0 && (n & (n + 1)) == 0) {
    //     cout << "Number is of form (2^n - 1)";
    // } else {
    //     cout << "Number is NOT of form (2^n - 1)";
    // }
    // ---------------------------------------------

    // Q21

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // n = abs(n);

    // int evenCount = 0;
    // int oddCount = 0;
    // int pos = 0;

    // while(n>0) {
    //     if(n&1) {
    //         if(pos%2 == 0) {
    //             evenCount++;
    //         }
    //         else {
    //             oddCount++;
    //         }
    //     }
    //     n = n >> 1;
    //     pos++;
    // }

    // if(abs(evenCount - oddCount) == 0) {
    //     cout<<"Multiple of 3";
    // }
    // else {
    //     cout<<"Not a multiple of 3";
    // }
    // --------------------------------------------

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
    // ----------------------------------------------------

    // Q23

    // int a, b;
    // cout<<"Enter the value of a and b: ";
    // cin>>a>>b;

    // b = -b;
    // while(b != 0) {
    //     int carry = a & b;
    //     a = a ^ b;
    //     b = carry<<1;
    // }

    // cout<<"Sub: "<<a<<endl;
    // --------------------------------------------

    // Q24

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // int i = 1;
    // int prev = 0;
    // while(i <= n) {
    //     prev = prev ^ i;
    //     i++;
    // }

    // cout<<"XOR of numbers from 1 to n: "<<prev<<endl;

    // ------------------- or-------------------
    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // int result;

    // if (n % 4 == 0)
    //     result = n;
    // else if (n % 4 == 1)
    //     result = 1;
    // else if (n % 4 == 2)
    //     result = n + 1;
    // else
    //     result = 0;

    // cout << "XOR from 1 to n is: " << result;
    // ---------------------------------------------
}