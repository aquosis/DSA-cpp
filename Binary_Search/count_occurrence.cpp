#include <iostream>
using namespace std;
int main()
{
    int n;
    int ans;
    int arr[1000] = {1,2,3,4,4,5,5,6,6,7,8,9};
    int start = 0, end = 11, first = -1, last = -1;
    cout<<"Enter the value of n - ";
    cin>>n;

    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(n==arr[mid])
        {
            first=mid;
            end=mid-1;

        }
        else if(n<arr[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    start = 0, end = 11;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(n==arr[mid])
        {
            last=mid;
            start=mid+1;

        }
        else if(n<arr[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    ans = (last-first)+1;
    cout<<ans;