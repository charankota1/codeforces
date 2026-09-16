#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, q;
    cin >> n >> q;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    vector<long long> diff(n + 1, 0);
 
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;
 
        diff[u - 1]++;
        diff[v]--;
    }
 
    vector<long long> freq(n);
 
    long long cur = 0;
    for (int i = 0; i < n; i++) {
        cur += diff[i];
        freq[i] = cur;
    }
 
    sort(a.begin(), a.end());
    sort(freq.begin(), freq.end());
 
    long long ans = 0;
 
    for (int i = 0; i < n; i++) {
        ans += a[i] * freq[i];
    }
 
    cout << ans << '
';
 
    return 0;
}