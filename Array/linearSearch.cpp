#include<iostream>
using namespace std;

// bool search(int arr[], int size, int key) {
//     for(int i=0; i<size; i++) {
//         if(arr[i] == key) {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main() {
//     int key, size;
//     cout<<"Enter the size of array: ";
//     cin>>size;

//     int arr[20];

//     for(int i=0; i<size; i++) {
//         cin>>arr[i];
//     }

//     cout<<"Enter the key: ";
//     cin>>key;

//     int ans = search(arr, 5, key);

//     if(ans) {
//         cout<<"Key is present";
//     }
//     else {
//         cout<<"Key is absent";
//     }

// }

// -----------------------------------------

//////////////// sum of all elements /////////////////////

int sumOfArray(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main() {
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int arr[20];

    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    int ans = sumOfArray(arr, size);

    cout<<"Sum is: "<<ans<<endl;

}