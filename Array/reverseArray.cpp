#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[10] = {2, 7, 5, 9};
    int brr[10] = {2, 3, 4, 5, 9};

    reverse(arr, 4);
    reverse(brr, 5);

    printArray(arr, 4);
    printArray(brr, 5);
}
