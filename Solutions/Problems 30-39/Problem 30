//A - IQ test (C++)

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
  int n;
  cin >> n;
  
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  
  int even=0,odd=0;
  for(int i=0;i<3;i++){
    if(arr[i]%2 == 0){
      even++;
    }else{
      odd++;
    }
  }
  int index;
  if(even > odd){
    for(int i=0;i<n;i++){
      if(arr[i]%2!=0){
        index = i+1;
        break;
      }
    }
  }else{
    for(int i=0;i<n;i++){
      if(arr[i]%2==0){
        index = i+1;
        break;
      }
    }
  }
  cout << index << endl;
  return 0; 
  
  
} 
