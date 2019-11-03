//A - Fox And Snake (C++)

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
  int n,m;
  cin >> n >> m;
  
  string odd="#", even1="" , even2="#";
  
  while(m-->1){
    odd += "#";
    even1 += ".";
    even2 += ".";
  }
  even1 += "#";
  int flag = 0;
  for(int i=1;i<=n;i++){
    if(i%2==0){
      if(flag==0){
        cout << even1 << endl;
        flag = 1;
      }else{
        cout << even2 << endl;
        flag = 0;
      }
    }else{
      cout << odd << endl;
    }
  }
  
  return 0; 
  
  
} 
