// Collecting Beats is Fun (C++)

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
  
  int k;
  cin >> k;
  
  string arr[4][4];
  char a;
  
  int arr_count[100005];
  
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cin >> a;
      arr[i][j] = a;
      
      if(a != '.'){
        int c = (int)a-48;
        ++arr_count[c-1];
      }
    }
  }
  
  int flag = 0;
  
  for(int i=0;i<9;i++){
    if(arr_count[i] > k*2){
      flag = 1;
      break;
    }  
    // cout <<arr_count[i] << endl;
  }
  
  if(flag == 1){
    cout << "NO";
  }else{
    cout << "YES";
  }
  return 0; 
  
} 
