//Twins (C++)

#include<bits/stdc++.h>
#define ll long long int
#define IO std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair

using namespace std;

int main() {
    IO
   
  int t; cin >> t;
  vector <int> v;
  int n;
  for(int i=0;i<t;i++){
    cin >> n;
    v.pb(n);
  }
  sort(v.begin(), v.end(), greater <>());
  int sum = 0;
  for(int i=0;i<t;i++){
    sum += v[i];
  }
  sum /= 2;
  int newSum=0,count = 0;
  while(newSum<=sum){
    newSum+=v[count];
    count++;
  }
  
  cout << count;
}
