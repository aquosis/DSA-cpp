#include <iostream>
using namespace std;
int main()
{
    int n;
    int ans;
    int arr[1000] = {1,2,3,4,5,6,7,8,9};
    int start = 0, end = 8;
    cout<<"Enter the value of n - ";
    cin>>n;
    if(n<2){
        cout<<n;
    }

    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(1LL*mid*mid==n)
        {
            cout<<mid;
            return 0;
        }
        else if(1LL*mid*mid<n)
        {
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<ans;
}