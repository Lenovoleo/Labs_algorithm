#include <iostream>
#include <vector>

using namespace std;

bool Heap(const vector<int> &heap, int n)
{
    for (int i = 0; i <= n / 2 - 1; i++)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && heap[i] > heap[left])
            return false;

        if (right < n && heap[i] > heap[right])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> heap(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heap[i];
    }
    if (Heap(heap, n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}