//483A - Counterexample (C++)

#include<bits/stdc++.h>
#define ll unsigned long long int
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

int main() 
{ 
  HACKS
  ll l,r;
  cin >> l >> r;
  
  for(ll i=l;i<=r;i++){
    for(ll j=i+1;j<=r;j++){
      for(ll k=j+1;k<=r;k++){
        if(__gcd(i,j) == 1 && __gcd(j,k) == 1){
          if(__gcd(i,k)!=1){
            cout << i << " " << j << " " << k;
            return 0;
            break;
          }
        } 
      }
    }
  }
  cout << -1;
  return 0; 
  
} 
