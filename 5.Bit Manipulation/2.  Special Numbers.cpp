//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;

ll binPower(ll x, ll y, ll p) {
    ll ans = 1;
    x = x % p;
    if (x == 0 || x == 1) return x;
    while (y > 0) {
        if (y & 1) // 0th bit is set
            ans = (ans * x) % p; // contributes
        y = y >> 1;
        x = (x * x) % p;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll testcases;
    cin >> testcases;
    while (testcases--) {
        ll n, k, ans = 0;
        cin >> n >> k;

        for (ll bit = 0; bit < 32; bit++) {
            if (k & (1 << bit))
                ans = (ans + binPower(n, bit, MOD)) %MOD;
        }

        cout << ans << "\n";
    }
    return 0;
}