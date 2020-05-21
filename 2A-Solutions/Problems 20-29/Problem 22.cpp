//313A - Ilya and Bank Account (C++)

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
  
  string s;
  cin >> s;
  
  int len = s.length();
  
  if(s[0] == 45){
    string ans;
    for(int i=1;i<len-2;i++){
          ans += s[i];  
      }
      
    ans += min(s[len-1],s[len-2]);
    
    if(ans != "0"){
      ans = "-" + ans;
    }
    cout << stoi(ans);
  }else{
    cout << s;
  }
  return 0; 
  
} 
