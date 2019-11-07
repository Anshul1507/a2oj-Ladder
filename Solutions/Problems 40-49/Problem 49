// TL (C++)

#include<bits/stdc++.h>
#define ll long long int
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define MAX 1000000007
#define PI 3.14159265358979323844
#define SORT(v) sort(v.begin(),v.end())
#define REVERSE(v) reverse(v.begin(),v.end()) 
#define maxv(v) max_element(v.begin(),v.end())
#define minv(v) min_element(v.begin(),v.end())
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) m*(n/GCD(m,n))
#define inputarr(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define vec vector<int>
#define v_pair vector<pair<int,int>>
#define display(x) for(auto& a : x) cout<<a<<" "; cout << endl;

using namespace std;

int main() 
{ 
  HACKS
  int n,m;
  cin >> n >> m;
  
  vec vc,vw;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    vc.pb(a);
  }
  SORT(vc);
  REVERSE(vc);
  
  for(int i=0;i<m;i++){
    cin >> a;
    vw.pb(a);
  }
  SORT(vw);
  
  int v=-1;
  
  for(int i=vc[0];i<vw[0];i++){
    if(i<vc[vc.size()-1]*2){
      continue;
    }else{
      v=i;
      break;
    }
  }
  // if((vc[0]/vc[vc.size()-1]) >= 2){
  //   if(vc[0]<vw[0]){
  //     v = vc[0];
  //   }
  // }
  // if(vc[0]*2 < vw[0]){
  //   v = vc[0]*2;
  // }
  cout << v << endl;
  return 0; 
  
} 
