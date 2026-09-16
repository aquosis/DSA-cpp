#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, d;

    cout << "Enter number of packages: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter weight of each package: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of days: ";
    cin >> d;

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

        long long days = 1;
        long long weights = 0;

        for(int i = 0; i < n; i++)
        {
            weights += arr[i];

            if(weights > mid)
            {
                days++;
                weights = arr[i];
            }
        }

        if(days <= d)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << "Minimum ship capacity: " << ans;

    return 0;
}