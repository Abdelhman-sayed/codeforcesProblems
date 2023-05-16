// Author : abdelrhman
#include <bits/stdc++.h>
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
const ll mod = 1e9 + 7, inf = 1e9, N = 1e5+3, M = 5e1 + 5;
using namespace std;
 ll gcd(ll a, ll b){
     if(b == 0)return a;
     return gcd(b, a%b);
 }


 bool isPrime(ll n)
 {
     for (int i = 2; i * i <= n; i++)
     {
         if (n % i == 0)
         {
             return false;
         }
     }
     return true;
 }
bool isPrimeO(ll n)
{
    for (int i = 3; i * i <= n; i+=2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void boda()
{
    ll n ,count = 0, sum = 0, ans = 0;
    cin >> n;
    if(n%2 == 0 && (n/2)/2 != 0){
        reV(2);
    }
    if(n%2 == 0){
        reV(n/2);
    }
    if(isPrimeO(n)){
        cout << 1 << endl;
        return;
    }
    n-=2;
    if(isPrimeO(n)){
        cout << 2 << endl;
    }else{
        cout << 3 << endl;
    }
//    cout << ans << endl;
}
int main()
{
    fast
    InputOutput
    // sieve();
    // divisors();
    ll t = 1;
    // smallPrimeF();
//     cin >> t;
    while(t--)
    {
        boda();
        // masking();
        // cout << "/n__--------------------------------------------__" << endl;
    }
}