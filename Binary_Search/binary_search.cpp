#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[1000] = {1,2,3,4,5,6,7,8,9};
    int start = 0, end = 8;
    cout<<"Enter the value of n - ";
    cin>>n;

    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(n==arr[mid])
        {
            cout<<"Found elemend at index"<<" "<<mid;
            return 0;
        }
        else if(n<arr[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
}