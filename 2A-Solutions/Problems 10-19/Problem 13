//268A - Games (C++)

#include<bits/stdc++.h>
#define ll long long int
#define IO std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

int main() 
{ 
  IO
  int t; cin >> t;
  vector<pair <int,int> > v;
  
  for(int i=0;i<t;i++){
    int n,m;
    cin >> n >> m;
    v.pb(mp(n,m));
  }
  
  int c = 0;
  for(int i=0;i<t-1;i++){
    for(int j=t-1;j>i;j--){
      if(v[i].fi == v[j].se){
        c++;
      }
      if(v[i].se == v[j].fi){
        c++;
      }
    }  
  }
  
  cout << c ;
	return 0; 
} 
