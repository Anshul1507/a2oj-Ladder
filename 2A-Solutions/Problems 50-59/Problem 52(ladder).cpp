//Dominos (C++)

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
  
  int n;
  cin >> n;
  vector <pair <int,int> > v;
  int a,b,s1=0,s2=0;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    v.pb(mp(a,b));
    s1+= a;
    s2+= b;
  }
 
// cout << s1 << " " << s2 << endl;
 SORT(v);
   
  if(s1%2 == 0 && s2%2 == 0){
    cout << 0;
  }else if((s1%2 == 0 && s2%2 != 0) || (s2%2 == 0 && s1%2 != 0) ){
    cout << -1;
  }
  else{
    int flag = 0;
    for(int i=0;i<v.size();i++){
      int c1 = s1 - v[i].fi + v[i].se;
      int c2 = s2 - v[i].se + v[i].fi;
      if(c1%2 == 0 && c2%2 == 0){
        flag = 1;
        break;
      }
    }
    if(flag == 1){
     cout << 1; 
    }else{
    cout << -1;
    }
  }

  return 0; 
  
} 
