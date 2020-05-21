//337A - Puzzles (C++)

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
  
  int n,t;
  cin >> n >> t;
  
  vector <int> vect;
  for(int i=0;i<t;i++){
    int f; cin >> f;
    vect.pb(f);
  }
  sort(vect.begin(),vect.end());
  int ans=100000007;
  for(int i=0;i<=t-n;i++){
    ans = min(ans,vect[i+n-1]-vect[i]);
  }
  
  cout << ans;
  return 0; 
} 
