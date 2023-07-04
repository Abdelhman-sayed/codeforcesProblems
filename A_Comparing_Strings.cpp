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

template<typename P>
ostream &operator<<(ostream &os, vector<P> v) {
    forE(v) {
        cout << k << " ";
    }
    return os;
}

void fun()
{
    string str1, str2;
    cin >> str1 >> str2;
    vector<int>v1(26);
    vector<int>v2(26);
    if(str1.size() != str2.size()){
        no
        return;
    }
    forLoop(str1.size())v1[str1[i] - 'a']++;
    forLoop(str2.size())v2[str2[i] - 'a']++;
    forLoop(26){
        if(v1[i] != v2[i]){
            no
            return;
        }
    }
    ll count = 0;
    forLoop(str1.size()){
        if(str1[i]!= str2[i])count++;
    }
    if(count == 2){
        yes
        return;
    }
    no
}
int main() {
    fast
    InputOutput
    // sieve();
    // divisors();
    ll t = 1;
    // smallPrimeF();
//    cin >> t;
    while (t--) {

//        boda();
        fun();
//         masking();
        // cout << "/n__--------------------------------------------__" << endl;
    }
}