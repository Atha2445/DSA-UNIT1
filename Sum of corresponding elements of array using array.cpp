You are working on a project that involves merging two arrays and performing the sum between corresponding elements. The arrays represent the 
daily sales of two different products over a week.



Your task is to write a program that takes input from the user for the two arrays and performs the sum between corresponding elements.



Note: This is a sample question asked in TCS recruitment.

Input format :
The first line of input consists of the size of the array n.

The second line of input consists of n elements inside the first array.

The third line of input consists of the size of the array m.

The fourth line of input consists of m elements inside the second array.

Output format :
The output represents the sum between corresponding elements, separated by space.

Sample test cases :
Input 1 :
5
1 2 3 4 5
6
6 7 8 9 10 11
Output 1 :
7 9 11 13 15 11 
Input 2 :
3
1 2 3
2
4 5
Output 2 :
5 7 3 





  //////////////////////////////////                 USING ARRAY            ////////////////////////////////

  #include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[100],arr2[100],arr3[200];
    int m,n,k=0,i=0,j=0;
    
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
        k++;
        j++;
    }
    while(i<m){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    if(m>n){
        for(i=0;i<m;i++){
        cout<<arr3[i]<<" ";
        }
    }
    
    else{
        for(i=0;i<n;i++){
        cout<<arr3[i]<<" ";
            }
        }

  return 0;
    }
    
