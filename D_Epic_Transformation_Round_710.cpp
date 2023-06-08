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

template<typename P>
ostream &operator<<(ostream &os, vector<P> v) {
    forE(v) {
        cout << k << " ";
    }
    return os;
}

//template<typename P>
//ostream & operator <<(ostream& os,vector<P>v){
//    forE(v){
//        cout << k << " ";
//    }
//    return os;
//}
//TODO: ahmed
bool sortbysec(pair<ll, ll> a, pair<ll, ll> b) {
    return (a.second <= b.second);
}

bool sortbyFirst(pair<ll, ll> a, pair<ll, ll> b) {
    return (b.first < a.first);
}

ll gcd(ll a, ll b) {
    if (b == 0)return a;
    return gcd(b, a % b);
}


bool isPrime(ll n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPrimeO(ll n) {
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
//ll dp[100000];
//
//ll fibonacci(ll n) {
//    if (n <= 1) return n;
//    if (dp[n])return dp[n];
//    return (dp[n] = fibonacci(n - 1) + fibonacci(n - 2))%=mod;
//}
// ctrl alt L
bool checkPil(string str){
    ll l = 0, r = str.size()-1;
    while(l < r){
        if(str[l] != str[r]){
            return false;
        }
        l++,r--;
    }
    return true;
}

void boda(){
    map<ll ,ll>m;
    ll n;
    cin >> n;
    forLoop(n){
        ll num;
        cin >> num;
        m[num]++;
    }
    if(m.size() == 1)reV(n);
    priority_queue<ll>p;
    ll count = 0;
    forE(m)p.push(k.second);
    while(p.size() > 1){
        ll v1 = p.top();
        p.pop();
        ll v2 = p.top();
        p.pop();
        count++;
        v1--;
        v2--;
        if(v1 > 0)p.push(v1);
        if(v2 > 0)p.push(v2);
    }
    if(p.empty())reV(0);
    cout << p.top() << endl;


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
//        fun();
        boda();
        // masking();
        // cout << "/n__--------------------------------------------__" << endl;
    }
}