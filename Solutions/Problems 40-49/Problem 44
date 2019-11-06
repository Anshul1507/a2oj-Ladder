//A - Supercentral Point (C++)

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
  int n;
  cin >> n;
  vector <pair <int,int> > v;
  int a,b;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    v.pb(mp(a,b));
  }
  int ans=0;
  int flag1,flag2,flag3,flag4;
  
  for(int i=0;i<n;i++){
    flag1 = 0;
    flag2 = 0;
    flag3 = 0;
    flag4 = 0;
    
    for(int j=0;j<n;j++){
      if(v[i].fi == v[j].fi && v[i].se < v[j].se){
        flag1 = 1;
      }
      
      
        if(v[i].fi == v[j].fi && v[i].se > v[j].se){
          flag2 = 1;
        }
       
          if(v[i].se == v[j].se && v[i].fi < v[j].fi){
            flag3 = 1;
          }
         
            if(v[i].se == v[j].se && v[i].fi > v[j].fi){
              flag4 = 1;
            }
        
    }
    if(flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 1) {
      ans++;
    }
  }
  
  cout << ans << endl;
  return 0; 
  
} 
