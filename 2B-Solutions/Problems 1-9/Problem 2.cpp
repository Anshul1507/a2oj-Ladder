// 339B-Xenia and Ringroad

#include<bits/stdc++.h>
#define ll long long int 
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
int a[maxN];
using namespace std;

string name[1111];
int sc[1111];
map<string,int> score;
set<string> good;

//--------------------------------MAIN SOLUTION-----------------------------
 
void solve(){
ll n,m;
cin >> n >> m;
ll arr[m];
// vector<int> v;int a;
for(ll i=0;i<m;i++){
   cin >> arr[i];
   // v.pb(a);
}

ll res=0,ans=0;
for(int i=0;i<m-1;i++){
   if(arr[i] > arr[i+1]){
      res++;
   }
}

ans += res*n;

ans += arr[m-1]-1;

cout << ans << endl;
} 
 
 
int main(){
 HACKS
 
 int t=1;
// cin >> t;
 
while (t--) {
solve();
    }
}