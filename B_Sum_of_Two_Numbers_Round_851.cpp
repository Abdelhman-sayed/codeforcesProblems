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
    if(!(n&1)){
        cout << n/2 <<  " " << n/2 << endl;
        return;
    }
    bool f = false;
    string str1 = "", str2 = "";
    string str = to_string(n);
    forLoop(str.size()){
        int res = 0;
        if((str[i]- '0')%2){
            res = str[i] - '0';
            if(!f){
                int r = res/2;

                str2 += (r + '0');
                r++;
                str1 += (r + '0');
                f = true;
            }else{
                int r = res/2;
                str1 += (r + '0');
                r++;
                str2 += (r + '0');
                f = false;
            }
        }else{
            res = (str[i] - '0');
            str1 += ((res/2)+'0');
            str2 += ((res/2)+'0');
        }
    }
    ll n1 = stoll(str1);
    ll n2 = stoll(str2);
    cout << n1 << " " << n2 << endl;
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