

Q.  Rajesh wants to add elements of two arrays and display the merged array. Help Rajesh by writing a program to take input for two arrays and add both array
 elements and display the merged array in reverse order.


Note: This is a sample question asked in HCL recruitment.

Input format :
The first line of input consists of the size of the array n.

The second line of input consists of n elements inside the first array.

The third line of input consists of the size of the array m.

The fourth line of input consists of m elements inside the second array.

Output format :
The output prints the added and merged array elements, space-separated in reverse order.

Sample test cases :
Input 1 :
5
2 5 7 44 890
3
456 3 4
Output 1 :
890 44 11 8 458 
Input 2 :
7
23 40 120 70 100 150 220
4
40 5 10 18
Output 2 :
220 150 100 88 130 45 63 


////////////////////////////            USING ARRAYS         /////////////////////////////////////////



#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[100],arr2[100],arr3[100];
    int m,n,i=0,j=0,k=0;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    while(i<m && j<n){
        arr3[k]=arr1[i]+arr2[j];
        i++;
        j++;
        k++;
    }
    while(i<m){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n){
        arr3[k]=arr2[j];
    }
    if(m>n){
        for(int i=m-1;i>=0;i--){
            cout<<arr3[i]<<" ";
        }
    }
    else{
        for(int i=n-1;i>=0;i--){
            cout<<arr3[i]<<" ";
        }
    }
    return 0;
}
