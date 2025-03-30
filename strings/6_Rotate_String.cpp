#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s , string goal){
   if(s.length() != goal.length()) return false;
   return (s+s).find(goal)!= string::npos;
}
int main()
{
   cout<<rotateString("abcde","cdejb");
   return 0;
}