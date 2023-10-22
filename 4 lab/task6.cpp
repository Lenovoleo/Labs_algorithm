#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int spiral[N][N];

    int num = 1;
    int left = 0, right = N - 1, top = 0, bottom = N - 1;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            spiral[top][i] = num++;
        }

        for (int i = top + 1; i <= bottom; i++)
        {
            spiral[i][right] = num++;
        }

        if (left < right && top < bottom)
        {
            for (int i = right - 1; i > left; i--)
            {
                spiral[bottom][i] = num++;
            }

            for (int i = bottom; i > top; i--)
            {
                spiral[i][left] = num++;
            }
        }

        left++;
        right--;
        top++;
        bottom--;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << spiral[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
