//A - Telephone Number (C++)

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
  
  int t;
  cin >> t;
  
  while(t--){
    int len;
    cin >> len;
    string m;
    cin >> m;
    
    if(len == 11) {
      if(m[0] == '8'){
        cout << "YES";
      }else{
        cout << "NO";
      }
    }else if(len > 11){
      int index = 0;
      for(int i=0;i<len;i++){
        if(m[i] == '8'){
          index = i;
          break;
        }else{
          index++;
        }
        }
        if((len-index)>=11){
          cout << "YES";
        }else{
          cout << "NO";
        }
    }else{
      cout << "NO";
    }
    
    cout << endl;
  }
  return 0; 
  
  
} 
