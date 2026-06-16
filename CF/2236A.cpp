#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int& i : v) cin >> i;

    int a = *max_element(v.begin(), v.end());
    int b = *min_element(v.begin(), v.end());

    cout << (a - b + 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1; 
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cerr << "Case #" << i << "\n";
        solve();
        // cerr << "--------------------------------------------\n";
    }
    return 0;
}
