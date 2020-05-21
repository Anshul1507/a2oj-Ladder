//262A - Roma and Lucky Number

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
  ll n,k;
  cin >> n >> k;
  int ans=0;
  for(int i=0;i<n;i++){
    string s;
    cin >> s;
    int c =0;
      for(int i=0;i<s.length();i++){
        if(s[i] == '7' || s[i] == '4'){
          c++;
        }
      }
      if(c <= k){
        ans++;
      }
  }
  cout << ans << endl;
  return 0; 
  
} 
