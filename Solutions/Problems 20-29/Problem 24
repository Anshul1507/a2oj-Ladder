//230A - Dragons (C++)

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
  
  int s,n,x,y;
  cin >> s >> n;
  
  vector <pair <int,int>> v;
  
  for(int i=0;i<n;i++){
    int a,b;
    cin >> a >> b;
    v.pb(mp(a,b));
  }
  
  sort(v.begin(),v.end());
  
  int flag = 0;
  for(int i=0;i<n;i++){
    if(s>v[i].fi){
      s+= v[i].se;
    }else{
      flag = 1;
      break;
    }
  }
  
  if(flag == 1){
    cout << "NO";
  }else{
    cout << "YES";
  }
  return 0; 
  
} 
