//A - Appleman and Easy Task (C++)

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
  
  int n;
  cin >> n;
  
  char arr[n][n];
  
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> arr[i][j];    
    }
  }
  
  int flag = 0;
  int loopFlag = 0;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        flag =0;
        int f1=0,f2=0,f3=0,f4=0;
      if((i-1)>=0){
        if(arr[i-1][j] == 'o'){
          f1++;
          
        }
      }
      
      if((i+1)<n){
        if(arr[i+1][j] == 'o'){
          f2++;
         
        }

      if((j-1)>=0){
        if(arr[i][j-1] == 'o'){
          f3++;
        }
      }
      
      if((j+1)<n){
        if(arr[i][j+1] == 'o'){
          f4++;
        }
      }
      flag = f1+f2+f3+f4;
      if(flag%2!=0){
        
        loopFlag = 1;
        
        break;
      }

      }    
    }
     if(flag%2!=0){
       
        loopFlag = 1;
        
        break;
      }
  }
  
  if(loopFlag == 1){
    cout << "NO";
  }else{
    cout << "YES";
  }
  return 0; 
  
  
} 
