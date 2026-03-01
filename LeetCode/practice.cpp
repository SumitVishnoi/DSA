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

// int main() {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int num = 2;
//     int count = 0;
//     for(int i=2; i<n; i++) {
//         for (int j=i; j<num; j++) {
//             if(num%j == 0) {
//                 return 0;
//             }
            
//         }
//         count++;
// }

// --------------------------------------

// ------------three sum----------------//
// void printArray(int arr[], int n) {
//     for(int i=0; i)
// }
// void threeSum(int arr[], int n) {
//     int ans = 0;
//     for(int i=0; i<n; i++) {
//         // cout<<"first: "<<i<<endl;
//         for(int j=i+1; j<n; j++) {
//             // cout<<"second: "<<j<<endl;
//             for(int k=j+1; k<n; k++) {
//                 if(arr[i] + arr[j] + arr[k] == 0) {
//                     cout<<i<<j<<k<<endl;
//                 }
//             }
//         }
//     }
// }

// int main(){
//     int arr[6] = {-1, 0, 1, 2, -1, -4};

//     threeSum(arr, 6);

// }



