//A - Cakeminator (C++)

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
  
  int r,c;
  cin >> r >> c;
  
  vector <int> vx,vy;
  int flag = 0;
  char a;
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
        cin >> a;
      if(a == 'S'){
        vx.pb(i);
        vy.pb(j);
      }
    }
  }
  // for(int i=0;i<vx.size();i++){
  //   cout << vx[i] << " ";
  // }
  
  sort(vx.begin(),vx.end());
  sort(vy.begin(),vy.end());
  
  vector<int>::iterator xi = unique(vx.begin(),vx.end());
  vx.resize(distance(vx.begin(),xi));
  vector<int>::iterator yi = unique(vy.begin(),vy.end());
  vy.resize(distance(vy.begin(),yi));
  
  // cout << vx.size() << " " << vy.size() << endl;
  
  int NR = r-vx.size();
  
  int NC = c-vy.size();
  
  // cout << NR << " " << NC << endl;
  
  int ans1,ans2;
  if(NR>0){
   ans1 = NR*c;
  }else{
     ans1 = 0;
  }
  if(NC > 0){
   ans2 = NC*vx.size();
  }else{
   ans2=0;
  }
  
  int ans = ans1 + ans2;
  cout << ans << endl;
  
  
  return 0; 
  
  
} 
