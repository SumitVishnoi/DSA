#include<iostream>
using namespace std;

int getMin(int arr[], int n) {
    // int min = INT32_MAX;
    int mini = INT32_MAX;

    for(int i=0; i<n; i++) {
        // if(arr[i] < min) {
        //     min = arr[i]; 
        // }

        mini = min(mini, arr[i]);
    }
    // return min;
    return mini;
}

int getMax(int arr[], int n) {
    // int max = INT32_MIN;
    int maxi = INT32_MIN;

    for(int i=0; i<n; i++) {
        // if(arr[i] > max) {
        //     max = arr[i];
        // }

        maxi = max(maxi, arr[i]);
    }
    // return max;
    return maxi;
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[100];

    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    int max = getMax(arr, size);
    int min = getMin(arr, size);

    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min<<endl;
}