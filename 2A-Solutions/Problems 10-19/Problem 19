// 469A - I Wanna Be the Guy (C++)

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
  
  int arr[t]={0};
  
  int p;
  cin >> p;
  
  for(int i=0;i<p;i++){
      int n; cin >> n;
      if(arr[n-1]==0){
        arr[n-1] = 1;
      }
  }
  
  int q;
  cin >> q;
  
  for(int i=0;i<q;i++){
    int n; cin >> n;
    if(arr[n-1]==0){
      arr[n-1] = 1;
    }
  }
  int flag = 0;
  for(int i=0;i<t;i++){
    if(arr[i]!=1){
      flag = 1;
      break;
    }
    
  }
  
  if(flag == 1){
    cout << "Oh, my keyboard!";
  }else{
    cout << "I become the guy.";
  }
  return 0; 
} 
