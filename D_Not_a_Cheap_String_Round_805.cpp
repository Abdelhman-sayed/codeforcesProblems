// Author : abdelrhman
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <set>
#include <cmath>
#include <algorithm>

#define ll  long long
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
    string str, s = "";
    cin >> str;
    ll n = str.size(), q, total = 0;
    cin >> q;
    map<char, int>m,m1;
    forLoop(n){
        total += ((str[i] - 'a')+1);
        m[str[i]]++;
        m1[str[i]]++;
    }
    s = str;
    sort(all(s));
    ll ans = 0, ans2 = 0, T = total, T1 = total, i = 0;

    while(T > q && ans <= n-1){
        T -= ((s[i] - 'a')+1);
        m[s[i]]--;
        ans++;
        i++;
    }
    i = n-1;
    while(T1 > q && ans2 <= n-1){
        T1 -= ((s[i] - 'a')+1);
        m1[s[i]]--;
        ans2++;
        i--;
    }
    string res = "";
    if(min(ans, ans2) == ans){
        forLoop(n){
            if(m[str[i]] > 0){
                res += str[i];
                m[str[i]]--;
            }
        }
    }else{
        forLoop(n){
            if(m1[str[i]] > 0){
                res += str[i];
                m1[str[i]]--;
            }
        }
    }
    cout << res << endl;
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