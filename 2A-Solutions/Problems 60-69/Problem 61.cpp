//Yaroslav and Permutations (C++)

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
  
  int n;
  cin >> n;
  int flag = 0;
  ll arr[10000007];
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    ++arr[a];
    if(arr[a]>(n+1)/2){
      flag = 1;
      break;
    }
  }

  if(flag == 1){
    cout << "NO";
  }else{
    cout << "YES";
  }
  return 0; 
  
} 
