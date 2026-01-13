#include <iostream>
using namespace std;

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    // Q26

    // int a, b;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;

    // int lcm = (a * b) / gcd(a, b);

    // cout << "LCM = " << lcm << endl;
    // return 0;
    // ------------------------------------------------

    // Q27

    // int a, b;
    // cout<<"Enter the value of a and b: ";
    // cin>>a>>b;

    // while(b != 0){
    //     int result = a % b;
    //     a = b;
    //     b = result;
    // }
    // cout<<"GCD/HCF: "<<a<<endl;
    // --------------------------------------------------

    // Q28 (a)

    // int a,b;
    // cout<<"Enter the value a and b: ";
    // cin>>a>>b;

    // int temp;
    // temp = b;
    // b = a;
    // a = temp;

    // cout<<"Swapped: "<<a<<" "<<b<<endl;
    // --------------------------------------------
    // (b)

    // int a,b;
    // cout<<"Enter the value a and b: ";
    // cin>>a>>b;

    // a = a + b;
    // b = a - b;
    // a = a - b;

    // cout<<"Swapped: "<<a<<" "<<b<<endl;
    // ----------------------------------------------

    // Q29

    // int n;
    // cout << "Enter the number: " << endl;
    // cin >> n;

    // if (n > 0 && (n & (n - 1)) == 0) {
    //     cout << "Power of 2";
    // } else {
    //     cout << "Not a power of 2";
    // }
    // -----------------------------------------

    // Q30

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    cout << "Absolute value = " << n;
}
