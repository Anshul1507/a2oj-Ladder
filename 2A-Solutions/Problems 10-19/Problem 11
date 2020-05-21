// 144A - Arrival of the General (C++)

#include<bits/stdc++.h>
#define ll long long int
#define IO std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair

using namespace std;

int main() {
    IO
   
  int t;
  cin >> t;
  int s=0,l=0,s_i=0,l_i=0,flag=0;
  
  for(int i=0;i<t;i++){
    int n;  cin>>n;
    if(flag == 0){
      s = n;
      l = n;
      flag = 1;
    }else{
      if(n <= s){
        s = n;
        s_i = i;
      }
      else if(n > l){
        l = n;
        l_i = i;
      }
    }
    
  }
  int c=0;
  if(l_i > s_i){
    c=1;
  }
  int large_move = 0, small_move = 0;
  
  large_move = l_i;
  small_move = t-1-s_i-c;
  
  int res = large_move + small_move;
  
  cout << res << endl;
  
}
