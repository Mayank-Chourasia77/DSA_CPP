#include <iostream>
#include <vector>
#include <climits>
using namespace std;
  bool checkSorted(vector<int>arr){
     for(int i =0;i<arr.size();i++)
     {
        if(arr[i]<arr[i-1]) return false;
     }
     return true;
  }

int main()
{
    vector<int> arr={1,2,4,5,6,35,90};
    cout<<endl<<"array sorted? :"<<checkSorted(arr);

    return 0;
}