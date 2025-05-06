#include <iostream>
#include <vector>
#include <climits>
using namespace std;
   int func(vector<int> &a){
     int l =0 , r= 1;
     while(r<a.size())
     {
         if(a[r]!=a[l])
         {
           l++;
           a[l] = a[r];
           r++;
         }
         else{
                r++;
         }
     }
     return l;
  }

int main()
{
    vector<int> arr={1,1,2,2,2,3,3};
    int x = func(arr);
    for(int i=0;i<x+1;i++)
    {
       cout<<arr[i]<<" ";
    }

    return 0;
}