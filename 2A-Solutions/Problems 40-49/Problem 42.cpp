	//A - Valera and X (C++)
  
  #include<bits/stdc++.h>
#define ll unsigned long long int
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
  
  string arr[n];
  
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  char c = arr[0][0];
  char o = arr[0][1];
  
  int j=0,flag = 0;
  if(o!=c){
    
  for(int i=0;i<n;i++){
      if(i != n/2){
      if(arr[i][i] != arr[i][n-i-1]){
        
        flag = 1;
        break;
      }
      }else{
        if(arr[i][i] != c){
          flag = 1;
          break;
        }
      }
  }
  
  if(flag != 1){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j] != o){
        if(j != i && j != (n-i-1)){
          flag = 1;
          break;
        }
      }
    }
    if(flag == 1){
      break;
      }
    }
  }
  
  }
  else{
    flag = 1;
  }
  
  if(flag == 1){
    cout << "NO";
  }else{
    cout << "YES";
  }
  return 0; 
  
} 
