//Helpful Maths

#include<bits/stdc++.h>
#define ll long long int
#define IO std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair

using namespace std;

int main() {
    IO
   
   string s;
   cin >> s;
   int len = s.length();
   vector <int> v;
   for(int i=0;i<len;i++){
     if(s[i]!='+'){
       v.pb(s[i]);
     }
   }
   sort(v.begin(),v.end());
   int v_size = v.size();
   for(int i=0;i<v_size-1;i++){
     cout << v[i]-'0' << "+";
   }
    cout << v[v_size-1]-'0';
}
