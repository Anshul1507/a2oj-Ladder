//208A - Dubstep (C++)

#include<bits/stdc++.h>
#define ll long long int
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
 
/*
* Erase all Occurrences of given substring from main string.
*/
void eraseAllSubStr(std::string & mainStr, const std::string & toErase)
{
size_t pos = std::string::npos;
// Search for the substring in string in a loop untill nothing is found
while ((pos  = mainStr.find(toErase) )!= std::string::npos)
{
// If found then erase it from string
mainStr.erase(pos, toErase.length());
mainStr.insert(pos," ");
// cout << mainStr << endl;
}
}
 
int main() 
{ 
  HACKS
  
  string s;
  cin >> s;
  
  eraseAllSubStr(s,"WUB");
  
  stringstream str;
  string temp;
  
  str << s;
  
  int n = s.length();
  s = "";
  
  while(str >> temp){
    
    s+= temp;
    s+= " ";
  }
  
  cout << s;
 
  return 0; 
} 
