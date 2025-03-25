#include <bits/stdc++.h>
using namespace std;
string LongestCommonPrefix(vector<string>s){
  if(s.empty()) return "";
  string ans ="";
    for(int i=0;i<s[0].size();i++){
      char comp = s[0][i];
       for(int j=1;j<s.size();j++){
            if(i>= s[j].size() || s[j][i] != comp) return ans;
       }
       ans += comp;
    }
    return ans;
}
int main(){
   vector<string> s = {"aaa","a","aa"};
   cout<<LongestCommonPrefix(s);
   return 0;
}