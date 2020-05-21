//318A - Even Odds (C++)

#include<bits/stdc++.h>
#define ll long long int
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;


int main() 
{ 
  HACKS
  
  ll n,k,ans;
  cin >> n >> k;
  ll nOdd,nEven;
  if(n%2 == 0){
    nOdd = n/2;
    nEven = n/2;
  }else{
    nOdd = (n+1)/2;
    nEven = n/2;
  }
  
  if(k<=nOdd){
    ans = 2*k - 1; 
  }else{
    ans = 2*(k-nOdd);
  }
  
  cout << ans;
  return 0; 
} 
