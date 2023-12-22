Imagine you are developing a text editor application, and you need to implement a feature that allows users to insert a new character at a specified position in an array of characters. 



Write a program that takes input from the user, including the size of the array, the characters for the array, the position for insertion, and the character to be inserted. The program should shift the elements of the array to make space for the new character and insert it at the specified position. 



Finally, the program should display the updated array after the insertion.

Input format :
The first line contains an integer representing the size of the array.

The second line contains the characters for the array, separated by spaces.

The third line contains an integer representing the position for insertion.

The fourth line contains a single character representing the character to be inserted.

Output format :
The output should display the updated string after the insertion, separated by spaces.

Code constraints :
The maximum size of the array is 100.

The size of the array should be a positive integer.

The position for insertion should be a valid index in the range from 0 to size - 1.

Sample test cases :
Input 1 :
5
a b c d e
2
X
Output 1 :
Updated array after insertion: a b X c d e 
Input 2 :
3
p q r
0
Z
Output 2 :
Updated array after insertion: Z p q r 


//USING ARRAY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    char arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int pos;
    char character;
    cin>>pos;
    cin>>character;
    for(int i=size;i>pos;i--){
        arr[i]=arr[i- 1];
    }
    arr[pos]=character;
    size++;
    cout<<"Updated array after insertion: ";
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
