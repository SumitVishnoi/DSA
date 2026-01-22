#include <iostream>
using namespace std;

int main()
{
    // Q10

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // actual logic
    // if (n & (1 << (sizeof(int) * 8 - 1)))
    // {
    //     cout << "Negative";
    // }
    // else
    // {
    //     cout << "Positive";
    // }
    // ------------------ or ----------------------

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
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // if(n == 0) {
    //     cout<<"No set bit";
    //     return 0;
    // }

    // int pos = 0;
    // int rightmost = (n&(-n));

    // while(rightmost > 1) {
    //     rightmost = rightmost >> 1;
    //     pos++;
    // }

    // cout<<"Position of rightmost set bit: "<<pos<<endl;
    // ---------------------------------------------------------

    // Q13

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // if (n == 0) {
    //     cout << "No set bit present in 0";
    // } else {
    //     int result = n & (n - 1);
    //     cout << "After clearing rightmost set bit: " << result;
    // }
    // -----------------------------------------------------------------

    // Q17

    // int n, i;
    // cout<<"Enter the number: ";
    // cin>>n;

    // cout<<"Enter the i-th bit: ";
    // cin>>i;

    // if(n&(1<<i)) {
    //     cout<<"i-th bit is set bit";
    // }
    // else {
    //     cout<<"i-th bit is not set bit";
    // }
    // ------------------------------------------------

    // Q14
    // int a, b;
    // cout << "Enter the value of a and b: ";
    // cin >> a >> b;

    // if ((a ^ b) < 0)
    // {
    //     cout << "both have opposite signs";
    // }
    // else
    // {
    //     cout << "both have same signs";
    // }
    // -----------------------------------------------------

    // Q15

    // int x, n;
    // cout<<"Enter the value of x: ";
    // cin>>x;

    // cout<<"Enter the value of n: ";
    // cin>>n;

    // int result = (x<<n);
    // cout<<"Multiply a number by 2ⁿ = "<<result<<endl;
    // --------------------------------------------------

    // Q16

    int x, n;
    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "n must be non-negative";
        return 0;
    }

        int result = (x >> n);
        cout << "Divide a number by 2ⁿ = " << result << endl;
}