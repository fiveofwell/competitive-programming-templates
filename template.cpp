// 2026/10/05テンプレート
// https://github.com/fiveofwell/competitive-programming-templates/blob/main/template.cpp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define rrep(i, n) for (ll i = (ll)(n) - 1; i >= 0; --i)
#define reps(i, l, r) for (ll i = (ll)(l); i < (ll)(r); ++i)
#define rreps(i, l, r) for (ll i = (ll)(r) - 1; i >= (ll)(l); --i)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

constexpr ll MOD = 998244353;
constexpr ll INF = 1LL << 60;

template <class T>
bool chmin(T& a, const T& b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

template <class T>
bool chmax(T& a, const T& b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

void YesNo(bool ok) {
    cout << (ok ? "Yes" : "No") << '\n';
}

ll modpow(ll a, ll n, ll mod = MOD) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

ll modinv(ll a, ll mod = MOD) {
    return modpow(a, mod - 2, mod);
}

ll modncr(ll n, ll r) {
    if (r < 0 || r > n) return 0;

    r = min(r, n - r);

    ll x = 1, y = 1;

    for (ll i = 0; i < r; i++) {
        x = x * (n - i) % MOD;
        y = y * (i + 1) % MOD;
    }

    return x * modinv(y) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    return 0;
}
