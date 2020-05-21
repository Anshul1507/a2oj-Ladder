// 266B- BQueue at the School

#include<bits/stdc++.h>
#define ll long int
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define MAX 1e18+11
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
 
int solve(){
   
   int n,t;
   cin >> n >> t;
   string s,s1;
   cin >> s;
   s1 = s;
   while(t--){
      for(int i=0;i<n-1;i++){
         if(s[i] == 'B' and s[i+1] == 'G'){
            swap(s1[i],s1[i+1]);
         }
      }
      s = s1;
   }
   
   cout << s;
   
   return 0;  
} 
 
 
int main(){
 HACKS
 
 int t=1;
// cin >> t;
 
while (t--) {
solve();
    }
}