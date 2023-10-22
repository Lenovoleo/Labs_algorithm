#include <iostream>
using namespace std;

const int MAX_N = 10;
char maze[MAX_N][MAX_N];
int N;

int findRoomSize(int row, int col)
{

    if (row < 0 || row >= N || col < 0 || col >= N || maze[row][col] != '.')
    {
        return 0;
    }

    maze[row][col] = '*';

    int roomSize = 1;
    roomSize += findRoomSize(row - 1, col);
    roomSize += findRoomSize(row + 1, col);
    roomSize += findRoomSize(row, col - 1);
    roomSize += findRoomSize(row, col + 1);

    return roomSize;
}

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> maze[i][j];
        }
    }

    int startRow, startCol;
    cin >> startRow >> startCol;

    int roomSize = findRoomSize(startRow - 1, startCol - 1);

    cout << roomSize << endl;

    return 0;
}
