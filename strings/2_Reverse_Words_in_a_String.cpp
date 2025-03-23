#include <bits/stdc++.h>
using namespace std;
class solution {
public:
  // string reverseWords(string s){

  //     int i=0,n=s.size();
  //     string ans="";
  //     while(i<n && s[i] == ' ') { i++; }
  //       while(i<n){
  //        int start = i;
  //        while(i<n && s[i] != ' '){ i++; }
  //        string word = s.substr(start,i-start);
  //        if(ans != "") ans = " "+ans;
  //        ans = word + ans;
  //        while(i<n && s[i] == ' ') i++;
  //      }
  //      return ans;
  // } 
  // TC -> n2(string concatenation )  SC -> n
  string reverseWords(string s){
     int i=0,right =0,left=0,n= s.size();
     while(i<n)
     {
        while(i<n && s[i] == ' ') i++;
        if(i == n) break;
        while(i<n && s[i] != ' ') s[right++] = s[i++];
        reverse(s.begin()+left,s.begin()+right);
        s[right++] =' ';
        left = right;
     }
     s.resize(right-1);
     return s;
  }
};

int main(){
  solution obj;
  string s = "a good   example";
  cout<<obj.reverseWords(s);
  return 0;
}
