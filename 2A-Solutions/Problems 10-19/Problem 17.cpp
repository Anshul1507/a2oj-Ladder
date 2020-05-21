// 479A - Expression(C++)

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
  
  int a,b,c;
  cin >> a >> b >> c;
  int ans = a*b*c;
  ans = max(ans,(a+b)*c);
  ans = max(ans,(b+c)*a);
  ans = max(ans,a+b+c);
  cout << ans;
  return 0; 
} 
