Question No: 5
reportIcon
Single File Programming Question
Problem Statement



Write a program to insert an element at a specific position in an array. The program should prompt the user to enter the position and the value to be inserted and then display the updated array.

Input format :
The first line of input consists of an integer, which represents the size of the array.

The second line of input consists of the elements of the array, separated by space.

The third line of input consists of an integer, which represents the position where they want to insert a new element.

The last line of input consists of an integer, which represents the value to be inserted at the specified position.

Output format :
The output displays the original array before insertion and the updated array after insertion.



Refer to the sample output for formatting specifications.

Code constraints :
Maximum size of the array (MAX_SIZE = 100).

The size of the array should be a positive integer.

The position where the user wants to insert the element should be a valid position within the array bounds (between 1 and size + 1, inclusive).

The elements of the array can be both positive and negative integers.

Sample test cases :
Input 1 :
5
1 2 3 4 5
3
10
Output 1 :
Original array: 1 2 3 4 5 
Updated array: 1 2 10 3 4 5 
Input 2 :
5
1 2 3 4 5
8
10


//USING ARRAY

#include<iostream>
using namespace std;
int main(){
    const int maxSize=100;
    int arr[maxSize];
    int size;
    cin>>size;
    cout<<"Original array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pos;
    cin>>pos;
    int ele;
    cin>>ele;
    if(pos<0 || pos>size){
        cout<<"Invalid position!"<<endl;
    }
    else{
        for(int i=size;i>pos-1;i--){
            arr[i]=arr[i-1];
        }
        arr[pos-1]=ele;
        size++;
        cout<<"Updated array: ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
