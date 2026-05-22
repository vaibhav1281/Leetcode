## Basics of recursion in C++

#### Recursion is a programming technique where a function calls itself in order to solve a problem. 
#### It typically involves a base case that stops the recursion and a recursive case that breaks the problem into smaller subproblems.
#### Here is an example of a simple recursive function in C++ that Prints Name N times
```c++
#include <bits/stdc++.h>
using namespace std;
int name(int i,int n){
    if(i>n)return 0; // Base case: if i is greater than n, stop the recursion
    cout<<"Name"<<endl; // Print "Name"
    name(i+1,n); // Recursive case: call the function with the next value of i
}

int main(){
    // int n; cin>>n; // You can uncomment this line to take input from the user
    name(1,5); // Call the function to print "Name" 5 times
    return 0;
}
```
#### In this example, the function `name` takes two parameters: `i` (the current count) and `n` (the total number of times to print "Name").
#### The function checks if `i` is greater than `n`. If it is, it returns 0, which serves as the base case to stop the recursion. 
#### Otherwise, it prints "Name" and calls itself with `i + 1`, which is the recursive case that continues to call the function until the base case is reached.  


```cpp
#include<bits/stdc++.h>
using namespace std;

void printName(int n){
    if(n==0){
        return;
    }
    cout<<"BIgGuy"<<endl;
    printName(n-1);
}
int main(){
    printName(10);
    return 0;
}

```