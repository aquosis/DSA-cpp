#include <iostream>
using namespace std;
int main()
{
    int n;
    int ans = -1;
    int arr[1000] = {7,8,9,1,2,3,4,5,6};
    int start = 0, end = 8;
    cout<<"Enter the value of n - ";
    cin>>n;

    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid]==n){
            ans = mid;
            break;
        }
        else if(arr[mid]>=arr[0]){
            if(arr[start]<=n&&arr[mid]>=n){
                 end = mid - 1;
            }
            else
            start = mid+1;
        }
        else
            if(arr[mid]<n&&arr[end]>=n){
                start = mid + 1;
            }
            else
            end= mid - 1;
    }
    cout<<ans;
}