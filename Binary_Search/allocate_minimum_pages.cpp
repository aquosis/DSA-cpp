#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter number of books: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter pages in each book: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of students: ";
    cin >> k;

    if(n < k)
    {
        cout << -1;
        return 0;
    }

    long long start = 0;
    long long end = 0;

    for(int i = 0; i < n; i++)
    {
        start = max(start, (long long)arr[i]);
        end += arr[i];
    }

    long long ans = -1;

    while(start <= end)
    {
        long long mid = start + (end - start) / 2;

        long long pages = 0;
        int count = 1;

        for(int i = 0; i < n; i++)
        {
            pages += arr[i];

            if(pages > mid)
            {
                count++;
                pages = arr[i];
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

    cout << "Minimum maximum pages: " << ans;

    return 0;
}