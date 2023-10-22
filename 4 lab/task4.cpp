#include <iostream>
using namespace std;

int findNOD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return findNOD(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    int nod = findNOD(a, b);
    cout << nod << endl;
}