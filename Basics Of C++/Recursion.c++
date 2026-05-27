#include<bits/stdc++.h>
using namespace std;

int sumAll(int a,int n){
    
    if(a>n)return 0;
    return a+sumAll(a+1,n);
}
int main(){
    cout<<sumAll(1,5); // This will now print 15 
}