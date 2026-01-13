#include<iostream>
#include<math.h>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}

int main() {
    // Q11

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // int i = 1;
    // int mul;
    // while(i<=10) {
    //     mul = n * i;
    //     cout<<n<<" * "<<i<<" = "<<mul<<endl;
    //     i++;
    // }
    // ---------------------------------------------------

    // Q12

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // int i = 1;

    // while(i<=n) {
    //     if(i%2 == 0) {
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }
    // -------------------------------------------------------

    // Q13

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // int i = 1;

    // while(i<=n) {
    //     if(i%2 != 0) {
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }
    // --------------------------------------------------------------

    // Q14

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // int i = 1;
    // int sum = 0;

    // while(i<=n) {
    //     if(i%2 == 0) {
    //         sum = sum + i;
    //     }
    //     i++;
    // }
    // cout<<"sum is: "<<sum<<endl;
    // ------------------------------------------------------

    // Q15

    //  int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // int i = 1;
    // int sum = 0;

    // while(i<=n) {
    //     if(i%2 != 0) {
    //         sum = sum + i;
    //     }
    //     i++;
    // }
    // cout<<"sum is: "<<sum<<endl;
    // -------------------------------------------------

    // Q16

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // int i = 1;

    // while(i<=n) {
    //     if(n%i == 0) {
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }
    // ----------------------------------------------------

    // Q17

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // int num = 1;
    // int mul = 1;

    // while(num <= n) {
    //     mul = mul * num;
    //     num++;
    // }
    // cout<<"factorial is: "<<mul<<endl;
    // --------------------------------------------------------

    // Q18

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // int i = 1;
    // int sum = 0;

    // while(i<n) {
    //     if(n%i == 0) {
    //         sum = sum + i;
    //     }
    //     i++;
    // }

    // if(sum == n) {
    //     cout<<"Number is perfect";
    // }
    // else {
    //     cout<<"Number is not perfect";
    // }
    // ----------------------------------------------------

    // Q19

    // int n;
    // cout << "Enter the number: ";
    // cin >> n;

    // // Special case for 0
    // if (n == 0) {
    //     cout << "Armstrong";
    //     return 0;
    // }

    // int original = n;
    // int count = 0;
    // int temp = n;

    // // Count digits
    // while (temp != 0) {
    //     temp /= 10;
    //     count++;
    // }

    // int sum = 0;
    // temp = n;

    // // Armstrong calculation
    // while (temp != 0) {
    //     int digit = temp % 10;
    //     sum += power(digit, count); //function***
    //     temp /= 10;
    // }

    // if (sum == original) {
    //     cout << "Armstrong";
    // } else {
    //     cout << "Not Armstrong";
    // }

    // return 0;
    // ------------------------------------------------------

    // Q20

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int first = 0;
    int second = 1;
    int next;

    int i = 1;

    while(i<=n) {
        next = first + second;
        cout<<first<<", ";
        first = second;
        second = next;
        i++;
    }
}
