#include <bits/stdc++.h>
using namespace std;

stack<int>s;
void stk() {
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);
}
int main() {
    stk();
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}