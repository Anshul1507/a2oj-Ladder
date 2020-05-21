//A - Minimum Difficulty (C++)

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
  int n;
  cin >> n;
  
  vector <int> v;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    v.pb(a);
  }
  
  vector <int> maxV;
  
  int removed;
  for(int i=1;i<n-1;i++){
      
      int m=0;
      
      removed = v[i];
      
      v.erase(v.begin()+i);

      for(int j=0;j<v.size()-1;j++){
        m = max(m,v[j+1]-v[j]);
      }
      maxV.pb(m);
      
      v.insert(v.begin()+i,removed);
      
  }
  
  sort(maxV.begin(),maxV.end());
  cout << maxV[0];
  return 0; 
  
} 
