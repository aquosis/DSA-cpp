#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter number of walls: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter length of each wall: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of painters: ";
    cin >> k;

    long long start = 0, end = 0;

    for(int i = 0; i < n; i++)
    {
        start = max(start, (long long)arr[i]);
        end += arr[i];
    }

    long long ans = -1;

    while(start <= end)
    {
        long long mid = start + (end - start) / 2;

        long long count = 1;
        long long length = 0;

        for(int i = 0; i < n; i++)
        {
            length += arr[i];

            if(length > mid)
            {
                count++;
                length = arr[i];
            }
        }

        if(count <= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << "Minimum time: " << ans;

    return 0;
}