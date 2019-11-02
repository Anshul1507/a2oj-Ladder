//466A - Cheap Travel (C++)

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
  
  int n,m,a,b;
  cin >> n >> m >> a >> b;
  
  int ans;
  int div = b/m;
  if((b/(double)m) <= a){
    
    int cn = n/m;
    
    ans = cn*b;
    
    if((n-(cn*m))>0){
      ans = min((ans + (n-(cn*m))*a), ((cn+1)*b) );
    }
    
    
  }else{
    ans = n*a;
  }
  
  cout << ans << endl;
  return 0; 
  
} 

