// Author : abdelrhman
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <set>
#include <cmath>
#include <queue>
#include <algorithm>

#define ll  long long
#define eL '\n';
#define maxH(x) priority_queue<x>
#define minH(x) priority_queue<x, vector<x>, greater<x>>
#define forLoop(size) for (ll i = 0; i < (size); i++)
#define forReverse(size) for (size_t i = (size - 1); i >= 0; i--)
#define forE(v) for (auto k : v)
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fj(size) for (ll j = 0; j < (size); j++)
#define for1(size) for (int i = 1; i <= (size); i++)
#define popCo(msk) __builtin_popcountll(msk)
#define log(x)     __lg(x)
#define reV(x)  return(void(cout << x << endl));
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define InputOutput                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define EL cout << "\n";
#define yes cout << "YES" \
                << "\n";
#define no cout << "NO" \
                << "\n";
const ll mod = 1e9 + 7, inf = 1e9, N = 1e5 + 3, M = 5e1 + 5;
using namespace std;

void fun(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    forLoop(n)cin >> v[i];
    ll ans = n, sum = 0,sum2 = 0;
    for (ll i = 0; i < n; ++i) {
        ll len = i + 1, last = i;
        sum += v[i];
        sum2 = 0;
        bool f = true;
        for (ll j = i + 1; j < n; j++) {
            sum2 += v[j];
            if (sum2 > sum) {
                f = false;
                break;
            }
            if (sum2 == sum) {
                f = true;
                len = max(len, j - last);
                last = j;
                sum2 = 0;
            }
        }
        if (sum2 > 0) {
            f = false;
        }
        if (f) {
            ans = min(ans, len);
        }
    }
    cout << ans << endl;
}
int main() {
    fast
    InputOutput
    // sieve();
    // divisors();
    ll t = 1;
    // smallPrimeF();
    cin >> t;
    while (t--) {
//        boda();
        fun();
        // masking();
        // cout << "/n__--------------------------------------------__" << endl;
    }
}