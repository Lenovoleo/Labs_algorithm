#include <iostream>
using namespace std;
void BubleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int maxSize = 2000;
    int ids[maxSize];
    int count = 0;
    int id;
    while (cin >> ids[count])
    {
        count++;
        if (cin.peek() == '\n')
        {
            break;
        }
    }
    cin >> id;
    ids[count] = id;
    count++;
    BubleSort(ids, count);
    for (int i = 0; i < count; i++)
    {
        cout << ids[i] << " ";
    }
    return 0;
}