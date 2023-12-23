Question No: 4
reportIcon
Single File Programming Question
Problem Statement



Write a program to delete an element from an array. The program should prompt the user to enter the position of the element to be deleted and then display the updated array without that element.

Input format :
The first line of input contains an integer representing the size of the array.

The second line of input contains the elements of the array, separated by a space.

The last line of input contains an integer to enter the position of the element to be deleted.

Output format :
The output displays the original array before deletion and the updated array after deletion.



Refer to the sample output for formatting specifications.

Code constraints :
Maximum size of the array (MAX_SIZE = 100)

The size of the array should be a positive integer.

The position of the element to be deleted should be a valid position within the array bounds (between 1 and size, inclusive).

The elements of the array can be both positive and negative integers.

Sample test cases :
Input 1 :
5
1 2 3 4 5
3
Output 1 :
Original array: 1 2 3 4 5 
Updated array: 1 2 4 5 
Input 2 :
7
12 65 34 80 38 51 72
10
Output 2 :
Original array: 12 65 34 80 38 51 72 
Invalid position!
Input 3 :
5
8 -2 3 -4 6
4
Output 3 :
Original array: 8 -2 3 -4 6 
Updated array: 8 -2 3 6 


//USING VECTORS

#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int m;
    cin>>m;
    vector<int> a;
    cout<<"Original array :";
    for(int i=0;i<m;i++){
        int e;
        cin>>e;
        a.push_back(e);
    }
    for(int num:a){
        cout<<num<<" ";
    }
    cout<<endl;
    
    
    int pos;
    cin>>pos;
    
    if(pos>m- 1){
        cout<<"Invalid position!"<<endl;
    }
    else{
        cout<<"Updated array: ";
        a.erase(a.begin() +pos- 1);
        for(int num:a){
        cout<<num<<" ";
        }
    }
    cout<<endl;
    
    
    return 0;
}
