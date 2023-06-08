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
    int zeros, ones;
    cin >> zeros >> ones;
    string str;
    cin >> str;
    int c = 0;
    if(str.size() == 1){
        if(str.back() == '1' && (ones != 1 || zeros != 0))reV(-1);
        if(str.back() == '0' && (ones != 0 || zeros != 1))reV(-1);
        if(str.back() == '?' && ones + zeros > 1)reV(-1);

    }
    forLoop(str.size()) {
        if (str[i] == '?')c++;
        if (str[i] == '1')ones--;
        if (str[i] == '0')zeros--;
    }
    int l = 0, r = str.size()-1;
    bool f = true;
    while(l < r){
        if(str[l] == '?' && str[r] != '?'){
            str[l] = str[r];
            if(str[r] == '1' && ones > 0)ones--;
            else if(str[r] == '0' && zeros > 0) zeros--;
            else {
                f = false;
                break;
            }
            c--;
        }
        if(str[l] != '?' && str[r] == '?'){
            str[r] = str[l];
            str[l] = str[r];
            if(str[l] == '1' && ones > 0)ones--;
            else if(str[l] == '0' && zeros > 0) zeros--;
            else {
                f = false;
                break;
            }
            c--;
        }
        l++;
        r--;
    }
    l = 0, r = str.size()-1;
    while(l < r){
        if(str[l] == '?' && str[r] == '?'){
            if(zeros >= 2) {
                str[l] = '0';
                str[r] = '0';
                zeros -= 2;
            }
            else if(ones >= 2) {
                str[l] = '1';
                str[r] = '1';
                ones -= 2;
            }else{
                f = false;
                break;
            }
        }
        l++;r--;
    }
    if(str.size()%2 && str[(int) (str.size() / 2)] == '?'){
        if(zeros > 0) { str[(int) (str.size() / 2)] = '0'; zeros--;}
        if(ones > 0) {
            str[(int) (str.size() / 2)] = '1';
            ones--;
        }
    }
    if(zeros == 0 && ones == 0 && f && checkPil(str)){
    cout << str << endl;
    }else {
        cout << -1 << endl;
    }
    //if(!f)reV(-1);
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