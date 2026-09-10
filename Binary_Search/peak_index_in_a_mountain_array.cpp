#include <iostream>
using namespace std;
int main()
{
    int n;
    int ans = -1;
    int arr[1000] = {1,2,3,4,5,6,7,8,9,8,7,6,5};
    int start = 0, end = 12;

    while(start<=end)
    {
        int mid = end + (start-end)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            ans=mid;
            break;
        }
        else if (arr[mid]>arr[mid-1]){
            start = mid + 1;
        }
        else
        end = mid - 1;
    }
    cout<< ans;
    return 0;
}