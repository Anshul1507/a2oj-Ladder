//Football (C++)

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
  string s1,s2,s;
  int c1=1,c2=0;
  cin >> s1;
  if(n>1){
  while(n-->1){
    cin >> s;
    if(s == s1){
      c1++;
    }else{
      s2=s;
      c2++;
    }
  }
  }
  // cout << c1 << " " << c2 << endl;
  if(c1>c2){
    cout << s1;
  }else{
  cout << s2;}
  return 0; 
  
} 
