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
   string str;
   map<ll, deque<ll>>v;
   cin >> n >> m;
   cin >> str;
   forLoop(n){
    v[str[i]-'a'].push_back(i);
   }
    forLoop(m)
    {
        char ch, reC;
        cin >> ch >> reC;
        swap(v[ch-'a'], v[reC-'a']);
    }
    forE(v){
        forLoop(k.second.size()){
            str[k.second[i]] = (char)(k.first + 'a');
        }
    }
   cout << str << endl;
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

