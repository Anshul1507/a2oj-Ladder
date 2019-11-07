// Marks (C++)

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


bool comp(int a, int b) 
{ 
    return (a < b); 
} 
int largestArray(int arr[], int n) 
{ 
    return *max_element(arr, arr+n); 
}

int main() 
{ 
  HACKS
  
  int n,m;
  cin >> n >> m;
  
  string arr[n];
  for(int i=0;i<n;i++){
      cin >> arr[i];
  }

  int max_arr[m];
  
  for(int i=0;i<m;i++){
    int sarr[n]={0};
    for(int j=0;j<n;j++){
      // cout << arr[j][i] <<" ";
      sarr[j] = arr[j][i]-48;
    }
    int size = sizeof(sarr)/sizeof(sarr[0]);
    
    int c = largestArray(sarr,size);
    max_arr[i] = c;
      
  }
  int ans = 0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     int a = arr[i][j]-48;
     int b = max_arr[j];
     
     if(a == b){
       ans++;
       break;
     }
    }
    
  }
  
  cout << ans;
  return 0; 
  
} 
