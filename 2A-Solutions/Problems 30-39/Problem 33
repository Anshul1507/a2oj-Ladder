//A - Valera and Antique Items (C++)

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
  ll v;
  cin >> v;
  
  int ans=0;
  vector <int> ansV;
  
  for(int i=0;i<n;i++){
    int k;
    cin >> k;
    vector <int> vect;
    
    int a;
    for(int j=0;j<k;j++){
      cin >> a;
      vect.pb(a);
    }
    sort(vect.begin(),vect.end());
    
    if(vect[0]<v){
      ans++;
      ansV.pb(i+1);
    }
    
  }
  
  
  cout << ans << endl;
  for(int i=0;i<ansV.size();i++){
    cout << ansV[i] << " ";
  }
  return 0; 
  
  
} 
