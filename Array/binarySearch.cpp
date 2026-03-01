#include<iostream>
using namespace std;


//Book allocation
// bool isPossible(int arr[], int m, int n, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;
    
//     for(int i=0; i<n; i++) {
//        if(pageSum + arr[i] <= mid) {
//          pageSum = pageSum + arr[i];
//        }
//        else {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid) {
//                 return false;
//             }
//             pageSum = arr[i];
//        }
//     }
//     return true;
// }

// int main() {
//     int arr[4] = {10, 20, 30, 40};
//     int m, n = 4;// "n" is the size of array
//     cout<<"Enter number of students: ";
//     cin>>m;
//     int s = 0;
//     int sum = 0;
    
//     for(int i=0; i<4; i++ ){
//         sum = sum + arr[i];
//     }

//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
//     while(s <= e) {
//         if(isPossible(arr, m, n, mid)) {
//             ans = mid;
//             e = mid - 1;
//         }
//         else {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     cout<<ans;
//    return ans;
// }


// ------------------------------------------------------

//Pivot element

// int pivotIdx(int arr[], int n) {
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s < e) {
//         if(arr[mid] >= arr[0]) {
//             s = mid + 1;
//         }
//         else {
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main() {
//     int arr[6] = {7, 9, 1, 2, 3};

//     cout<<pivotIdx(arr, 6)<<endl;

//     return 0;
// }


// ----------------------------------------------------

int pivot(int arr[], int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;
    int left = 0;
    int right = 0;
    while(s < e) {
        for(int i=0; i<mid; i++) {
            left = left + arr[i];
        }
        cout<<"left"<<left<<endl;

        for(int j=mid+1; j<=e; j++) {
            right = right + arr[j];
        }
        if(left == right) {
            ans = mid;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    int arr[6] = {1, 7, 3, 6, 5, 6};

    int ans = pivot(arr, 6);

    cout<<ans<<endl;
}