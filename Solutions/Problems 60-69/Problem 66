//The Child and Homework (C++)

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
  
  vector<pair <int,int> > v;
  string s;
  
  for(int i=0;i<4;i++){
    cin >> s;
    v.pb(mp(s.length()-2,i));
  }
  
  SORT(v);
  int ans;
  
  // cout << v[2].fi << v[3].fi;
  if(v[0].fi*2 <= v[1].fi && v[2].fi*2<=v[3].fi){
    ans = 2;
  }
  else if(v[0].fi*2 <= v[1].fi ){
    ans = v[0].se;
  }else if(v[2].fi*2<=v[3].fi){
    ans = v[3].se;
  }else{
    ans = 2;
  }
  
  switch(ans){
    case 0: cout << "A"; break;
    case 1: cout << "B"; break;
    case 2: cout << "C"; break;
    case 3: cout << "D"; break;
  }
  
  
  
  
  return 0; 
  
} 
