//300-A Array (C++)

#include<bits/stdc++.h>
#define ll unsigned long long int
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
  int n;
  cin >> n;
  vec nv,pv,zv;
  
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    
    if(a<0){
      nv.pb(a);
    }else if(a>0){
      pv.pb(a);
    }else{
      zv.pb(a);
    }
  }
  
  //if positive elements are not present >> transferring two negative numbers
  if(pv.size() == 0){
    for(int i=0;i<2;i++){
      pv.pb(nv.back());
      nv.pop_back();
    }
  }

  //if negative numbers are even then transfer one extra neg number to zero vector  
  if(nv.size() % 2 == 0){
    zv.pb(nv.back());
    nv.pop_back();
  }
  
  //display
  cout << nv.size() << " ";
  for(auto &i : nv) cout << i << " ";
  
  cout << endl;
  
  cout << pv.size() << " ";
  for(auto &i : pv) cout << i << " ";
  
  cout << endl;
  
  cout << zv.size() << " ";
  for(auto &i : zv) cout << i << " ";
  
  return 0; 
  
} 
