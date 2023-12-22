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


//USING VECTORS


#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int m;
    cin>>m;
    vector<int> a;
    for(int i=0;i<m;i++){
        int e;
        cin>>e;
        a.push_back(e);
    }
    
    sort(a.begin(),a.end());
    
    cout<<"Second Smallest Element: "<<a[1]<<endl;;
    
    return 0;
} 
