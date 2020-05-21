//A - Oath of the Night's Watch (C++)

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
  
  ll n;
  cin >> n;
  
  vector <int> v;
  int a;
  
  for(ll i=0;i<n;i++){
    cin >> a;
    v.pb(a);
  }
  
  sort(v.begin(),v.end());
  
  ll ex = count(v.begin(),v.end(),v[0]);
  // cout <<v.size() << endl;
  
  if((v.size()-ex) > 0){
  ex += count(v.begin(),v.end(),v[v.size()-1]);
  }
  ll ans = v.size() - ex;
  cout << ans << endl;
  
  
  return 0; 
  
  
} 
