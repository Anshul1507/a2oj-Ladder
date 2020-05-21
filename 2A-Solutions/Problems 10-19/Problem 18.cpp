// 	443A - Anton and Letters (C++)

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
  
  char s[1000];
  cin.getline(s,sizeof(s));
  
  string str = s;
  
  int c=1;
  vector <string> v;
  
  for(int i=1;i<str.length()-1;i++){
    if(str[i] > 96 and str[i] < 123){
      string check(1,str[i]);
      v.pb(check);
    }
  }
  sort(v.begin(),v.end());
  
  
  for(int i=1;i<v.size();i++){
    if(v[i] != v[i-1]){
      c++;
    }
  }

  if(v.size() == 0){
    cout << 0 << endl;
  }else{
  cout << c << endl;
  }
  return 0; 
} 
