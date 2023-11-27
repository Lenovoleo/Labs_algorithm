#include <iostream>
#include <algorithm>
using namespace std;
const int MAX_GRADE = 50;
double midGrade(int arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return size == 0 ? 0 : sum / size;
}
void selectionSort(int arr[][MAX_GRADE], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (midGrade(arr[j], MAX_GRADE) < midGrade(arr[minIdx], MAX_GRADE))
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            swap_ranges(arr[i], arr[i] + MAX_GRADE, arr[minIdx]);
        }
    }
}
int main()
{
    int n = 0;
    cin >> n;
    int arr[MAX_GRADE][MAX_GRADE];
    for (int i = 0; i < n; i++)
    {
        int balls[MAX_GRADE];
        int ball, count = 0;
        while (cin >> ball)
        {
            balls[count++] = ball;
            if (cin.peek() == '\n')
            {
                break;
            }
        }
        copy(balls, balls + MAX_GRADE, arr[i]);
        cin.ignore();
    }
    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < MAX_GRADE; j++)
        {
            if (arr[i][j] != 0)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}