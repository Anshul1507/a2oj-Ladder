//276A - Lunch Rush (C++)

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
  
  ll n,k,t,f,max=-10000000000;
  cin >> n >> k;
  
  for(ll i=0;i<n;i++){
      cin >> f >> t;
      
      if(t<=k){
          if(f>max){
            max=f;
          }
      }
      else{
          if((f-(t-k))>max){
            max=f-(t-k);
          }
      }
  }
  
  cout << max << endl;
  return 0; 
  
} 
