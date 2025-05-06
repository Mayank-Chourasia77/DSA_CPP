#include <iostream>
#include <vector>
#include <climits>
using namespace std;
  int findLargest(vector<int>arr){
    int maxi = INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
       if(arr[i]>maxi)
       {
          maxi = arr[i];
       }
    }

    return maxi;
  }

int main()
{
    vector<int> arr={1,2,4,5,6,35,90};
    for(auto it: arr) cout<<it<<" ";
    cout<<endl<<"max element :"<<findLargest(arr);

    return 0;
}