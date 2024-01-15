A library has two arrays representing two different sections of books: fiction and non-fiction. Merge the arrays to create a single catalog that includes
 all the books available in the library.

Input format :
The first line of input contains an integer n, which represents the number of fiction books.

The next n lines of input contain the titles of the fiction books, separated by a line space.

The next line of input contains an integer m, which represents the number of non-fiction books.

The next m lines of input contain the titles of the non-fiction books, separated by a line space.

Output format :
The output displays the merged catalog, which is a combination of fiction and non-fiction books.



Refer to the sample output for formatting specifications.

Code constraints :
Maximum size of each array (MAX_SIZE = 100).

The number of fiction and non-fiction books should be non-negative integers.

The titles of the books can contain any printable character.

The code assumes that the user will input valid titles for the books.

Sample test cases :
Input 1 :
3
Harry Potter and the Sorcerer's Stone
To Kill a Mockingbird
Pride and Prejudice
2
A Brief History of Humankind
A Memoir
Output 1 :
Catalog: 
Harry Potter and the Sorcerer's Stone
To Kill a Mockingbird
Pride and Prejudice
A Brief History of Humankind
A Memoir
Input 2 :
3
The Great Gatsby
Brave New World
To Kill a Mockingbird
3
A Brief History of Humankind
A Memoir
The Immortal Life of Henrietta Lacks
Output 2 :
Catalog: 
The Great Gatsby
Brave New World
To Kill a Mockingbird
A Brief History of Humankind
A Memoir
The Immortal Life of Henrietta Lacks



SOLUTION : --


#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

int main(){
    
    string fiction[MAX_SIZE],nonFicton[MAX_SIZE],catlog[MAX_SIZE*2];
    int n,m;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,fiction[i]);
    }
    cin>>m;
    cin.ignore();
    for(int i=0;i<m;i++){
        getline(cin,nonFicton[i]);
    }
    int size=m+n;
    for(int i=0;i<size;i++){
        if(i<n){
            catlog[i]=fiction[i];
        }
        else{
            catlog[i]=nonFicton[i-n];
        }
    }
    cout<<"Catlog: "<<endl;
    for(int i=0;i<size;i++){
        cout<<catlog[i]<<endl;
    }
    return 0;
}
