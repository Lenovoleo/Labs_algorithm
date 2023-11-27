#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int s1, s2;
    cin >> s1 >> s2;

    int list1[s1], list2[s2];

    for (int i = 0; i < s1; ++i)
    {
        cin >> list1[i];
    }

    for (int i = 0; i < s2; ++i)
    {
        cin >> list2[i];
    }

    int cnt[1001] = {0};

    for (int i = 0; i < s1; ++i)
    {
        cnt[list1[i]]++;
    }

    int index = 0;

    for (int i = 0; i < s2; ++i)
    {
        while (cnt[list2[i]] > 0)
        {
            list1[index++] = list2[i];
            cnt[list2[i]]--;
        }
    }

    for (int i = 0; i <= 1000; ++i)
    {
        while (cnt[i] > 0)
        {
            list1[index++] = i;
            cnt[i]--;
        }
    }

    for (int i = 0; i < s1; ++i)
    {
        cout << list1[i] << " ";
    }
    cout << endl;

    return 0;
}
