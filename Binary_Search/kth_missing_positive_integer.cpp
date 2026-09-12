#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    cout<<"Enter the value of n - ";

    cin>>n;
    int start = 0, end = n-1, k,ans=n;

    cout<<"Enter the value of k - ";
    cin>>k;

    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    while(start<=end)
         {
            int mid = start + (end-start)/2;
            if(arr[mid]-mid-1>=k)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }

        }

        cout<<ans+k;
}