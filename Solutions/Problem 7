//58A - Chat room (C++)

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
  int c=0;
  
  int flag = 0;
  char next='h',check='e';
  
  for(int i=0;i<len;i++){
    if(s[i]==next){
         flag = 1;
    }
    if(flag == 1){
    if(s[i] == next){

      if(c==2){
        
        
        c=3;
      }
    }else if(s[i] == check ){
   
      if(c==0){
        next = 'e';
        check = 'l';
       
        c++;
      }else if(c==1){
        next = 'l';
        check = 'o';
       
        c++;
      }else if(c==3){
        next = 'o';
        c++;
        
      }
    }
    }
  }
  
  if(c==4){
    cout << "YES";
  }else{
    cout << "NO";
  }
  
}
