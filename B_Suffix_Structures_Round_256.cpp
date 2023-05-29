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
  string str1, str2;
  cin >> str1 >> str2;
 vector<int>v(26), v1(26);
    forLoop(str1.size())v[str1[i] - 'a']++;
    forLoop(str2.size())v1[str2[i] - 'a']++;
    forLoop(26){
       if(v[i] < v1[i])reV("need tree");
   }
   if(str1.size() == str2.size()){
       reV("array");
   }
  if(str1.size() > str2.size())swap(str1, str2);
  ll n = str2.size();
  int k = 0;
  forLoop(n){
      if(str1[k] == str2[i]){
          k++;
          if(k == str1.size())break;
      }
  }
  if(k == str1.size())reV("automaton");

  cout << "both" << endl;

}
int main() {
    fast
    InputOutput
    // sieve();
    // divisors();
    ll t = 1;
    // smallPrimeF();
    // cin >> t;
    while (t--) {
        boda();
        // masking();
        // cout << "/n__--------------------------------------------__" << endl;
    }
}