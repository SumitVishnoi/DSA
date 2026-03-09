#include<iostream>
using namespace std;

int main() {
    int n;
    int arr[4] = {5, 2, 3, 1};
    n=4;

    for(int i=1; i<n; i++) {
        int temp = arr[i];

        int j = i-1;
        while(j>=0) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
            arr[j+1] = temp;
        }
    }
}