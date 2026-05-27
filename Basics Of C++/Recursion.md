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

#### Eg.2
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
#### Printing 1 to N
##### Eg.1.
```cpp


```

```c++
#include<bits/stdc++.h>
using namespace std;

void printN(int n){
    static int cnt =1;
    if(cnt>n) return;
    cout<<cnt<<" ";
    cnt++;
    printN(n);
}

int main() {
    printN(10);
    return 0;
}
```
#### Printing  1 tO N
```cpp
#include<bits/stdc++.h>
using namespace std;

void printN(int i, int n){
    if(i>n)return;
    cout<<i<<" "; // this will print in normal order
    printN(i+1,n);
    cout<<i<<" "; // this will print in reverse order
}
int main(){
    printN(1,5);
}

```

#### Sum 1 to N
```cpp
#include<bits/stdc++.h>
using namespace std;

int sumAll(int a,int n){
    
    if(a>n)return 0;
    return a+sumAll(a+1,n);
}
int main(){
    cout<<sumAll(1,5); // This will now print 15 
}
```
* sumAll(1, 5) $\rightarrow 1 +$ sumAll(2, 5)
* sumAll(2, 5) $\rightarrow 2 +$ sumAll(3, 5)
* sumAll(3, 5) $\rightarrow 3 +$ sumAll(4, 5)
* sumAll(4, 5) $\rightarrow 4 +$ sumAll(5, 5)
* sumAll(5, 5) $\rightarrow 5 +$ sumAll(6, 5) 
* sumAll(6, 5) $\rightarrow 0$ (Base case triggered because $6 > 5$)

$$1 + 2 + 3 + 4 + 5 + 0 = 15$$