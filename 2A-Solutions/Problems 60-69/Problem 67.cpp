//Soroban (C++)

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
  
  string s;
  cin >> s;
  
  for(int i=s.length()-1;i>=0;i--){
    int n = (int)s[i] - 48;
    if(n>=5){
      cout << "-O|";
      n -=5;
      
    }else{
      cout <<"O-|";
    }
    
    for(int i=0;i<n;i++){
        cout << "O";
      }
      cout << "-";
      int c = 5-n;
      if(c>0){
        for(int i=0;i<c-1;i++){
          cout << "O";
        }
      }
      cout << endl;
  }
  
  return 0; 
  
} 
