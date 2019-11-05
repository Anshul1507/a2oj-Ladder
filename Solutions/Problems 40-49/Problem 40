//A - Greg's Workout (C++)

#include<bits/stdc++.h>
#define ll long int
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
  
  vector <int> v(3,0);
  
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    int c = (i+1)%3;
    
    if(c == 1){
      v[0] += a;
    }else if(c == 2){
      v[1] += a;
    }else {
      v[2] += a;
    }
  }
  
  int index = max_element(v.begin(),v.end()) - v.begin();
  if(index == 0){
    cout << "chest";
  }else if(index == 1){
    cout << "biceps";
  }else{
    cout << "back";
  }
  
  return 0; 
  
} 
