#include <iostream>
using namespace std;
int main()
{
    int arr[1000] = {7,8,9,10,2,3,4,5,6};
    int ans = arr[0];
    int start = 0, end = 8;
   
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            ans = mid;
            end = mid - 1;
        }
    
    }
    cout<<ans;
}