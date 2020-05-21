// 230B- T-primes

#include <bits/stdc++.h>
//Anshul1507
typedef long long int ll;
#define COOL std::ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define SORT(v) sort(v.begin(), v.end())
#define REVERSE(v) reverse(v.begin(), v.end())
#define maxv(v) max_element(v.begin(), v.end())
#define minv(v) min_element(v.begin(), v.end())
#define GCD(m, n) __gcd(m, n)
#define LCM(m, n) m *(n / GCD(m, n))
#define inputarr(a, n) for (int i = 0; i < n; i++)cin >> a[i]
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, a, n) for (int i = a; i <= (n); ++i)
#define repD(i, a, n) for (int i = a; i >= (n); --i)
#define vec vector<ll>
#define v_pair vector<pair<ll, ll>>
#define display(x) for (auto &a : x)cout << a << " "; cout << endl;
#define debug(x) cout << x << endl;
#define debug_(x) cout << x << " ";
#define debug__(x, y) cout << x << " " << y << endl;
using namespace std;

const int maxN = (int)6e5 + 100;
const int MOD = (int)1000000007;
int dp[222222][26];
vector<int> v[222222];
pair<int, int> p[maxN];
set<ll> st;

/*----------------------------Function Part------------------*/
template <typename T>
  std::string NTS ( T Number )
  {
     std::ostringstream ss;
     ss << Number;
     return ss.str();
  }

ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

/*-------------------------- Main Code --------------------------*/

ll x, x1, x2, tmp, a, b, c, n, m, cnt = 0, idx = 0, k, len, res = 0, ans = 0;
string s, s1, s2;
char ch[10000];

int PLAY()
{
   cin >> s;
   idx=-1;
   x=(int)s[s.length()-1];
   rep(i,s.length()-1){
      if((int)s[i]%2==0){
         if((int)s[i]<x){
            swap(s[i],s[s.length()-1]);
            debug(s);
            return 0;
         }else{
            idx=i;
         }
      }
   }
   if(idx==-1){
      debug(-1);
   }else{
      swap(s[idx],s[s.length()-1]);
      debug(s);
   }
   
   return 0;
}


int main()
{
    COOL
    int t=1;
    // cin >> t;
    while(t--){
        PLAY();
    }
    return 0;
}