//456A - Laptops (C++)

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
  vector <pair <int,int> > v;
  int a,b;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    v.pb(mp(a,b));
  }
  
  sort(v.begin(),v.end());
  int flag = 0;
  for(int i=0;i<n-1;i++){
    if(v[i].fi<v[i+1].fi){
      if(v[i].se > v[i+1].se){
        flag = 1;
        break;
      }
    }
  }
  if(flag == 1){
    cout << "Happy Alex";
  }else{
    cout << "Poor Alex";
  }
  return 0; 
  
} 
