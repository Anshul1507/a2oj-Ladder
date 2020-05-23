// 	486B - OR in Matrix (C++)

#include<bits/stdc++.h>
//ANSHUL1507
#define ll long int
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define PI 3.14159265358979323844
#define SORT(v) sort(v.begin(),v.end())
#define REVERSE(v) reverse(v.begin(),v.end()) 
#define maxv(v) max_element(v.begin(),v.end())
#define minv(v) min_element(v.begin(),v.end())
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) m*(n/GCD(m,n))
#define inputarr(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repA(i, a, n) for(int i = a; i <= (n); ++i)
#define repD(i, a, n) for(int i = a; i >= (n); --i)
#define vec vector<ll>
#define v_pair vector<pair<ll,ll>>
#define display(x) for(auto& a : x) cout<<a<<" "; cout << endl;
#define debug(x) cout << x << endl;
#define debug_(x) cout << x << " ";
#define debug__(x,y) cout << x << " " << y << endl; 
const int maxN = (int)3e5 + 100;
const int MOD = (int) 100000000;
const unsigned int Modu = 1000000007;
int a[maxN];
using namespace std;
//--------------------------------Templates---------------------------------
// index based set element
template <class ForwardIterator>
ForwardIterator next (ForwardIterator it,
typename iterator_traits<ForwardIterator>::difference_type n = 1);
 
 
//--------------------------------MAIN SOLUTION-----------------------------
bool IsPrime(int number) 
    {
       int root = sqrt(number) ;
       for(int i=2; i<=root; i++) 
       {
          if(number%i == 0)
             return false;
       } 
       return true;
    } 
int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
       if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
       } 
    } 
    return cnt; 
} 

ll binpow(ll a,ll b){
   // a%=m;
   ll res=1;
   while(b>0){
      if(b&1){
         res = ( (res)*(a) );
      }
      a = (a*a);
      b>>=1;
   }
   return res;
} 
//---------------------------------Code Part--------------------------------

 
void solve(){

   int m,n; cin >> m >> n;
   int arr[m][n];
   
   rep(i,m){
      rep(j,n){
         arr[i][j]=1;
      }
   }
   
   int cnt1=0,cnt2=0;
   
   rep(i,m){
      rep(j,n){
         // cout << arr[i][j] << " ";
         int x; cin >> x;
         
         if(x==0){
            rep(k,n){
               arr[i][k]=0;
            }
            rep(k,m){
               arr[k][j]=0;
            }
         }else{
            cnt1++;
         }
         
      }
   }
   
   rep(i,m){
      rep(j,n){
         int flag=0;
         rep(k,n){
            if(arr[i][k]==1){
               flag=1;
               break;
            }
         }
         if(flag==0){
         rep(k,m){
            if(arr[k][j]==1){
               flag=1;
               break;
            }  
         }
         }
         if(flag==1){
            cnt2++;
         }
    
      }
   }

   
   if(cnt1==cnt2){
   debug("YES");
   rep(i,m){
      rep(j,n){
         debug_(arr[i][j]);
      }
      cout << endl;
   }
   }else{
      debug("NO");
   }

}
 
 
int main(){
int t=1;
// cin >> t;
while (t--){solve();}
}

