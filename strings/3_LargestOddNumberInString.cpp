#include <bits/stdc++.h>
using namespace std;
string LargestOddNumberinString(string s){
  int end = -1, n = s.size()-1;
    for(int i=n;i>=0;i--){
       if((s[i]-'0')%2==1){
         end = i;
         break;
    }
  }
    return s.substr(0,end+1);
}
int main(){
  string s = "222";
  cout<<LargestOddNumberinString(s);
  return 0;
}
// tc -> n
// sc -> n