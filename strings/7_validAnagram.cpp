#include<bits/stdc++.h>
using namespace std;
bool  validAnagram(string s , string t){
    if(s.length() != t.length()) return false;
    int hash[26] = {0};
    for(int i=0;i<s.size();i++){
         hash[s[i]-'a']++;
    }
    for(int i=0;i<s.size();i++){
      hash[t[i]-'a']--;
    }
    for(auto it : hash){
      if(it!=0) return false;
    }
 return true;
}
int main(){
  cout<<validAnagram("anagram","nagaram");
  return 0;
}