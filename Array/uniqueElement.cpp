#include<iostream>
using namespace std;

int uniqueElem(int arr[], int n) {
    int ans = 0;
    for(int i=0; i<n; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int arr[10] = {2, 2, 3, 3, 4};
    int answer = uniqueElem(arr, 5);

    cout<<"Unique element of array is: "<<answer<<endl;
}