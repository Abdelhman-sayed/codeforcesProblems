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
    map<ll, pair<ll ,ll>>m;
    set<ll>s;
    ll n, t;
    cin >> n >> t;
    forLoop(n){
        ll num;
        cin >> num;
        if(!s.count(num)){
            m[num] = {i, i};
            s.insert(num);
        }else{
            if(m[num].second <= i){
                m[num].second = i;
            }else{
                m[num].first = i;
            }
        }
    }
    while(t--){
        ll num1 , num2;
        cin >> num1 >> num2;
        if(!s.count(num1) || !s.count(num2)){
            no
            continue;
        }else{
            if(m[num2].second > m[num1].first){
                yes
                continue;
            }
            no
        }
    }
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