// 233A - Perfect Permutation (C++)

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
  int n;
  cin >> n;
  
  if(n%2!=0){
    cout << "-1";
  }else{
    for(int i=1;i<=n;i++){
      if(i%2==0){
        cout << i-1 << " ";
      }else{
        cout << i+1 << " ";
      }
    }
  }
  return 0; 
  
} 
