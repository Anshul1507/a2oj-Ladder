// 492B-Vanya and Lanterns

#include<bits/stdc++.h>
#define ll long long
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define PI 3.14159265358979323844
#define SORT(v) sort(v.begin(),v.end())
#define REVERSE(v) reverse(v.begin(),v.end()) 
#define maxv(v) max_element(v.begin(),v.end())
#define minv(v) min_element(v.begin(),v.end())
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) m*(n/GCD(m,n))
#define inputarr(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define vec vector<ll>
#define v_pair vector<pair<ll,ll>>
#define display(x) for(auto& a : x) cout<<a<<" "; cout << endl;
const int maxN = (int)3e5 + 100;
const unsigned int Modu = 1000000007;
int a[maxN];
using namespace std;

//--------------------------------Templates---------------------------------
// index based set element
template <class ForwardIterator>
ForwardIterator next (ForwardIterator it,
typename iterator_traits<ForwardIterator>::difference_type n = 1);
 
 
//--------------------------------MAIN SOLUTION-----------------------------
void solve(){

   ll n,l;
   cin >> n >> l;
   
   vec s;
   for(int i=0;i<n;i++){
      int a;
      cin >> a;
      s.pb(a);
   }
   SORT(s);
   ll a1,a2;
   a1 = s[0];
   a2 = l-s[n-1];
   double ans = max(a1,a2);
   
   for(int i=0;i<n-1;i++){
      
      ans = max(ans, (1.0*s[i+1]-s[i])/2);
      
   }
   cout << fixed << setprecision(10) << ans << '\n';
    
}
 
 
int main(){
 HACKS
 
 int t=1;
// cin >> t;
 
while(t--){
   solve();
}

}