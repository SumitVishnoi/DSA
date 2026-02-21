#include<iostream>
using namespace std;

int func(int arr[], int n) {
    int num = 0;
    int ans;
    for(int i=0; i<n; i++) {
        if(arr[i] == num) {
            num++;
            i=0;
        }
        ans = num;
    }
    return ans;
}

int main() {
    int arr[10] = {3, 0, 1};

    int ans = func(arr, 3);

    cout<<ans<<endl;

}