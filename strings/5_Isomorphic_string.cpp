#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t){
    map<char,char>s_to_t;
    map<char,char>t_to_s;     // b a d c  // k i k p
    for(int i=0;i<s.size();i++){
      if(s_to_t.count(s[i]) && s_to_t[s[i]] !=t[i]) return false;
      if(t_to_s.count(t[i]) && t_to_s[t[i]] !=s[i]) return false;
      s_to_t[s[i]] =t[i];
      t_to_s[t[i]] =s[i];

    }
    return true;
}
int main(){
   cout<<isIsomorphic("foo","aba");
   return 0;
}