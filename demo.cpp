#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int A, B,C,D;
    cin >> A >> B >> C >> D;
    cout<<(A==B && B==C && C==D ? "YES" : "NO")<<'\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}