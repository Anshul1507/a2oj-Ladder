//Life Without Zeros

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
  
  string n,m,sum;
  cin >> n >> m;
  
  ll n1 = stoll(n);
  ll m1 = stoll(m);
  
  ll sum1 = n1+m1;
  ll sum2;
  
  sum = to_string(sum1);
  n.erase(remove(n.begin(),n.end(),'0'),n.end());
  m.erase(remove(m.begin(),m.end(),'0'),m.end());
  sum.erase(remove(sum.begin(),sum.end(),'0'),sum.end());
  
  sum1 = stoll(sum);
  n1 = stoll(n);
  m1 = stoll(m);
  
  sum2 = n1+m1;
  if(sum1 == sum2){
    cout << "YES";
  }else{
    cout << "NO";
  }

  return 0; 
  
} 
