#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}

//to print sum of row
void printSum(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

//to print sum of col
// void printColSum(int arr[][4], int row, int col) {
//     for(int i=0; i<col; i++) {
//         int sum = 0;
//         for(int j=0; j<row; j++) {
//             sum += arr[j][i];
//         }
//         cout<<sum<<" ";
//     }
//     cout<<endl;
// }

//to find largest sum of row
// int largestRowSum(int arr[][4], int row, int col) {
//     int maxi = INT32_MIN;
//     int rowIndex = -1;
//     for(int i=0; i<row; i++) {
//         int sum = 0;
//         for(int j=0; j<col; j++) {
//             sum += arr[i][j];
//         }
       
//         if(sum > maxi) {
//             maxi = sum;
//             rowIndex = i;
//         }
//     }
//     return rowIndex;
// }

//to find largest sum of row
int smallestRowSum(int arr[][4], int row, int col) {
    int mini = INT32_MAX;
    int rowIndex = -1;
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum += arr[i][j];
        }
       
        if(sum < mini) {
            mini = sum;
            rowIndex = i;
        }
    }
    cout<<"min"<<mini<<endl;
    return rowIndex;
}

int main() {
    int arr[3][4];

    //taking input row wise
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cin>>arr[row][col];
        }
    }

    //taking input column wise
    // for(int col=0; col<4; col++) {
    //     for(int row=0; row<3; row++) {
    //         cin>>arr[row][col];
    //     }
    // }

    //printing the 2-D array
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //for searching the element

    // int target;
    // cout<<"Enter the element to search: ";
    // cin>>target;

    // if(isPresent(arr, target, 3, 4)) {
    //     cout<<"Element found";
    // }
    // else {
    //     cout<<"Element not found";
    // }


    //for row wise sum
    printSum(arr, 3, 4);

    //for col wise sum
    // printColSum(arr, 3, 4);

    // for finding the largest sum of row
    // int ans = largestRowSum(arr, 3, 4);

    // cout<<"Largest index of sum of row: "<<ans<<endl;

    // for finding the smallest sum of row
    int ans = smallestRowSum(arr, 3, 4);

    cout<<"Smallest index of sum of row: "<<ans<<endl;

}