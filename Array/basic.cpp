#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    // int arr[3] = {1,2,3};
    // cout<<arr[2]<<endl;

    // int first[30] = {2, 7};
    // printArray(first, 20);

    // int second[20] = {0};
    // printArray(second, 10); //output: 0 0 0 0 0 0 0 0 0 0

    // int third[20] = {1};
    // printArray(third, 10); // output: 1 0 0 0 0 0 0 0 0 0 0

    // int fourth[20];
    // int value = 1;
    // for(int i=0; i<10; i++) {
    //     fourth[i] = value;
    //     cout<<fourth[i]<<" ";
    // }
    // cout<<endl; // output: 1 1 1 1 1 1 1 1 1 1
}