
You are working as a software developer for an online retail company. The company has tasked you with creating a program to merge two arrays that contain product IDs. The first array, stock, represents the product IDs of items currently in stock. 



The second array, cart, represents the product IDs of items in a customer's shopping cart. Your goal is to merge these two arrays into a single, sorted list of unique product IDs.

Input format :
The first line contains the size of the first array.

The second line contains the elements of the first array, in ascending order.

The third line contains the size of the second array.

The fourth line contains the elements of the second array, in ascending order.

Output format :
The output displays the merged array, which is the ascending order of the given array.

Code constraints :
The maximum size of each array is limited to 100 (const int MAX_SIZE = 100).

The size of each array should be a positive integer.

The elements of each array can be any integer.

The code assumes that the user will input valid integers as elements of the arrays.

Sample test cases :
Input 1 :
5
-1 2 3 4 5
4
-6 7 8 9
Output 1 :
-6 -1 2 3 4 5 7 8 9 
Input 2 :
6
2 4 6 8 10 12
5
2 4 9 10 11
Output 2 :
2 4 6 8 9 10 11 12 









////////////////////              USING ARRAYS              ///////////////////////


#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }
}

int main() {
    int size1, size2;
    cin >> size1;
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArr[i] << " ";
    }

    return 0;
}
