#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (cin >> n){
        cout << "Processed Input = " <<  n*2 << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}