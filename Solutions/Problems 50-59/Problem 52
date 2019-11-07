//Silent Classroom

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
int arr[30];
int main() 
{ 
  HACKS
  int n;
    string s;
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> s;
        char w = s[0];
        w = tolower(w);
        arr[w-'a']++;
    }
    int res = 0;
    for (int i = 0;i < 26;i++)
    {
        int l = arr[i]/2;
        int r = arr[i]-l;
        l--;
        r--;
        if (l > 0)
            res += (1+l)*l/2;
        if (r > 0)
            res += (1+r)*r/2;
    }
    cout << res << endl;
  return 0; 
  
} 
