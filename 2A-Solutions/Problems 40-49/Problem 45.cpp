// 499A - Watching a Movie (C++)

#include<bits/stdc++.h>
#define ll long int
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

int main() 
{ 
  HACKS
  ll n,x;
  cin >> n >> x;
  
  ll t=1;
  ll ans = 0;
  for(ll i=0;i<n;i++){
    ll l,r;
    cin >> l >> r;
    while((t+x)<=l){
      t += x;
    }
  
    ans += r+1-t;
    t = r+1;
    
  }
  cout << ans;
  return 0; 
  
} 
