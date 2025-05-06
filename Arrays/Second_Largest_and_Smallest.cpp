#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int printSecondLargest(vector<int>a){
       
       if(a.size() == 0 || a.size() == 1) return -1;; 
       int large = INT_MIN,secLarge = INT_MIN;
       for(int i=0;i<a.size();i++)
       {
          if(a[i]>large)
          {
            secLarge = large;
            large = a[i];
          }
          else if(a[i] > secLarge && a[i] != large)
          {
              secLarge = a[i];
          }
       }
       return secLarge;
}

int printSecondSmallest(vector<int>a){

        if(a.size() == 0 || a.size() == 1) cout<<-1; 
        int small = INT_MAX,secSmall = INT_MAX;
        
        for(int i=0;i<a.size();i++)
        {
          if(a[i]<small)
          {
            secSmall = small;
            small = a[i];
          }
          else if(a[i] < secSmall && a[i] != small)
          {
              secSmall = a[i];
          }
        }

        return secSmall;
}

int main(){
  vector<int>a={1,2,3,4,7,7,5};
  cout<<"second largest : "<<printSecondLargest(a)<<endl;
  cout<<"second small : "<<printSecondSmallest(a);

  return 0;
}