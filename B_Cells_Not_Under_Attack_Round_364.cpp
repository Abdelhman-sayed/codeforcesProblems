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
const ll mod = 1e9 + 7, inf = 1e9, N = 1e5+3, M = 5e1 + 5;
using namespace std;

void fun(){
    ll n, m;
    cin >> n >> m;
    ll countUn = 0;
    set<ll>sR, sC;
    ll len = n, wid = n;
    forLoop(m){
        ll r, c;
        cin >> r >> c;
        if(sR.count(r) == 0 && sC.count(c) != 0)
        {
            sR.insert(r);
            len--;
        }else if(sR.count(r) == 0 && sC.count(c) == 0){
            sR.insert(r);
            sC.insert(c);
            len--;
            wid--;
        }
        else if(sR.count(r) != 0 && sC.count(c) == 0)
        {
            sC.insert(c);
            wid--;
        }
        cout << len * wid << " ";
    }
    cout << endl;
}

int main()
{
    fast
    InputOutput
    // sieve();
    // divisors();
    ll t = 1;
    // smallPrimeF();
    // cin >> t;
    while(t--)
        {
            fun();
            // boda();
            // masking();
            // cout << "/n__--------------------------------------------__" << endl;
    }   
}
