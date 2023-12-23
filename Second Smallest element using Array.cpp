Question No: 3
reportIcon
Single File Programming Question
Problem Statement



The data analytics company you work for has received a dataset containing integer values. They want to analyze the data and determine the second smallest value present in the dataset. You have been assigned the task of developing a program to efficiently find and display the second smallest element in the given array.



Note: This kind of question will be helpful in clearing Capgemini recruitment.

Input format :
The first line of input prompts the user to specify the size of the array.

The second line of input prompts the user to provide the elements of the array, separated by spaces.

Output format :
The program will display the second smallest element present in the array.



Refer to the sample input and output formatting specifications.

Code constraints :
The array size will be between 2 and 100 (inclusive).

The array will contain unique integer values.

Sample test cases :
Input 1 :
5
4 2 7 1 3
Output 1 :
Second Smallest Element: 2
Input 2 :
8
10 6 2 9 5 7 3 8
Output 2 :
Second Smallest Element: 3



//USING ARRAY



#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size - 1;i++){
        for(int j=0;j<size-i- 1;j++){
            if(arr[j]>arr[j+ 1]){
                int s=arr[j];
                arr[j]=arr[j+ 1];
                arr[j+ 1]=s;
            }
        }
    }
    cout<<"Second Smallest Enement: "<<arr[1]<<endl;
    
    
    return 0;
}
