// 508B-Anton and currency you all know

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
const unsigned int Modu = 1000000007;
int a[maxN];
using namespace std;

//--------------------------------Templates---------------------------------
// index based set element
template <class ForwardIterator>
ForwardIterator next (ForwardIterator it,
typename iterator_traits<ForwardIterator>::difference_type n = 1);
 
 
//--------------------------------MAIN SOLUTION-----------------------------
bool isPrime(int n){
   int y=1;
   for(int i = 2; i<=sqrt(n);i++){
      if(n%i==0){
         y=0;
         break;
      }
   }
   if(y==1){
      return true;
   }else{
      return false;
   }
}

bool check(ll x){
   if(x <= 25){
      if(x == 4 || x == 9 || x == 25){
         return true;
      }
   }else{
   double n = sqrt(x);
   if((int)sqrt(x)!=n){
      return false;
   }else{
      if(isPrime(n)){
         return true;
      }else{
         return false;
      }
   }
   }
}

void solve(){

  ll n;
  cin >> n;
  if(check(n)){
     cout << "YES" << '\n';
  }else{
     cout << "NO" <<'\n';
  }
    
}
 
 
int main(){
 HACKS
 
 int t;
cin >> t;
 
while(t--){
   solve();
}

}