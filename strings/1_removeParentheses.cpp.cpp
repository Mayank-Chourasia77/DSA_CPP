#include<iostream>
using namespace std;
string removeOuterParentheses(string s){
    int depth =0; string ans ="";
    for(int i=0;i<s.size();i++){
      if(s[i] == '(')
      {
        if(depth >0) ans+="(";
         depth++;
         
      }
      else{
        depth--;
        if(depth>0) ans+= 
      }
    }
    return ans;
}
int main(){
  string s = "(()())(())(()(()))";
  cout<<removeOuterParentheses(s);
  return 0;
}