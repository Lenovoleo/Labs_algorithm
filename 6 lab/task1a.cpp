#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m = 0, n = 0;

    cin >> m;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++)
    {
        int left = i + 1, right = n;

        int elem = m - arr[i];

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            if (arr[mid] == elem)
            {
                cout << arr[i] << " " << arr[mid];
                return 0;
            }
            else if (arr[mid] < elem)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
    }

    return 0;
}
