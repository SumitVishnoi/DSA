#include<iostream>
#include<math.h>
using namespace std;

// bool isHappy(int n) {
//     int sum = 0;
//     while(sum != 0) {
//         int a = n%10;
//         sum = sum + pow(a, 2);
//         n = n/10;
//     }

//     if(sum == 1) {
//         return true;
//     }
//     return false;
// }

// int main() {
//     int n;
//     cout<<"Enter the number: ";
//     cin>> n;

//     cout<<isHappy(n)<<endl;
// }
// ------------------------------------------------------

// int main() {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int count = 0;
//     for(int i=2; i<n; i++) {
//         if(n%i == 0) {
//             cout<<"Not prime"<<endl;
//         }
//         else {
//             cout<<"Prime"<<endl;
            
//         }
//     }
// }


// -----------------------------------------

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int num = 2;
    int count = 0;
    for(int i=2; i<n; i++) {
        for (int j=i; j<num; j++) {
            if(num%j == 0) {
                return 0;
            }
            
        }
        count++;
}
