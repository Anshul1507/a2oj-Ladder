//122A - Lucky Division (C++)

#include<bits/stdc++.h>
#define ll long long int
#define IO std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair

using namespace std;

int main() {
    IO
   
  int n;
  cin >> n;
  int flag = 0;
  int arr[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
  int arr_c=0;
  for(int i=0;i<13;i++){
    while(n>arr[i]){
      arr_c++;
    }
  }
  
  if(n%4 == 0 || n%7 == 0){
    flag = 1;
  }else{
    //check numbers in the arr
    for(int i=0;i<13;i++){
      if(n == arr[i] || n%arr[i]==0){
        flag = 1;
        break;
      }
    }
  }
  
  if(flag == 1){
    cout << "YES";
  }
  else{
  cout << "NO";
  }
  
}
