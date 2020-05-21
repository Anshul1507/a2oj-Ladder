//A - Team Olympiad (C++)

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

  int w;
  cin >> w;
  vector <int> v;
  vector <int> v1;
  int a;
  for(int i=0;i<w;i++){
    cin >> a;
    v.pb(a);
    v1.pb(a);
  }
  
  sort(v.begin(),v.end());
  
  int c1=0,c2=0,c3=0;
  for(int i=0;i<w;i++){
    switch(v[i]){
      case 1: c1++; break;
      case 2: c2++; break;
      case 3: c3++; break;
    }
  }
  int m = min(c1,min(c2,c3));
  
  if(m > 0){
    int i1=0,i2=0,i3=0;
    int arr1[w],arr2[w],arr3[w];
    int a=0,b=0,c=0;
    for(int i=0;i<w;i++){
      if(v1[i] == 1){
        arr1[a] = i+1;
        a++;
      }else if(v1[i] == 2){
        arr2[b] = i+1;
        b++;
      }else if(v1[i] == 3){
        arr3[c] = i+1;
        c++;
      }  
    }
    
    a=0;
    b=0;
    c=0;
    cout << m << endl;
    while(m--){
      
      cout << arr1[a] << " " << arr2[b] << " " << arr3[c] << endl;
      a++; b++; c++;
    }
  }else{
    cout << m;
  }
  return 0; 
  
  
} 
