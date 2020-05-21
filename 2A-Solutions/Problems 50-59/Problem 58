//DZY Loves Chessboard

#include<bits/stdc++.h>
#define ll long long int
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define MAX 1000000007
#define PI 3.14159265358979323844
#define SORT(v) sort(v.begin(),v.end())
#define REVERSE(v) reverse(v.begin(),v.end()) 
#define maxv(v) max_element(v.begin(),v.end())
#define minv(v) min_element(v.begin(),v.end())
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) m*(n/GCD(m,n))
#define inputarr(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define vec vector<int>
#define v_pair vector<pair<int,int>>
#define display(x) for(auto& a : x) cout<<a<<" "; cout << endl;

using namespace std;


int main() 
{ 
  HACKS
  
  int n,m;
  cin >> n >> m;
  string arr[n][m];
  
  char a;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a;
       arr[i][j]=a;;

    }
  }
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<m;j++){
  //     cout << arr[i][j];
  //   }
  //   cout << endl;
  // }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr[i][j] != "-"){
      
      if(i%2==0 && j%2==0){
        arr[i][j] = "B";
      }else if(i%2==0 && j%2!=0){
        arr[i][j] = "W";
      }else if(i%2!=0 && j%2==0){
        arr[i][j] = "W";
      }else{
        arr[i][j] = "B";
      }
      
      }
    }
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout << arr[i][j];
    }
    cout << endl;
  }
  return 0; 
  
} 
