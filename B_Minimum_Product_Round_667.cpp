// Author : abdelrhman
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <set>
#include <cmath>
#include <algorithm>

#define ll long long
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
void boda(){
    ll a, a1, b, b1, x, y, n, n1;
    cin >> a >> b >> x >> y >> n;
    a1 = a;
    b1 = b;
    n1 = n;
    ll d1 = a-x, d2 = b-y;
    ll dd1 = a1-x,dd2 = b1-y;
    if(a < b){
        ll d = min(d1,n);
        a -= d;
        n -= d;
        ll dd = min(d2, n);
        b -= dd;
        n -= dd;
    }else if(a > b){
        ll d = min(d2,n);
        b -= d;
        n -= d;
        ll dd = min(d1, n);
        a -= dd;
        n -= dd;
    }else{
        if(x >= y){
            ll dd = min(d2, n);
            n-= dd;
            b -= dd;
            ll d =  min(d1, n);
            n -= d;
            a -= d;
        }else{
            ll d = min(d1, n);
            n-= d;
            a -= d;
            ll dd =  min(d2, n);
            n -= dd;
            b -= dd;
        }
    }

    //cout << a << " " << n << endl;

    if(a1 > b1){
        ll d = min(dd1,n1);
        a1 -= d;
        n1 -= d;
        ll dd = min(dd2, n1);
        b1 -= dd;
        n1 -= dd;
    }
    else if(b1 > a1){
        ll d = min(dd2,n1);
        b1 -= d;
        n1 -= d;
        ll dd = min(dd1, n1);
        a1 -= dd;
        n1 -= dd;
    }else{
        if(x >= y){
            ll d = min(dd1, n1);
            a1 -= d;
            n1 -= d;
            b1 -= min(dd2, n1);
            n1 -= min(dd2, n1);;
        }else{
            ll d = min(dd2, n1);
            b1 -= d;
            n1 -= d;

            a1 -= min(dd1, n1);;
            n1 -= min(dd1, n1);;
        }
    }
//    ll ans = min(res, res2);
//    ans = min(ans, a*b);
    cout << min(a*b, a1*b1) << endl;

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
        boda();
        // masking();
        // cout << "/n__--------------------------------------------__" << endl;
    }
}