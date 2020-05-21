// 	A - Eating Soup(C++)

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

  int n,m,mid;
  cin >> n >> m;
  
  if(m==0)
    cout << 1;
  else if(m==n)
    cout << 0;
  else{
    mid=ceil(n/2.0);
      if(m>=mid){
          cout << n-m;
      }
      else{
          cout << m;
      }
      
  }
  
  return 0; 
  
  
} 
