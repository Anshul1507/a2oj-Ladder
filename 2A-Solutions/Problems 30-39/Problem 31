//A - Choosing Teams (C++)

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
  int n,k;
  cin >> n >> k;
  
  vector <int> v;
  vector< pair<int, pair<int, int> > > v1;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    v.pb(a);
  }
  
  sort(v.begin(),v.end());
  
  int no = n/3;
  int index=0;
  for(int i=0;i<no;i++){
    v1.pb(mp(v[index],mp(v[index+1],v[index+2])));
    index += 3;
  }
  
  int ans = 0;
  for(int i=0;i<no;i++){
     int check = v1[i].se.se + k;
     if(check <= 5){
       ans++;
     }
  }
  cout << ans << endl;
  return 0; 
  
  
} 
