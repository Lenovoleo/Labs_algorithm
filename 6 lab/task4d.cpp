#include <iostream>

using namespace std;

double midBall(int balls[], int size)
{
    double total = 0;
    for (int i = 0; i < size; ++i)
    {
        total += balls[i];
    }
    return size == 0 ? 0 : total / size;
}

void bubbleSort(int arr[][100], int size[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (midBall(arr[j], size[j]) > midBall(arr[j + 1], size[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
                swap(size[j], size[j + 1]);
            }
        }
    }
}

int main()
{
    int num;
    cin >> num;

    int arr[100][100];
    int size[100];
    for (int i = 0; i < num; ++i)
    {
        int ball, j = 0;

        while (cin >> ball)
        {
            arr[i][j++] = ball;
            if (cin.peek() == '\n')
            {
                break;
            }
        }
        size[i] = j;
        cin.ignore();
    }

    bubbleSort(arr, size, num);

    for (int i = 0; i < num; ++i)
    {
        for (int j = 0; j < size[i]; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
