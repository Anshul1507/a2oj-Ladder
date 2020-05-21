//385A - Bear and Raspberry (C++)

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
  
  int n,c;
  cin >> n >> c;
  
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  
  int max=0,min=0;
  for(int i=0;i<n-1;i++){
    if(arr[i]-arr[i+1]>(max-min)){
      max = arr[i];
      min = arr[i+1];
    }
  }
  
  int ans = max - c - min;
  if(ans <0){
    ans =0;
  }
  cout << ans;
  return 0; 
  
} 
