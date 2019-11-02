//459A - Pashmak and Garden (C++)

#include<bits/stdc++.h>
#define ll long long int
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

int main() 
{ 
  HACKS
  
 int x1,x2,y1,y2,difx,dify,temp1,temp2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    if(x1>=0 && x2>=0 || x1<0 && x2<0)
        difx=abs(x2-x1);
    else if(x1<0 || x2<0){
        temp1=abs(x1);
        temp2=abs(x2);
        difx=temp1+temp2;
    }
    if(y1>=0 && y2>=0 || y1<0 && y2<0)
        dify=abs(y2-y1);
    else if(y1<0 || y2<0){
        temp1=abs(y1);
        temp2=abs(y2);
        dify=temp1+temp2;
    }
    
    
    if(difx==0)
        cout << x1+dify << " " << y1 << " " << x2+dify << " " << y2;
    else if(dify==0)
        cout << x1 << " " << y1+difx << " " << x2 << " " << y2+difx;
    else if(difx==dify)
        cout << x1 << " " << y2 << " " << x2 << " " << y1; 
    else
        cout << -1;
  
  return 0; 
  
} 
