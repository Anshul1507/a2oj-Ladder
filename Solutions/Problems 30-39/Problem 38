//A - Playing with Dice (C++)

#include<bits/stdc++.h>
#define ll long int
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

int main() 
{ 
  HACKS
  int a,b;
  cin >> a >> b;
  int s1=0,s2=0;
  for(int i=1;i<=6;i++){
    if(abs(a-i)<abs(b-i)){
      s1++;
    }else if(abs(a-i)>abs(b-i)){
      s2++;
    }
  }
  
  cout << s1 << " " << (6-(s1+s2))  << " " << s2;
  return 0; 
  
} 
